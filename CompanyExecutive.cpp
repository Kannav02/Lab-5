#include "CompanyExecutive.h"
#include <iostream>


CompanyExecutive::CompanyExecutive(){
    List=nullptr;
    count=0;
}
bool CompanyExecutive::AddPersonnel(int n){
    ExecutiveEmployee* temp=new ExecutiveEmployee[count+n];
    if(count+n<MAX_SIZE){
    for(int i=0;i<n;i++){
            count++;
            *temp=*List;          
            delete [] this->List;
            this->List=nullptr;
            std::cout<<"Enter The Executive's Name";
            getline(std::cin,temp[count-1].name);
            
           
            std::cout<<"Enter The Executive's position";
            getline(std::cin,temp[count-1].position);
            
            std::cout<<"Enter The Executive's base salary";
            std::cin>>temp[count-1].baseSalary;
           
            std::cout<<"Enter The Executive's annual stock option dividend";
            std::cin>>temp[count-1].stockOptionDividend;
            
            std::cout<<"Enter The Executive's annual prerequisites";
            std::cin>>temp[count-1].perquisites;

            temp[count-1].salary=temp[count-1].baseSalary+temp[count-1].stockOptionDividend+temp[count-1].perquisites;
            std::cout<<std::endl;
            std::cin.ignore(1000,'\n');


            
            
            
    }
}
    else{
        return false;
    }

    delete [] this->List;
        this->List=new ExecutiveEmployee[count];
        *List=*temp;
        return true;
}

bool CompanyExecutive::FindPersonnel(ExecutiveEmployee& person,std::string name){
    if(this->List==nullptr){
        return false;
    }
    bool flag=false;
    for(int i =0;i<count && !flag;i++){
        if(this->List[i].name==name){
            person=List[i];
            flag=true;
        }

    }
    return flag;

}

 double CompanyExecutive::CalculateSalary(std::string name){
     for(int i=0;i<count;i++){
        if(this->List[i].name==name){
            return this->List[i].baseSalary+this->List[i].stockOptionDividend+this->List[i].perquisites;
        }
        
    }
    return 0.00;
}

CompanyExecutive::~CompanyExecutive(){
    delete [] this->List;
    this->List=nullptr;
}

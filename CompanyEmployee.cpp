#include <iostream>
#include "CompanyEmployee.h"


CompanyEmployee::CompanyEmployee()
{
    List=nullptr;
    count=0;
}

CompanyEmployee::~CompanyEmployee()

{
    delete [] this->List;
    this->List=nullptr;
}
bool CompanyEmployee::AddPersonnel(int n){
    StandardEmployee* temp=new StandardEmployee[count+n];
    if(count+n<MAX_SIZE){
    for(int i=0;i<n;i++){
            count++;
            *temp=*List;          
            delete [] this->List;
            this->List=nullptr;
            std::cout<<"Enter The Employee's Name";
            getline(std::cin,temp[count-1].name);
       
           
            std::cout<<"Enter The Employee's position";
            getline(std::cin,temp[count-1].position);

            std::cout<<"Enter The Employee's base salary";
            std::cin>>temp[count-1].baseSalary;
            
            std::cout<<"Enter The Employee's annual profit sharing amount";
            std::cin>>temp[count-1].profitSharing;
           
            std::cout<<"Enter The Employee's performance bonus";
            std::cin>>temp[count-1].performanceBonus;
            std::cout<<std::endl;
            std::cin.ignore(1000,'\n');
            temp[count-1].salary=temp[count-1].baseSalary+temp[count-1].profitSharing+temp[count-1].performanceBonus;


            
            
            
        }
    }
        else{
            return false;
        }
        delete [] this->List;
        this->List=new StandardEmployee[count];
        *List=*temp;
        return true;
}    

bool CompanyEmployee::FindPersonnel(StandardEmployee& person, std::string name){
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
double CompanyEmployee::CalculateSalary(std::string name){
    for(int i=0;i<count;i++){
        if(this->List[i].name==name){
            return this->List[i].baseSalary+this->List[i].performanceBonus+this->List[i].profitSharing;
        }

    }
    return 0.00;
}










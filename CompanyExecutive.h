#ifndef _EXECUTIVE
#define _EXECUTIVE
#include <iostream>
#include "CompanyCommon.h"

class CompanyExecutive
{
private:
    ExecutiveEmployee* List;
    int count;
public:
    CompanyExecutive();
    bool AddPersonnel(int n);
    bool FindPersonnel(ExecutiveEmployee& person,std::string name);
    double CalculateSalary(std::string name);
    ~CompanyExecutive();
};




#endif
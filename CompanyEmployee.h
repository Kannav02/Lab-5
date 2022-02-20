#ifndef _EMPLOYEE
#define _EMPLOYEE
#include <iostream>
#include "CompanyCommon.h"

class CompanyEmployee
{
private:
    StandardEmployee* List;
    int count;

public:
    CompanyEmployee();
    ~CompanyEmployee();
    bool AddPersonnel(int n);
    bool FindPersonnel(StandardEmployee& person,std::string name);
    double CalculateSalary(std::string name);

};













#endif //_EMPLOYEE
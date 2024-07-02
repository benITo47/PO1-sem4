#ifndef COMPANY_H
#define COMPANY_H

#include "Employee.h"
#include<iostream> 
#include<functional> 
#include<algorithm> 
#include<vector>
#include<string>

class Company 
{
    public:

    ~Company()
    {
        for(auto elem: pracownicyKOPIA_DELETE)
        {
            if(elem != nullptr){
            delete elem;
            }
            }
    }

    void addEmployee(std::string name, std::string job, int hours, double hourly)
    {
        Employee* pracownik = new Employee(name,job,hours,hourly);
        pracownicy.push_back(pracownik);
        pracownicyKOPIA_DELETE.push_back(pracownik);
    }

    void displayEmployees()
    {
        std::cout << "\n";
        for(auto elem: pracownicy)
        {
            std::cout << elem->getName() << " - " << elem->getSalary() << ".0 PLN " << " "<< elem->getHourly() << "/h "<<std::endl;
        }
              std::cout << "\n";
    }

    void sortEmployees(std::function<bool(Employee* a, Employee* b)>  sort)
    {
        std::sort(pracownicy.begin(), pracownicy.end(), sort );
    }


    void removeEmployees(std::function<bool(Employee* a)> HR_meeting)
    {   
        auto size = pracownicy.size();

        for(int i = 0; i < size; i++)
        {
        auto iterator = std::remove_if(pracownicy.begin(),pracownicy.end(), HR_meeting);
        
        if(iterator == pracownicy.end())
        {
            return;
        }
        pracownicy.erase(iterator,pracownicy.end());
        }

    }

    private:

    std::vector<Employee*> pracownicy; 
    std::vector<Employee*> pracownicyKOPIA_DELETE; 
};

#endif

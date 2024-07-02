#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream> 


class Employee 
{
    public:

    Employee(std::string name, std::string job, int hours, double hourly):_name(name), _job(job), _hours(hours), _hourly(hourly){}

    int getSalary()
    {
        return _hours * _hourly; 
    }

    std::string getName()
    {
        return _name;
    }

    double getHourly()
    {
        return _hourly; 
    }

    int getHours()
    {
        return _hours;
    }
    private:

    std::string _name;
    std::string _job;    
    int _hours; 
    double _hourly; 

};

#endif

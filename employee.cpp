#pragma once
#include <iostream>
using namespace std;

class employee{
    private:
        int id;
        string name;
        string department;
        double salary;
    public:
        employee(){
            id = 0;
            name = "Unknown";
            department = "Unknown";
            salary = 0.00;
        }
        employee(int id,string name,string department,double salary){
            this->id = id;
            this->name = name;
            this->department = department;
            this->salary=salary;
        }
};
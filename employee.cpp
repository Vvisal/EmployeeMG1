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
        int getId(){
            return id;
        }
        void setId(int id){
            this->id = id;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }
        string getDepartment(){
            return department;
        }
        void setDepartment(string department){
            this->department = department;
        }
        double getSalary(){
            return salary;
        }
        void setSalary(double salary) {
            this->salary = salary;
        }
};
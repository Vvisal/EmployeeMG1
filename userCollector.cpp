#pragma once;
#include <iostream>
#include <vector>
#include "user.cpp"
using namespace std;

class userCollector{
private:
    vector <user> users;
public:
    void userMenu(){
        cout << "1, Add new user." << endl;
        cout << "2, View user." << endl;
        cout << "3, Update user." << endl;
        cout << "4, Delete user." << endl;
        cout << "5, Search user." << endl;
        cout << "6, Save user." << endl;
        cout << "7, Load user." << endl;
        cout << "8, Exit";
    }
    void addUser(user u){
        users.push_back(u);
    }
    void viewUser(){
        for(auto iter=users.begin();iter!=users.end();iter++)
        {
            cout<<iter->toString()<<endl;
        }
    }
};
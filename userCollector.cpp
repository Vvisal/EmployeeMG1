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
        cout << "1, Create user";
        cout << "2, View user";
        cout << "3, Update user";
    }
};
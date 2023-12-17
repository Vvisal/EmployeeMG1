#pragma once;
#include <iostream>
#include "user.cpp"
#include "userCollector.cpp"

using namespace std;

class application{
private:
    userCollector test;
public:
    void userMenu(){
        
    }
    void run() {
        test.userMenu();
    }

};


#pragma once;
#include <iostream>
#include "user.cpp"
#include "userCollector.cpp"

using namespace std;

class application{
private:
    userCollector uc;
    int option;
    int getCommand(){
        int option;
        cout << "Enter your choice : ";
        cin >> option;
        return option;
    }
public:
    void run() {
        uc.userMenu();
        option = getCommand();
        switch(option) {
            case 1:
                user us;
                us.input();
                uc.addUser(&us);
                break;
            case 2:
                break;
            default:
                cout << "invalid choice";
                break;
        }
    }

};


#pragma once;
#include <iostream>
#include <sstream>
using namespace std;

class User {
private :
    string username;
    string password;
public:
    user() {
        username = "Unknown";
        password = "Unknown";
    }
    user (string username , string password) {
        this->username = username;
        this->password = password;
    }
    string getUsername(){
        return username;
    }
    void setUsername(string username){
        this->username = username;
    }
    string getPassword(){
        return password;
    }
    void setPassword(string password){
        this->password = password;
    }
    void input(){
        
    }

};


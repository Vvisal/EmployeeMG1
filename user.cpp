
#pragma once;
#include <iostream>
using namespace std;

class user {
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
    void setPassword(){
        this->password = password;
    }
    
};


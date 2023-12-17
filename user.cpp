#pragma once;
#include <iostream>
#include <sstream>
using namespace std;

class user {
private :
    string username;
    string password;
    string confirmPassword;
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
    string getConfirmPassword(){
        return confirmPassword;
    }
    void setConfirmPassword(string confirmPassword){
        this->confirmPassword = confirmPassword;
    }

    void input(){
        cout << "Enter username : ";
        cin >> username; 
        setUsername(username);
        cout << "Enter password : ";
        cin >> password;
        setPassword(password);
        cout << "Enter confirm password : ";
        cin >> confirmPassword;
        setConfirmPassword(confirmPassword);
    }
    void output() {
        cout << "Username : " << getUsername() << "\t\t" << "Password : " << getPassword() <<"\t\t" << "Confirm password : " << getConfirmPassword() << endl;
    }
    string toString(){
        stringstream ss;
        ss<< "Username : " << getUsername() << "\t\t" << "Password : " << getPassword() <<"\t\t" << "Confirm password : " << getConfirmPassword() << endl;
        return ss.str();
    }

};


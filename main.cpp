#include <iostream>

using namespace std;

void loginopt(){
    cout << endl;
    cout << "Access Granted" << endl;
    cout << "Good Day Admin" << endl;
}

void line(){
    cout << "-------------------------------";
}

int main()
{

    string username,password;

    line();
    cout << endl;
    cout << "Please Login Into You Account" << endl;
    line();

    cout << endl;
    cout << endl << "Enter Your Username: ";
    cin >> username;

    cout << "Enter Your Password: ";
    cin >> password;

    cout << endl;
    line();
    cout << endl;

    if(username == "Admin" && password == "Admin2020") {
            loginopt();
     }
    else if(username == "Secretary" && password == "Sec2020") {
            loginopt();
    }
    else if(username == "Guest" && password == "Guest2020") {
            loginopt();
    }
    else{
            cout << "ACCESS Denied, try again....";
    }

    cout << endl;
    line();

    return 0;
}

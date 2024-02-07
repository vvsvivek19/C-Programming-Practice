#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class person {
    char name[20];
    int age;
    int phone;
    
    public:
    void getdetails(){
        cout << "Enter name: ";
        cin >> name;
        fflush(stdin);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Phone Number: ";
        cin >> phone;
    }
    void printdetails(){
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Phone number: " << phone << "\n";

    }

};

int main(){
    system("cls");
    person p1;
    p1.getdetails();
    p1.printdetails();
    return 0;
}
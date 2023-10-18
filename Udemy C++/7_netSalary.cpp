#include<iostream>
using namespace std;
int main()
{
    float ba,allow,ded,netSal;
    cout<<"Please Enter the Basic Salar: ";
    cin>>ba;
    cout<<"Please Enter the percentage of allowances: ";
    cin>>allow;
    cout<<"Please Enter the percentage of deductions: ";
    cin>>ded;

    netSal = ba + (ba * allow / 100) - (ba * ded / 100);

    cout<<"Your Net Salary is "<<netSal;
    return 0;

}
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,r1,r2;

    cout<<"Please enter the values of coefficient a,b and constant c"<<endl;
    cin>>a>>b>>c;

    r1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    r2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    
    cout<<"Roots are("<<r1<<","<<r2<<")"<<endl;
    
    return 0;

}
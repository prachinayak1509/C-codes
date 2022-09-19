#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float root_1,root_2;
    cout << "enter three numbers:";
    cin >> a >> b >> c;
    int d;
    d=sqrt(b*b-4*a*c);
    root_1=(-b+d)/2a;
    root_2=(-b-d)/2a;
    if(d<0)
    {
        cout << "roots are imaginary";
    }
    if(d=0 || d>0 )  
     {
        cout << "roots are real";
    }
    cout << "roots are root_1" << root_1 << endl;
    cout << "root_2" << root_2; 
    return 0;
}
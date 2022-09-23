#include<iostream>
using namespace std;
int main()
{
    int n,i,max,min,arr[10];
    cout << "enter size of array";
    cin >> n;
    cout << "enter elements:";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
           max=arr[i];
        }
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {
           min=arr[i];
        }
    }
    cout << "max element:"<< max;
    cout << "min element:" << min;
     return 0;

}
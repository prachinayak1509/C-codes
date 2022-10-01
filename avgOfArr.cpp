#include<iostream>
using namespace std;
int main(){
    int arr[100],n,i,sum=0;
    float avg;
    cout << "enter size of array:";
    cin >> n;
    cout << "enter elements:";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "the given array:";
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    for(i=0;i<n;i++)
{
    sum=sum+arr[i];
    
}

avg=sum/n;
cout << "the average of given array:" << avg;


    
    
}
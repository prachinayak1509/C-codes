#include<iostream>
using namespace std;
int main()
{
    int n,i,arr[10],temp;
    cout << "enter size of array:";
    cin >> n;
    cout << "enter elements:" ;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
     int start=0;
     int end=n-1;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

    }
    for (i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;

}
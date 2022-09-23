#include<iostream>
using namespace std;
void rotate(int arr[],int n)
{
    int x=arr[n-1];
    int i;
    for(i=n-1;i>0;i--)
    {arr[i]=arr[i-1];}
    arr[0]=x;
}
int main()
{
    int i,n,arr[100];
    cout << "enter size of array:";
    cin >> n;
    cout << "enter elements:";
    for(i=0;i<n;i++)
    {
       cin >> arr[i];
    }
    cout << "array:";
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    rotate(arr,n);
    cout << "rotated array:";
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
    
    }
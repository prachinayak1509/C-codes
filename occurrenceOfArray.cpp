#include<iostream>
using namespace std;
int main()
{
    int n,i,arr[100],x;
    cout << "enter size of array:";
    cin >> n;
    cout << "enter elements:";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "enter element whose occurence you want to find:";
    cin >> x;
    int count =0;
    for(i=0;i<n;i++)
    { 
        if(arr[i]==x)
        {count++;
        }
    }
    cout << "the occurrence:" << count;
    return 0;
}
#include<iostream>
using namespace std;
void moveZeroesToEnd(int arr[], int n) {
   int index = 0;
   for (int i = 0; i < n; i++) {
      if (arr[i] != 0) {
         arr[index++] = arr[i];
      }
   }
   while (index < n) {
      arr[index++] = 0;
   }
}
int main()
{
    int n,i,arr[100];
    cout << "enter size of array:";
    cin >> n;
    cout  << "enter elements:";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "the array:";
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
     moveZeroesToEnd(arr,n);
    cout << "after moving zeroes to end:";
     for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
    
}
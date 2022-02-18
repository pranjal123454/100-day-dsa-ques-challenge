#include <iostream>
using namespace std;
int main()
{
    int n, i, j, temp, m=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            temp=arr[i];
            arr[i]=arr[m];
            arr[m]=temp;
            m++;
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
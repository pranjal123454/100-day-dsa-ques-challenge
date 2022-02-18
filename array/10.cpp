/*Find the Duplicate Number
Medium

11629

1258

Add to List

Share
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        a[a[i]%n]=a[a[i]%n]+n;
        
    }
    for(int i=0;i<n;i++){
        if(a[i]/n > 1){
         cout<<i<<endl;
        }
    }
}

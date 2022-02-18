/*Kadane's Algorithm 
Medium Accuracy: 51.0% Submissions: 100k+ Points: 4
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum
there is two logic in which one is current sum and other is maximum sum*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    long long int n;
    cin>>n;
    long long int a[n],i;
    for( i=0;i<n;i++){
        cin>>a[i];
        
    }
    long long int cs=a[0],ms=a[0];
    for( i=1;i<n;i++){
        cs=max(cs+a[i],a[i]);
        ms=max(cs,ms);
    }
    cout<<ms<<endl;
    }
    
}

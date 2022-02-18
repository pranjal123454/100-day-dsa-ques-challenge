/*Subarray with 0 sum 
Easy Accuracy: 49.91% Submissions: 88506 Points: 2
Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

Example 1:

Input:
5
4 2 -3 1 6

Output: 
Yes

Explanation: 
2, -3, 1 is the subarray 
with sum 0.*/

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
    int f=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum==0){
                f=1;
                break;
            }
        }
        if(f==1){
            break;
        }
    }
    if(f==1){
        cout<<"yes";
    }
    else{
        cout<<" no";
    }
    return 0;
}

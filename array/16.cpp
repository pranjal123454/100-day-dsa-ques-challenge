/*Count pairs with given sum 
Easy Accuracy: 41.59% Submissions: 100k+ Points: 2
Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.


Example 1:

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    int count =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            if(a[i]+a[j]==k and i!=j){
                count++;
            }
        }
       
    }
     cout<<count<<endl;
    
}

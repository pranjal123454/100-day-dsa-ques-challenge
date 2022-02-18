/*ques no 3= Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.*/

/*this method takes o(nlogn)time but we want o(n) time*/
#include<iostream>
#include<algorithm>
using namespace std;


int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];

   }
   int k;
   cin>>k;
   sort(arr,arr+n);
   cout<<"your"<<k<<"smallest element of array is"<<arr[k-1];

    
    return 0;
}

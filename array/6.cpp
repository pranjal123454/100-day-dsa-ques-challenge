/* ques=Given an array, rotate the array by one position in clock-wise direction.
ex= arr=1,2,3,4,5
and ans is 5,1,2,3,4*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];


    }
    int temp=a[n-1];

    for(int i=n;i>=0;i--){
       a[i]=a[i-1];


    }
    a[0]=temp;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }

    return 0;
}
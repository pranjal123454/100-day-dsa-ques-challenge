/*https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1*/

#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    int a[m];
    int b[n];
    int c[m+n];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[0]){
            swap(a[i],b[0]);
            sort(b,b+n);
        }
        for(int i=0;i<n;i++){
           cout<<a[i];
        }
        for(int i=0;i<n;i++){
           cout<<b[i];
        }
    }
    
    
}

/*subset of a1[] or not. Both the arrays can be sorted or unsorted. It may be assumed that elements in both array are distinct.
 

Example 1:

Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]*/

#include <iostream>

using namespace std;

int main()
{
   int n;
   int m;
   cin>>n;
   cin>>m;
   int flag=0;
   int a[n];
   int b[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
       
   }
   for(int i=0;i<m;i++){
       cin>>b[i];
       
   }
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(a[i]==b[j]){
               flag=1;
           }
           else{
               flag=0;
           }
       }
   }
   cout<<flag;
    return 0;
}

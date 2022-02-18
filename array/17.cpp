/*Common elements 
Easy Accuracy: 38.69% Submissions: 97615 Points: 2
Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
Note: can you take care of the duplicates without using any additional Data Structure?

Example 1:

Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Explanation: 20 and 80 are the only
common elements in A, B and C.
 */

#include <iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
   int n1,n2,n3;
   cin>>n1>>n2>>n3;
   int a[n1],b[n2],c[n3];
   for(int i=0;i<n1;i++){
       cin>>a[i];
   }
   for(int i=0;i<n2;i++){
       cin>>b[i];
   }
   for(int i=0;i<n3;i++){
       cin>>c[i];
   }
   unordered_map<int,int>m1,m2,m3;
   for(int i=0;i<n1;i++){
       m1[a[i]]++;
   }
   for(int i=0;i<n2;i++){
       m2[b[i]]++;
   }
   for(int i=0;i<n3;i++){
       m3[c[i]]++;
   }
   
   vector<int>v;
   for(int i=0;i<n1;i++){
      if(m1[a[i]]and m2[b[i]] and m3[a[i]]){
          v.push_back(a[i]);
          m1[a[i]]=0; /*for printing duplicates*/
      }
   }
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
   }
   return 0;
}

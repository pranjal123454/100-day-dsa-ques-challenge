/*height should be a non-negative integer. 
Find out the minimum possible difference of the height of shortest and longest towers after you have modified each tower.

You can find a slight modification of the problem here.
Note: It is compulsory to increase or decrease (if possible) by K to each tower.


Example 1:

Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as 
{3, 3, 6, 8}. The difference between 
the largest and the smallest is 8-3 = 5.*/

#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
{
    cin>>a[i];
}   
 sort(a,a+n);
 int small=a[0]+k;
 int big=a[n-1]-k;
 for(int i=1;i<n;i++){
   int sub=a[i]-k;
   int add=a[i]+k;
   if(sub>=small || add<=big){
       continue;
   }else if(big-sub<add-small){
       small=sub;
   }
   else{
       big=add;
   }
 }
   cout<<min(big-small,a[n-1]-a[0]); 
}

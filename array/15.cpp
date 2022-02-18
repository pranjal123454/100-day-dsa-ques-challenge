/*121. Best Time to Buy and Sell Stock
Easy

14394

485

Add to List

Share
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.*/

#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
   int current_price=INT_MAX;
   int profit=0;
   for(int i=0;i<n;i++){
       if(prices[i]<current_price){
           current_price=prices[i];
       }
       else if(prices[i]-1>profit){
           profit=prices[i]-1;
          
       }
       
       
   }
   cout<<profit;
}

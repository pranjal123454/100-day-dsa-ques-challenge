/**Print all the duplicates in the input string
Difficulty Level : Easy
Last Updated : 23 Nov, 2021
Write an efficient program to print all the duplicates and their counts in the input string 

Method 1: Using hashing
Algorithm: Let input string be “geeksforgeeks” 
1: Construct character count array from the input string.
count[‘e’] = 4 
count[‘g’] = 2 
count[‘k’] = 2 */

#include <iostream>
#include<algorithm>
#include<cstring>
#include<map>


using namespace std;

int main()
{
    string str;
    cin>>str;
    map<char,int>m;
    for(int i=0;i<str.length();i++){
        m[str[i]]++;
    }
    for(auto it : m){
        if(it.second>1){
            cout<<it.first<<""<<it.second<<endl;
        }
    }
    
    return 0;
}

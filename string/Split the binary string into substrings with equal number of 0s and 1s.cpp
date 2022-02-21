/*Split the binary string into substrings with equal number of 0s and 1s
Difficulty Level : Easy
Last Updated : 26 Nov, 2021
Given a binary string str of length N, the task is to find the maximum count of consecutive substrings str can be divided into such that all the substrings are balanced i.e. they have equal number of 0s and 1s. If it is not possible to split str satisfying the conditions then print -1.
Example: 
 */

#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int substring(string s){
    int n=s.length();
    int x=0,y=0;int c=0;
    for(int i=0;i<n;i++){
        if(s[i]='0'){
        x++;
    }
    else{
        y++;
    }
    if(x==y){
        c++;
    }
    if(x!=y){
        return -1;
    }
    return c;
    }
    
    
}
int main()
{
    string s="011000100";

    cout<<substring(s);
    return 0;
}

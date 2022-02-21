/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<algorithm>
#include<cstring>


using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int l1=s1.length();
    int l2=s2.length();
    if(l1!=l2){
        cout<<"no";
    }
    else{
        string temp=s1+s2;
        if(temp.find(s2)!=string::npos){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }
    
    return 0;
}

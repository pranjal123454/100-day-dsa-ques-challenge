/*string is palindrome or not*/

#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    string str,str1;
    cin>>str;
    str1=str;
    reverse(str.begin(),str.end());
    if(str==str1){
        cout<<"it is an pallindrome"<<endl;
    }
    else{
        cout<<"it is not an pallindrome"<<endl;
    }
    return 0;
}

/*reverse of string*/
#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    string name;
    cin>>name;
    reverse(name.begin(),name.end());
    cout<<name;
    return 0;
}


/* this is soln without fumction

#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int n=str.length();
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
    cout<<str;
    return 0;
}
*/
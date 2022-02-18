/*this soln takes o(n) time complexity by using min heap property by using priorty queue*/
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        int k;
        cin>>k;
        priority_queue<int,vector<int>,greater<int>> p;
        for(int i=0;i<n;i++){
            p.push(a[i]);
        }
        int ans,i=1;
        while(!p.empty())
        {
            if(i==k){
                ans=p.top();
                break;
            }
            i++;
            p.pop();
        }
        cout<<ans<<" ";


    }
    return 0;
}
/*Ques= union and intersection of the array*/
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int a[n];
    int b[m];
    unordered_map<int, int>map; /*unordered map give value in key and value in this int int shows that it gives key as int and value also as int let us take an example unordered map gives if 2 comes two times after combibing then then it show 2 2 .*/
    for(int i=0;i<n;i++){
        cin>>a[i];
        map[a[i]]++;
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
        map[b[j]]++;
    }
   cout<<map.size()<<endl;
}
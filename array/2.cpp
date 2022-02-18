/*ques no 2.find maximum and minimum elements in the array*/
#include<iostream>
using namespace std;
void maximum(int arr[],int n){
 int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
cout<<"the maximum of the array is 5 \n5"<<max;
}
void minimum(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i])
        {
            min=arr[i];

        }
    }
    cout<<"the minimum of the array is "<<min;

}

int main(){
    int n;

cout<<"enter the no of elements in array"<<endl;

cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
maximum(arr,n);
minimum(arr,n);

    return 0;
}
/*Factorials of large numbers 
Medium Accuracy: 51.61% Submissions: 35391 Points: 4
Given an integer N, find its factorial.

Example 1:

Input: N = 5
Output: 120
Explanation : 5! = 1*2*3*4*5 = 120
Example 2:

Input: N = 10
Output: 3628800
Explanation :
10! = 1*2*3*4*5*6*7*8*9*10 = 3628800*/
class Solution {
public:
    vector<int> factorial(int N){
        vector <int>res;
        res.push_back(1);
        for(int x=2;x<=N;x++){
            int car=0;
            for(int i=0;i<res.size();i++){
                int val=res[i]*x+car;
                res[i]=val%10;
                car=val/10;
            }
            while(car!=0){
                res.push_back(car%10);
                car/=10;
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
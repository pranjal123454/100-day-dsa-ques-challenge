/*31. Next Permutation
Medium

8823

2995

Add to List

Share
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are considered permutations of arr: [1,2,3], [1,3,2], [3,1,2], [2,3,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).*/
class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int idx=-1;
        int n=a.size();
        for(int i=n-1;i>0;i--){
            if(a[i]>a[i-1]){
                idx=i;
                break;
            }
        }
        if(idx == -1){
            reverse(a.begin(),a.end());
        }
        else{
            int prev=idx;
            for(int i=idx+1;i<n;i++){
                if(a[i]>a[idx-1] and a[i]<=a[prev]){
                    prev=i;
                }
            }
            swap(a[idx-1],a[prev]);
            reverse(a.begin()+idx,a.end());
        }
    }
};
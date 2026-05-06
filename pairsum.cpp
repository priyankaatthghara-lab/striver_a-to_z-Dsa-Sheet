/*
leetcode question number:167 (pairsum)
approach: brute force: check at every index
optimised approach : number arranged in the ascending order two pointers will be taken and if the sum is greater than the target move left side otherwise move right side

*/
#include<iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int>vec, int target){
    int start=0; int end=vec.size()-1;
    vector<int>ans;
    while (start<end)
    {
       if (vec[start]+vec[end]==target)
       {
        ans.push_back(start);
        ans.push_back(end);
        return ans;
       }
       else if (vec[start]+vec[end]<target)
       {
        start++;
       }
       else
       {
        end--;
       }
       
       
    }
    return ans;
    
}
int main(){
    vector<int>vec={2,7,11,13};
    int target=9;
    vector<int>ans=pairsum(vec,target);
    cout<<ans[0]<<" ";
    cout<<ans[1]<<" ";
    return 0;
}
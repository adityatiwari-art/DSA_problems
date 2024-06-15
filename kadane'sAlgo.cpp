#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int sum=0;
        int n=nums.size();
        int start,e,s;
        for(int i=0;i<n;i++){
            if(sum==0) start=i;
            sum+=nums[i];
            if(maxSum<sum){
                maxSum=sum;
                e=i;
                s=start;
            }
            if(sum<0){
                sum=0;
            }
        }
        return {maxSum,s,e};
    }
};


int main()
{
    Solution s;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    vector<int> res=s.maxSubArray(nums);
    for(int i:res){
        cout<<i<<endl;
    }
    return 0;
}

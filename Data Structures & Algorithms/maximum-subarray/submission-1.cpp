class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int n=nums.size();
        // vector<int>prefixsum=nums;
        // vector<int>suffixsum=nums;
        // for(int i=1;i<n;i++)
        // {
        //     prefixsum[i]=prefixsum[i]+prefixsum[i-1];
        // }
        // for(int i=n-2;i>=0;i--)
        // {
        //     suffixsum[i]=suffixsum[i]+suffixsum[i+1];
        // }
        // for(auto x:prefixsum)cout<<x<<" ";
        // cout<<"\n";
        // for(auto x:suffixsum)cout<<x<<" ";
        // cout<<"\n";
        // return n;
        // int n1=*max_element(prefixsum.begin(),prefixsum.end());
        // int n2=*max_element(suffixsum.begin(),suffixsum.end());
        // int ans=max(n1,n2);
        // return ans;
        int ans=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(ans<sum)ans=sum;
            if(sum<0)sum=0;
        }
        return ans;

    }
};
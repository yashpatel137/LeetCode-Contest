class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans(n,-1);
        int h=2*k+1;
        if(h>n)
        {
            return ans;
        }
        long long int sum=accumulate(nums.begin(),nums.begin()+h,0L);
        for(int i=k;i+k<n;i++)
        {
            ans[i]=(sum/h);
            if(i+k+1<n)
            {
                sum+=nums[i+k+1]-nums[i-k];
            }
        }
        return ans;
    }
};

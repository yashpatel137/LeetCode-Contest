class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int xr=0;
        vector<int>ans;
        for(auto tmp:nums)
        {
            xr=xr^tmp;
        }
        //cout<<xr;
        int mx=pow(2,maximumBit);
        //cout<<mx;
        mx=mx-1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans.push_back(mx^xr);
            xr^=nums[i];
        }
        //reverse(ans.begin(),ans.end());
        return ans;
    }
};

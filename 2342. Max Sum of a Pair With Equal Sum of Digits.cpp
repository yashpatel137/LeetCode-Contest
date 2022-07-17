class Solution {
public:
    int maximumSum(vector<int>& nums) {
        /*int mx=-1;
        for(int i=0;i<nums.size();i++)
        {
            int tmp=nums[i];
            int sum1=0;
            while(tmp)
            {
                sum1+=tmp%10;
                tmp/=10;
            }
            for(int j=i+1;j<nums.size();j++)
            {
                int tmp1=nums[j];
                int sum2=0;
                while(tmp1)
                {
                    sum2+=tmp1%10;
                    tmp1/=10;
                }
                if(sum1==sum2)
                {
                    mx=max(mx,nums[i]+nums[j]);
                }
            }
        }
        return mx;*/
        int mx=-1;
        vector<pair<int,int>>sum;
        for(int i=0;i<nums.size();i++)
        {
            int tmp=nums[i];
            int sum1=0;
            while(tmp)
            {
                sum1+=tmp%10;
                tmp/=10;
            }
            sum.push_back({sum1,nums[i]});
        }
        sort(sum.begin(),sum.end());
        for(int i=1;i<sum.size();i++)
        {
            if(sum[i].first==sum[i-1].first)
            {
                mx=max(mx,sum[i].second+sum[i-1].second);
            }
        }
        return mx;
    }
};

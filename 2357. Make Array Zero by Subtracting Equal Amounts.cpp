class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                int tmp=nums[i];
                count++;
                for(int j=i;j<n;j++)
                {
                    if(nums[j]-tmp>=0)
                    {
                        nums[j]-=tmp;
                    }
                }
            }
        }
        return count;
    }
};

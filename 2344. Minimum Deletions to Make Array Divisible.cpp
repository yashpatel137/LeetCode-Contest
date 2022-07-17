class Solution {
public:
    int gcd(int a,int b)
    {
        if(a==0)
        {
            return b;
        }
        return gcd(b%a,a);
    }
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(numsDivide.begin(),numsDivide.end());
        int gc=numsDivide[0];
        for(int i=1;i<numsDivide.size();i++)
        {
            gc=gcd(numsDivide[i],gc);
            if(gc==1)
            {
                break;
            }
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(gc%nums[i]==0)
            {
                return i;
            }
        }
        return -1;
    }
};

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        /*priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minpq;
        priority_queue<pair<int,int>>maxpq;
        int n=nums.size();
        if(n==1)
        {
            return 1;
        }
        for(int i=0;i<n;i++)
        {
            minpq.push({nums[i],i});
            maxpq.push({nums[i],i});
        }
        int ans=0;
        if(minpq.top().second>(n/2) and maxpq.top().second>(n/2) and minpq.top().second-maxpq.top().second==0)
        {
            ans+=n-minpq.top().second;
        }
        else if(minpq.top().second<(n/2) and maxpq.top().second<(n/2) and minpq.top().second-maxpq.top().second==0)
        {
            ans+=maxpq.top().second+1;
        }
        else if(minpq.top().second>maxpq.top().second)
        {
            ans+=(n-minpq.top().second);
            ans+=maxpq.top().second+1;
        }
        else
        {
            ans+=(n-maxpq.top().second);
            ans+=minpq.top().second+1;
        }
        return ans;*/
        int mn=nums[0],mx=nums[0],mnid=0,mxid=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(mn>nums[i])
            {
                mn=nums[i];
                mnid=i;
            }
            if(mx<nums[i])
            {
                mx=nums[i];
                mxid=i;
            }
        }
        int x=min(mnid,mxid);
        int y=max(mnid,mxid);
        int ans=min(y+1,min(n-x,n-y+x+1));
        return ans;
    }
};

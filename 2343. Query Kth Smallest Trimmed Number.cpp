class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        int qs=queries.size();
        int ns=nums.size();
        int size=nums[0].size();
        vector<int>ans;
        for(int i=0;i<qs;i++)
        {
            priority_queue<pair<string,int>,vector<pair<string,int>>,greater<pair<string,int>>> pq;
            for(int j=0;j<ns;j++)
            {
                int n=size-queries[i][1];
                pq.push({nums[j].substr(n),j});
            }
            for(int k=0;k<queries[i][0]-1;k++)
            {
                pq.pop();
            }
            ans.push_back(pq.top().second);
        }
        return ans;
    }
};

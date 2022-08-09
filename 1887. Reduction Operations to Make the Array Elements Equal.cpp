class Solution {
public:
    int reductionOperations(vector<int>& nums) {
//     int reductionOperations(vector<int>& nums) 
//     {
//     int ans = 0;

//     sort(begin(nums), end(nums));

//     for (int i = nums.size() - 1; i > 0; --i)
//       if (nums[i] != nums[i - 1])
//         ans += nums.size() - i;

//     return ans;
//   }
        unordered_map<int,int>mp;
        for(auto &num:nums)
        {
            mp[num]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:mp)
        {
            pq.push({it.first,it.second});
        }
        int count=0;
        int ans=0;
        while(pq.size()!=1)
        {
            count+=pq.top().second;
            ans+=count;
            pq.pop();
        }
        return ans;
    }
};

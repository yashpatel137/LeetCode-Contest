class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        int count=0;
        for(auto &q:queries)
        {
            int radius=q[2]*q[2];
            count=0;
            for(auto &p:points)
            {
                int x=abs(p[0]-q[0]);
                int y=abs(p[1]-q[1]);
                count+=(x*x+y*y)<=radius;
            }
            ans.push_back(count);
        }
        return ans;
    }
};

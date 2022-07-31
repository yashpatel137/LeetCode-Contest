class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int ans=1;
        int n=grades.size();
        while((ans*(ans+1))/2 <= n)
        {
            ans++;
        }
        return --ans;
    }
};

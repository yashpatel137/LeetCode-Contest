class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>>v;
        v.push_back({s[0],1});
        for(int i=1;i<s.length();i++)
        {
            if(!v.empty() and v.back().first==s[i])
            {
                v.back().second++;
                if(v.back().second==k)
                {
                    v.pop_back();
                }
            }
            else
            {
                v.push_back({s[i],1});
            }
        }
        string ans;
        for(auto it:v)
        {
            ans.append(it.second,it.first);
            v.pop_back();
        }
        return ans;
    }
};

class Solution {
public:
//     int minFlips(string s) 
//  {
//     const int n = s.length();
//     vector<vector<int>> count(2, vector<int>(2));

//     for (int i = 0; i < n; ++i)
//       ++count[s[i] - '0'][i % 2];
//     int ans = min(count[1][0] + count[0][1], count[0][0] + count[1][1]);

//     for (int i = 0; i < n; ++i) {
//       --count[s[i] - '0'][i % 2];
//       ++count[s[i] - '0'][(n + i) % 2];
//       ans = min({ans, count[1][0] + count[0][1], count[0][0] + count[1][1]});
//     }

//     return ans;
//   }
    int minFlips(string s) {
        int n=s.size();
        int ans1=0,ans2=0,ans=n;
        s+=s;
        string s1="",s2="";
        for(int i=0;i<s.size();i++)
        {
            s1+=(i%2==0)?'0':'1';
            s2+=(i%2==1)?'0':'1';
        }
        for(int i = 0;i<s.size();i++)
        {
            ans1+=(s1[i]!=s[i]);
            ans2+=(s2[i]!=s[i]);
            if(i>=n)
            {
                ans1-=(s1[i-n]!=s[i-n]);
                ans2-=(s2[i-n]!=s[i-n]);
            }
            if(i>=(n-1))
            {
                ans=min({ans,ans1,ans2});
            }
        }
        return ans;
    }
};

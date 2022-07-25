class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int j=0,res=0;
        for(int i=0;i<s.length();i++)
        {
            maxCost-=abs(s[i]-t[i]);
            if(maxCost<0)
            {
                maxCost+=abs(s[j]-t[j]);
                j++;
            }
            res=max(res,i-j+1);
        }
        return res;
        /*int cost=0;
        for(int i=0;i<t.length();i++)
        {
            if(abs(s[i]-t[i])<=maxCost)
            {
                cost+=1;
                maxCost-=abs(s[i]-t[i]);
            }
        }
        return cost;*/
    }
};

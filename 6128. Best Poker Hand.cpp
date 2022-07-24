class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<int,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<5;i++)
        {
            mp1[ranks[i]]++;
            mp2[suits[i]]++;
        }
        if(mp2.size()==1)
        {
            return "Flush";
        }
        for(auto mx1:mp1)
        {
            if(mx1.second>=3)
            {
                return "Three of a Kind";
            }
        }
        for(auto mx1:mp1)
        { 
            if(mx1.second==2)
            {
                return "Pair";
            }
        }
        return "High Card";
        
    }
};

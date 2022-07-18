class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp1,mp2;
        for(int i=0;i<words1.size();i++)
        {
            mp1[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++)
        {
            mp2[words2[i]]++;
        }
        int i=0,j=0,count=0;
        for(i=0;i<words1.size();i++)
        {
            if(mp2.find(words1[i])!=mp2.end() and mp1[words1[i]]==1 and mp2[words1[i]]==1)
            {
                count++;
            }
        }
        return count;
    }
};

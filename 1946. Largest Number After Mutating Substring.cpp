class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int flag = 0;
        for(int i = 0; i < num.length(); i++) 
        {
            int curr = num[i] - '0';
            int chg = change[curr];
            if(chg == curr) 
                continue;
            if(chg > curr) 
            {
                num[i] = chg + '0';
                flag = 1;
            }
            else 
            {
                if(flag) 
                    break;
            }
        }
        return num;
    }
};

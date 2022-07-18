class Solution {
public:
    int minimumBuckets(string street) {
        int count=0;
        int n=street.length();
        for(int i=0;i<n;i++)
        {
            if(street[i]=='H')
            {
                if(i>0 and street[i-1]=='B')
                {
                    continue;
                }
                if(i+1<n and street[i+1]=='.')
                {
                    street[i+1]='B';
                    count++;
                }
                else if(i>0 and street[i-1]=='.')
                {
                    street[i-1]='B';
                    count++;
                }
                else
                {
                    return -1;
                }
            }
        }
        return count;
    }
};

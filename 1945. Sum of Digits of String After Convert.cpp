class Solution {
public:
    int getLucky(string s, int k) {
        int n=s.size();
        string str="";
        long long int num=0;
        for(int i=n-1;i>=0;i--)
        {
            int tmp=s[i]-'`';
            str+=to_string(tmp);
        }
        //cout<<str;
        for(int i=0;i<str.length();i++)
        {
            int tmp=str[i]-'0';
            num+=tmp;
        }
        //cout<<num;
        for(int i=1;i<k;i++)
        {
            long long int ans=0;
            while(num!=0)
            {
                ans+=num%10;
                num/=10;
            }
            num=ans;
        }
        return (int)num;
    }
};

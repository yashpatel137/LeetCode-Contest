class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int flag=arr[0];
        int count=0,n=arr.size();
        for(int i=1;i<n;i++)
        {
            if(flag<arr[i])
            {
                count=1;
                flag=arr[i];
            }
            else
            {
                count++;
            }
            if(count==k)
            {
                break;
            }
        }
        return flag;
      //TLE
        /*bool flag=true;
        int prev,curr;
        unordered_map<int,int>mp;
        int n=arr.size();
        while(flag)
        {
            if(arr[0]<arr[1])
            {
                swap(arr[0],arr[1]);
                curr=arr[0];
                mp[arr[0]]++;
            }
            else
            {
                curr=arr[0];
                mp[arr[0]]++;
            }
            int temp=arr[1];
            for(int i=1;i<n-1;i++)
            {
                arr[i]=arr[i+1];
            }
            arr[n-1]=temp;
            if(prev==curr and mp[prev]==k)
            {
                flag=false;
            }
            prev=curr;
        }
        return prev;*/
    }
};

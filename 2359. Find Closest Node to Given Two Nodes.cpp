class Solution {
public:
    void solve(int i,int len,vector<int>&edges,vector<int>&path)
    {
        if(i!=-1 and path[i]==-1)
        {
            path[i]=len;
            solve(edges[i],len+1,edges,path);
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int ans=-1;
        int n=edges.size();
        vector<int>path1(n,-1),path2(n,-1);
        int mn=INT_MAX;
        solve(node1,0,edges,path1);
        solve(node2,0,edges,path2);
        for(int i=0;i<n;i++)
        {
            if(min(path1[i],path2[i])>=0 and max(path1[i],path2[i])<mn)
            {
                mn=max(path1[i],path2[i]);
                ans=i;
            }
        }
        return ans;
    }
};

class Solution {
public:
    /*int solve(vector<int>& rowCosts, vector<int>& colCosts,vector<vector<int>>&dp,int sx,int sy,int dx,int dy)
    {
        if(sx<0||sx>rowCosts.size()||sy<0||sy>colCosts.size()||(sx==dx and sy==dy))
        {
            return 0;
        }
        if(dp[sx][sy]!=-1)
        {
            return dp[sx][sy];
        }
        int u=rowCosts[sx-1]+solve(rowCosts,colCosts,dp,sx-1,sy,dx,dy);
        int d=rowCosts[sx+1]+solve(rowCosts,colCosts,dp,sx+1,sy,dx,dy);
        int l=colCosts[sy-1]+solve(rowCosts,colCosts,dp,sx,sy-1,dx,dy);
        int r=colCosts[sy+1]+solve(rowCosts,colCosts,dp,sx,sy+1,dx,dy);
        return dp[sx][sy]=min(l,min(r,min(u,d)));
    }*/
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        /*int m=rowCosts.size(),n=colCosts.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        solve(rowCosts,colCosts,dp,startPos[0],startPos[1],homePos[0],homePos[1]);
        return dp[homePos[0]][homePos[1]];*/
        int totalCost=0,sx=startPos[0],sy=startPos[1],dx=homePos[0],dy=homePos[1];
        while(sx!=dx)
        {
            if(sx<dx)
            {
                totalCost+=rowCosts[++sx];
            }
            else
            {
                totalCost+=rowCosts[--sx];
            }
        }
        while(sy!=dy)
        {
            if(sy<dy)
            {
                totalCost+=colCosts[++sy];
            }
            else
            {
                totalCost+=colCosts[--sy];
            }
        }
        return totalCost;
    }
};

class Solution
{
    public:
    int dp[8001][101];
    int dfs(string& S, string& T, int i, int j){
        if(j>=T.length()){
            return 1;
        }
        if(i>=S.length()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans ;
        if(S[i]==T[j]){
            ans = dfs(S,T,i+1,j+1)+dfs(S,T,i+1,j);
        }
        else{
            ans = dfs(S,T,i+1,j);
        }
        dp[i][j] = ans%1000000007;
        return dp[i][j];
    }
    int subsequenceCount(string S, string T)
    {
      //Your code here
      memset(dp,-1,sizeof(dp));
      return dfs(S,T,0,0);
    }
};

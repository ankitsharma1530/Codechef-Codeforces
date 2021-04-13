#include <bits/stdc++.h>
using namespace std;
constexpr int MA = (int)1e6;
int dp0[MA+2],dp1[MA+2];
int next0[MA],next1[MA];

void spar()
{
    string s;
    cin>>s;
    int n = s.length();
    int last_pos = -1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            for(int j=last_pos+1;j<=i;j++)
            {
                next0[j]=i;
            }
            last_pos = i;
        }
    }
    for(int i=last_pos+1;i<n;i++)
    {
        next0[i] = n;
    }
    if(next0[0]==n)
    {
        cout<<"0"<<endl;
        return;
    }
    last_pos = -1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            for(int j=last_pos+1;j<=i;j++)
            {
                next1[j]=i;
            }
            last_pos = i;
        }
    }
    for(int i=last_pos+1;i<n;i++)
    {
        next1[i] = n;
    }
    
    dp0[n] = dp0[n+1] = 0;
    dp1[n] = dp1[n+1] = 0;
    for(int i=n-1;i>=0;i--)
    {
        dp0[i]=dp0[i+1];
        if(s[i]=='0' && next1[i]<n)
        {
            dp0[i] = max(dp0[i],dp0[next1[i]+1]+1);
        }
        if(s[i]=='1' && next0[i]<n)
        {
            dp0[i] = max(dp0[i],dp0[next0[i]+1]+1);
        }
        dp1[i] = dp1[i+1];
        if(next1[i]<n)
        {
            dp1[i] = max(dp1[i],dp0[next1[i]+1]+1);
        }
    }
    int l = dp1[0]+1;
    int cur_ind = next1[0]+1;
    string ans = "1";
    for(int i=1;i<l;i++)
    {
        if(cur_ind>=n)
        {
            ans.push_back('0');
            continue;
        }
        if(next0[cur_ind]>=n)
        {
            ans.push_back('0');
            cur_ind = next0[cur_ind]+1;
            continue;
        }
        if(dp0[next0[cur_ind]+1]<l-i-1)
        {
            ans.push_back('0');
            cur_ind = next0[cur_ind]+1;
        }
        else
        {
            ans.push_back('1');
            cur_ind = next1[cur_ind]+1;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        spar();
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int total=0;
    if(n==1){
        if(s[0]=='*') cout<<1<<"\n";
        else cout<<0<<"\n";
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            s[i]='X';
            total++;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='*'){
            s[i]='X';
            total++;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='.') continue;
        if(s[i]=='X'){
            // cout<<"in"<<"\n";
            bool flag=false;
            for(int j=1;j<=k;j++){
                if(i+j<n && s[i+j]=='X'){
                    flag=true;
                    break;
                }
                else if(i+j>=n){
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                // cout<<"out"<<"\n";
                for(int j=i+k;j>i;j--){
                    if(j<n && s[j]=='*'){
                        s[j]='X';
                        total++;
                        break;
                    }
                }
            }
        }
    }
    // cout<<s<<"\n";
    cout<<total<<"\n";
}  
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}

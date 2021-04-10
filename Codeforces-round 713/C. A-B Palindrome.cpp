#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int c1 = 0, c0 = 0;
        int n = s.size();
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != '?' && s[n - i - 1] == '?')
            {
                s[n - i - 1] = s[i];
            }
            if (s[i] == '?' && s[n - i - 1] != '?')
            {
                s[i] = s[n - i - 1];
            }
        }
        //cout<<s<<endl;
        c0 = 0, c1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                c0++;
            else if (s[i] == '1')
                c1++;
        }
        a = a - c0;
        b = b - c1;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == '?')
            {
                if (a > b)
                {
                    s[i] = '0';
                    s[n - i - 1] = '0';
                    a = a - 2;
                }
                else
                {
                    s[i] = '1';
                    s[n - i - 1] = '1';
                    b = b - 2;
                }
            }
        }
        // cout<<s<<endl;
        // cout<<a<<" "<<b<<endl;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (a > b)
                {
                    s[i] = '0';
                    s[n - i - 1] = '0';
                    a = a - 1;
                }
                else
                {
                    s[i] = '1';
                    s[n - i - 1] = '1';
                    b = b - 1;
                }
            }
        }
        int flag = 0;
        if (a == 0 && b == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (s[i] != s[n - i - 1])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << s << endl;
            else
                cout << -1 << endl;
        }
        else
            cout << -1 << endl;
    }
}

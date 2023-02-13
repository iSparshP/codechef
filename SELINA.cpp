#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t>0)
    {
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<s.length(); i++)
        {
            ans ^= int(s[i]);
        }
        if(!ans)
        {
            cout<< -1 <<endl;
        }
        else
        {
            cout<<char(ans)<<endl;
        }
        t--;
    }
	return 0;
}

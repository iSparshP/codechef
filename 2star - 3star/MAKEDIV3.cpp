#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define f() for(ll i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        for(int i=1; i<=n; ++i)
        {
            if(i==1 || i==n)
            {
                cout<<'3';
            }
            else
            {
                cout<<'0';
            }
        }
        cout<<"\n";
        t--;
    }
	return 0;
}

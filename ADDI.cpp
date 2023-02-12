#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define f() for(ll i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int ct=0;
        for(int x=1; x<=n; x=x<<1)
        {
            if((x & n) == 0)
            {
                ct++;
            }
        }
        cout<<ct<<endl;
        t--;
    }
	return 0;
}

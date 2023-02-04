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
        string s;
        cin>>s;
        size_t found1 = s.find("101");
        size_t found2 = s.find("010");
        if(found1 != string::npos)
        {
            cout<<"Good"<<endl;
        }
        else if(found2 != string::npos)
        {
            cout<<"Good"<<endl;
        }
        else
        {
            cout<<"Bad"<<endl;
        }
        t--;
    }
	return 0;
}

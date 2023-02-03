#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        long long a,b,a1,b1,a2,b2;
        cin>>a>>b>>a1>>b1>>a2>>b2;
        if(a>b) swap(a,b);
        if(a1>b1) swap(a1,b1);
        if(a2>b2) swap(a2, b2);
        
        if(a==a1 && b==b1)
        {
            cout<<1<<endl;
        }
        else if(a==a2 && b==b2)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        t--;
    }
	return 0;
}

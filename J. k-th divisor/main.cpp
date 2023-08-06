#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long yes;
    vector <long long> ans;

    for(int i=1;i*i<=n;i++)
    {
        if(ans.size()>=k+1)
            break;
        if(n%i==0)
        {
            ans.push_back(i);
            if((n/i)!=i)
            {
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(),ans.end());
    if(ans.size()>=k)
    cout<<ans[k-1];
    else
        cout<<"-1";
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long search(long long arr[],long long l, long long r, long long c, long long n)
{
    if(r>l)
    {
        long long area_sum=0;
        long long mid = l + (r-l)/100;
        for(long long i=0;i<n;i++)
            area_sum = area_sum + (((2*mid)+arr[i])*((2*mid)+arr[i]));
        if(area_sum==c)
            return mid;

        if(area_sum>c)
        {
            return search(arr,l,mid-1,c,n);
        }
        return search(arr,mid+1,r,c,n);
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,c;
        cin>>n>>c;
        long long s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        cout<<search(s,0,1e9,c,n)<<endl;

    }
}
//brute force solution:
/*int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,c;
        cin>>n>>c;
        long long s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        long long ans=0;
        long long area_sum=0;
        while(area_sum!=c)
        {
        area_sum=0;
        ans++;
        for(int i=0;i<n;i++)
            area_sum = area_sum + (((2*ans)+s[i])*((2*ans)+s[i]));

        }
        cout<<ans<<endl;

    }
}
*/

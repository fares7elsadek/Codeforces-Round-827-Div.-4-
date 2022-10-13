/*
   Author :fares elsadek
   #ErrorByNight
*/
 
#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <algorithm>
#define ll long long
#define endl "\n"
#define fares  ios_base::sync_with_stdio();cin.tie(); cout.tie()
#define pb push_back
#define pp pop_back
#define F first
#define S second
typedef long double ld;
#define pi 3.141592653589793238
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
const int N = 1e3 + 5 ;
const ll mod = 1e9 + 7;
#define INF 1000000000000
map<int,int>mp;
map<int,int>mpi;
int b[N];
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    fares;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.pb(x);
            b[x]=i+1;
        }
        sort(v.begin(),v.end());
        auto it=unique(v.begin(),v.end());
        v.erase(it,v.end());
        int mx=-1;
        bool done=false;
        int ans=-1;
        for(int i=0; i<v.size(); i++)
        {
            for(int j=0; j<v.size(); j++)
            {
 
                if((gcd(v[i],v[j])==1))
                {
                    ans=max(ans,(b[v[i]]+b[v[j]]));
                }
            }
 
 
 
        }
        cout<<ans<<endl;
 
    }
 
 
 
    return 0;
}
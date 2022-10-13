/*
   Author :fares elsadek
   #ErrorByNight
*/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fares  ios_base::sync_with_stdio();cin.tie(); cout.tie();
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
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int arr[3];
       cin>>arr[0]>>arr[1]>>arr[2];
       sort(arr,arr+3);
       if(arr[0]+arr[1]==arr[2])
        yes
        else
        no
    }
 
 
   
    return 0;
}
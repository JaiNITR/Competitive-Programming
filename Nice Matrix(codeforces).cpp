#include <bits/stdc++.h>
#include <functional>
#include<stdio.h>
using namespace std;
#define ll       	long long int
#define dd      	long double
#define pb          push_back
#define pf          push_front
#define pi         pair<ll,ll>
#define vi          vector<ll>
#define vpi        vector<pi>
#define mi          map<ll,ll>
#define vvi         vector<vector<ll>>
#define mpi         map<pi,ll>
#define pipi        pair<ll,pair<ll,ll> >
#define all(a)      (a).begin(),(a).end()
#define rall(a)     (a).rbegin(),(a).rend()
#define x         first
#define y         second
#define sz(x)       (ll)x.size()
#define u        	'\n'
#define PI          3.141592653589
#define bs(v,n)     binary_search(all((v)),(n))
#define lb(v,n)     lower_bound(all((v)),(n))
#define ub(v,n)     upper_bound(all((v)),(n))
#define fo(i,l,u)   for(i=l;i<u;i++)
#define rfo(i,l,u)  for(i=l;i>=u;i--)
#define rf(s)       for(auto &c : s)
#define allfo(s)    for(auto it=(s).begin();it!=(s).end();it++) //use Iterator
#define tezz        ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define M           1000000007
#define ef          else if
#define yes       cout<<"YES"<<'\n';
#define no        cout<<"NO"<<'\n';
#define C         continue;
#define pa(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
#define pv(vec) cout<<(#vec)<<": "; for (auto& i: vec) cout<<i<<" "; cout<<'\n'
#define pvp(vec) cout<<(#vec)<<": "; for (auto& i: vec) cout<<i.x<<","<<i.y<<" | "; cout<<'\n'
#include <ext/pb_ds/tree_policy.hpp>     
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>     
using namespace __gnu_pbds;
typedef tree<pi,null_type,less<pi>,rb_tree_tag,tree_order_statistics_node_update> pbds;
#define fbo find_by_order
#define ook order_of_key
const ll N = 350;
 
ll gcd(ll a, ll b) {  if (a == 0)  return b; return gcd(b % a, a); } 
ll power(ll x, ll y) 
{ 
    ll res = 1;   
    while (y > 0) 
    { 
        if (y & 1) 
        res = res*x; 
        y = y>>1; 
        x = x*x;  
    } 
    return res; 
}


signed main()
{
	tezz
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,m,i,j;
		cin>>n>>m;
		ll a[n][m];
		fo(i,0,n)
		{
			fo(j,0,m)
			{
				cin>>a[i][j];
			}
		}
		ll ans=0;
		fo(i,0,n/2)
		{
			fo(j,0,m/2)
			{
				ll temp=INT_MAX;
				
				ll ans1=0;
				ans1+=abs(a[i][j]-a[i][j]);
				ans1+=abs(a[i][m-j-1]-a[i][j]);
				ans1+=abs(a[n-i-1][j]-a[i][j]);
				ans1+=abs(a[n-i-1][m-j-1]-a[i][j]);
				if(ans1<temp)
				temp=ans1;
				
				ans1=0;
				ans1+=abs(a[i][j]-a[i][m-j-1]);
				ans1+=abs(a[i][m-j-1]-a[i][m-j-1]);
				ans1+=abs(a[n-i-1][j]-a[i][m-j-1]);
				ans1+=abs(a[n-i-1][m-j-1]-a[i][m-j-1]);
				if(ans1<temp)
				temp=ans1;
				
				ans1=0;
				ans1+=abs(a[i][j]-a[n-i-1][j]);
				ans1+=abs(a[i][m-j-1]-a[n-i-1][j]);
				ans1+=abs(a[n-i-1][j]-a[n-i-1][j]);
				ans1+=abs(a[n-i-1][m-j-1]-a[n-i-1][j]);
				if(ans1<temp)
				temp=ans1;
				
				ans1=0;
				ans1+=abs(a[i][j]-a[n-i-1][m-j-1]);
				ans1+=abs(a[i][m-j-1]-a[n-i-1][m-j-1]);
				ans1+=abs(a[n-i-1][j]-a[n-i-1][m-j-1]);
				ans1+=abs(a[n-i-1][m-j-1]-a[n-i-1][m-j-1]);
				if(ans1<temp)
				temp=ans1;
								
				ans+=temp;
			}
			if(m%2!=0)
			{
				ll j=m/2;
				ll temp=INT_MAX;
				
				ll ans1=0;
				ans1+=abs(a[i][j]-a[i][j]);
				ans1+=abs(a[n-i-1][j]-a[i][j]);
				if(ans1<temp)
				temp=ans1;
				
				ans1=0;
				ans1+=abs(a[i][j]-a[n-i-1][j]);
				ans1+=abs(a[n-i-1][j]-a[n-i-1][j]);
				if(ans1<temp)
				temp=ans1;
						
				ans+=temp;
			}
		}
		if(n%2!=0)
		{
			ll i=n/2;
			fo(j,0,m/2)
			{
				ll temp=INT_MAX;
				
				ll ans1=0;
				ans1+=abs(a[i][j]-a[i][j]);
				ans1+=abs(a[i][m-j-1]-a[i][j]);
				if(ans1<temp)
				temp=ans1;
				
				ans1=0;
				ans1+=abs(a[i][j]-a[i][m-j-1]);
				ans1+=abs(a[i][m-j-1]-a[i][m-j-1]);
				if(ans1<temp)
				temp=ans1;
						
				ans+=temp;
			}
			if(m%2!=0)
			{
				ll j=m/2;
				ll temp=INT_MAX;
				
				ll ans1=0;
				ans1+=abs(a[i][j]-a[i][j]);
				ans1+=abs(a[n-i-1][j]-a[i][j]);
				if(ans1<temp)
				temp=ans1;
				
				ans1=0;
				ans1+=abs(a[i][j]-a[n-i-1][j]);
				ans1+=abs(a[n-i-1][j]-a[n-i-1][j]);
				if(ans1<temp)
				temp=ans1;
						
				ans+=temp;
			}
		}
		cout<<ans<<u;
	}
	return 0;
}

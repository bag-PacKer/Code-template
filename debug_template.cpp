#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> //required
#include <ext/pb_ds/tree_policy.hpp> //required
// iteration and input/output stream
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define srep(i, begin, end) for (__typeof(end) i = begin; i != end; i++)
#define printarr(x) rep(i,0,x.size()) cout<<x[i]<<" "; cout<<endl;
 
#define tr(cont,it) \
for(decltype(cont.begin()) it = cont.begin(); it!= cont.end() ; it++)
 
#define tc() int tcase; cin >> tcase ; rep(tc,1,tcase+1)
//STL shortcuts
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define F first
#define S second
#define MP make_pair
 
// Error detection
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
 
using namespace std;
 
typedef long long int ll; // 64 bit integer
typedef unsigned long long int  ull; // 64 bit unsigned integer
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<int,ll> pill;
 
inline void smax(int &x , int y) { x = max(x , y) ; }
inline void smin(int &x , int y) { x = min(x , y) ; }
 
#define MOD 998244353
#define inf 4000000000000000000LL
#define SYNC std::ios::sync_with_stdio(false);  cin.tie(NULL);
 
#define PI acos(-1)
ll gcd(ll a,ll b){ return ((b==0)? a:gcd(b,a%b) ); }
 
using namespace __gnu_pbds; //required
template <typename T> using ordered_set =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ordered_set <int> s;
 
ll bexpo (ll x, ll n, ll m)
{
    ll r = 1;
    x = x % m;
    while (n > 0)
    {
        if (n % 2) r = (r * x) % m;
        x = (x * x) % m;
        n = n / 2;
    }
    return r;
}
 
int main()
{
    /******************************************************************/
    
    /*****************************************************************/
 
  return 0;
}

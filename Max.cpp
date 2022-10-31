/*
A. Maxmina
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You have an array a of size n consisting only of zeroes and ones and an integer k. In one operation you can do one of the following:

Select 2 consecutive elements of a and replace them with their minimum (that is, let a:=[a1,a2,…,ai−1,min(ai,ai+1),ai+2,…,an] for some 1≤i≤n−1). This operation decreases the size of a by 1.
Select k consecutive elements of a and replace them with their maximum (that is, let a:=[a1,a2,…,ai−1,max(ai,ai+1,…,ai+k−1),ai+k,…,an] for some 1≤i≤n−k+1). This operation decreases the size of a by k−1.
Determine if it's possible to turn a into [1] after several (possibly zero) operations.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤1000). The description of the test cases follows.

The first line of each test case contains two integers n and k (2≤k≤n≤50), the size of array a and the length of segments that you can perform second type operation on.

The second line contains n integers a1,a2,…,an (ai is 0 or 1), elements of array a.

Output
For each test case, if it is possible to turn a into [1], print "YES", otherwise print "NO".

Example
inputCopy
7
3 2
0 1 0
5 3
1 0 1 1 0
2 2
1 1
4 4
0 0 0 0
6 3
0 0 1 0 0 1
7 5
1 1 1 1 1 1 1
5 3
0 0 1 0 0
outputCopy
YES
YES
YES
NO
YES
YES
YES
Note
In the first test case, you can perform the second type operation on second and third elements so a becomes [0,1], then you can perform the second type operation on first and second elements, so a turns to [1].

In the fourth test case, it's obvious to see that you can't make any 1, no matter what you do.

In the fifth test case, you can first perform a type 2 operation on the first three elements so that a becomes [1,0,0,1], then perform a type 2 operation on the elements in positions two through four, so that a becomes [1,1], and finally perform the first type operation on the remaining elements, so that a becomes [1].
*/
#include<bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <chrono>
#include <complex>
using namespace std;
#define ll long long
#define ld long double
#define ui unsigned int
#define ull unsigned ll
#define mp                   make_pair
#define eb                   emplace_back
#define pb                   push_back
#define pf                   push_front
#define popb                 pop_back
#define popf                 pop_front
#define hashmap              unordered_map
#define hashset              unordered_set
#define lb                   lower_bound
#define ub                   upper_bound
#define all(a)               (a).begin(), (a).end()
#define rall(a)              (a).rbegin(), (a).rend()
#define ff                   first
#define ss                   second
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=0;j<n;j++)
#define fok(n) for(ll k=0;k<n;k++)
#define forr(i,a,b) for(ll i=a;i<b;i++)
#define forrr(i,b,a) for(ll i=b;i>=a;i--)
#define forrrr(i,a,b,k) for(ll i=a;i<b;i=i+k)
#define graph          vector<vector<ll>>
#define sz(v) v.size()
typedef pair<int, int> pii;
typedef pair<ll, ll>   pll;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef vector<ld>          vld;
typedef vector<string>      vs;
typedef vector<double>      vd;
typedef vector<pii>         vpii;
typedef vector<pll>         vpll;
typedef pair< ll, pll>      plll;
typedef queue<ll>           qll;
typedef vector<plll>      vplll;
typedef  vector<set<ll>>   vsll;
typedef  vector<char>	         vc;
typedef  vector<bool>            vb;
typedef  map<string, int>         msi;
typedef  map<int, int>	         mii;
typedef  map<ll, ll>             mll;
typedef  map<ll, vll>             mvll;
typedef  map<vll, ll>             mvlll;
typedef  map<char, ll>           mcl;
typedef map<pair<ll, ll>, ll>  mplll;
typedef  unordered_map<char, ll>           umcl;
typedef  unordered_map< ll, char>           umlc;
typedef  unordered_map< ll, ld>           umld;
typedef  map<int, string>	     mis;
typedef  pair<string, int>       psi;
typedef  pair<string, string>    pss;
typedef priority_queue <ll> pq;
typedef priority_queue<pii, vector<pii>, greater<pii> > pqq;
typedef priority_queue<ll, vector<ll>, greater<ll>> prq;
const ll MOD = 1000000007;
const ll mod = 998244353;
ld PI = 3.1415926535897;
void solve();
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input2.txt", "r", stdin);
	freopen("error1.txt", "w", stderr);
	freopen("output2.txt", "w", stdout);
#endif
	ll t; cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
void solve() {
	ll n, k, f = 0;
	cin >> n >> k;
	foi(n) {
		ll x;
		cin >> x;
		f += x;
	}
	if (f) cout << "YES";
	else cout << "NO";
}

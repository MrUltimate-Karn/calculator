/*B. Kevin and Permutation
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
For his birthday, Kevin received the set of pairwise distinct numbers 1,2,3,…,n as a gift.

He is going to arrange these numbers in a way such that the minimum absolute difference between two consecutive numbers be maximum possible. More formally, if he arranges numbers in order p1,p2,…,pn, he wants to maximize the value
mini=1n−1|pi+1−pi|,
where |x| denotes the absolute value of x.

Help Kevin to do that.

Input
Each test consists of multiple test cases. The first line contains a single integer t (1≤t≤100) — the number of test cases. Description of the test cases follows.

The only line of each test case contains an integer n (2≤n≤1000) — the size of the set.

Output
For each test case print a single line containing n distinct integers p1,p2,…,pn (1≤pi≤n) describing the arrangement that maximizes the minimum absolute difference of consecutive elements.

Formally, you have to print a permutation p which maximizes the value mini=1n−1|pi+1−pi|.

If there are multiple optimal solutions, print any of them.

Example
inputCopy
2
4
3
outputCopy
2 4 1 3
1 2 3
Note
In the first test case the minimum absolute difference of consecutive elements equals min{|4−2|,|1−4|,|3−1|}=min{2,3,2}=2. It's easy to prove that this answer is optimal.

In the second test case each permutation of numbers 1,2,3 is an optimal answer. The minimum absolute difference of consecutive elements equals to 1.

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
	ll n;
	cin >> n;
	ll m = n / 2, x = m + 1, s = 1;
	while (s++ <= n) {
		cout << x << ' ';
		if (x > m)
			x -= m;
		else
			x += m + 1;
	}
}

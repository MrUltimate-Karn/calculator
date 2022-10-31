/*
C1. Make Nonzero Sum (easy version)
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
This is the easy version of the problem. The difference is that in this version the array can not contain zeros. You can make hacks only if both versions of the problem are solved.

You are given an array [a1,a2,…an] consisting of integers −1 and 1. You have to build a partition of this array into the set of segments [l1,r1],[l2,r2],…,[lk,rk] with the following property:

Denote the alternating sum of all elements of the i-th segment as si: si = ali−ali+1+ali+2−ali+3+…±ari. For example, the alternating sum of elements of segment [2,4] in array [1,0,−1,1,1] equals to 0−(−1)+1=2.
The sum of si over all segments of partition should be equal to zero.
Note that each si does not have to be equal to zero, this property is about sum of si over all segments of partition.

The set of segments [l1,r1],[l2,r2],…,[lk,rk] is called a partition of the array a of length n if 1=l1≤r1,l2≤r2,…,lk≤rk=n and ri+1=li+1 for all i=1,2,…k−1. In other words, each element of the array must belong to exactly one segment.

You have to build a partition of the given array with properties described above or determine that such partition does not exist.

Note that it is not required to minimize the number of segments in the partition.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤10000). Description of the test cases follows.

The first line of each test case contains an integer n (1≤n≤200000) — the length of the array a.

The second line of each test case contains n integers a1,a2,…,an (ai is −1 or 1) — the elements of the given array.

It's guaranteed that the sum of n over all test cases does not exceed 200000.

Output
For each test case, if required partition does not exist, print −1. Otherwise, print an integer k — the number of segments in the partition.

Then in the i-th of the following k lines print two integers li and ri — description of the i-th segment. The following conditions should be satisfied:

li≤ri for each i from 1 to k.
li+1=ri+1 for each i from 1 to (k−1).
l1=1,rk=n.
If there are multiple correct partitions of the array, print any of them.

Example
inputCopy
4
4
1 1 1 1
6
-1 1 1 1 1 1
3
1 -1 1
1
1
outputCopy
1
1 4
2
1 3
4 6
-1
-1
Note
In the first test case we can build a partition of one segment of length 4. The sum of this segment will be equal to 1−1+1−1=0.

In the second test case we can build a partition of two segments of length 3. The sum of the first segment will be equal to −1−1+1=−1, and the sum of the second segment: 1−1+1=1. So, the total sum will be equal to −1+1=0.

In the third and in the fourth test cases it can be proved that there are no required partition.
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
const ll N = 101;
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
		vll a(n);
		foi(n){
			cin >> a[i];
		}
		vpll ans;
		foi(n) {
			if (i == n-1) {
				cout<<-1;
				return;
			}
			if (a[i] == a[i + 1])
				ans.pb({i, i + 1}), i++;
			else
				ans.pb({i, i}), ans.pb({i + 1, i + 1}), i++;
		}
		cout << ans.size() << endl;
		for (pll x : ans){
			cout << x.ff + 1<<" "<< x.ss + 1 << endl;
		}
}

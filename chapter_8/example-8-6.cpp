/*
 * @Description: 程序8-6 二分查找求下界
 * @Author: Xiaobin Ren
 * @Date: 2020-03-30 11:30:06
 * @LastEditTime: 2020-03-30 11:34:01
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i = a; i< n; i++)
#define per(i,a,n) for(int i=n-1; i>=a; i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())
typedef vector<int> VI;
typedef long long ll;
typedef pair<int, int> PII;
typedef double db;
mt19937 mrand(random_device{}());
const ll mod = 1000000007;
int rnd(int x) { return mrand() % x;}
ll mulmod(ll a, ll b) {ll res=0;a%=mod;assert(b>=0);for(;b;b>>=1){if(b&1)res+=a%mod;a+=a%mod;}return res;}
ll powmod(ll a, ll b) {ll res=1;a%=mod;assert(b>=0);for(;b;b>>=1){if(b&1)res*=a%mod;a*=a%mod;}return res;}
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a;}
//head


int lower_bound(int *a, int x, int y, int v){
    int m;
    while(x < y){
        m = x + (y-x)/2;
        if (a[m] >= v) y = m;
        else x = m+1;
    }
    return x;
}

int upper_bound(int *a, int x, int y, int v){
    int m;
    while(x < y){
        m = x + (y-x)/2;
        if (a[m] <= v) x = m+1;
        else y = m;;
    }
    return x;
}

int main(int argc, char const *argv[]){
  //ios::sync_with_stdio(false);
  //cin.tie(0);

    
    return 0;
}

















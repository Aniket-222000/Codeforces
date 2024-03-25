#include <bits/stdc++.h>

using namespace std;
void fast() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

#define endl '\n'
#define all(v)			((v).begin()),((v).end())
#define rall(x) x.rbegin(), x.rend()
#define sz(a) (int)(a).size()
#define vi vector<int>
#define pi pair<int,int>

typedef unsigned long long ull;
typedef long long ll;

int dx[] = { 0,0,1,-1,1,-1,-1,1 };
int dy[] = { 1,-1,0,0,1,-1,1,-1 };
int dr[]={2,2,-2,-2,1,-1,1,-1};
int dc[]={-1,1,-1,1,-2,-2,2,2};

const int MOOD = (1<<30),OO = 0x3f3f3f3f;
const ll MOD = 1e9 + 7 , INF  = 1e18 + 5, inf = LLONG_MAX/2;
const int N =1e5+1,M = 4e4+1;
vector<int>nums;
int solve(int x,bool flag){
    sort(all(nums));
    if(!flag){
        int ans=-1;
        for(int &i:nums)if(i<=x)ans=max(ans,i);
        return ans;
    }
    if(flag==true){
        int ans=OO;
        for(int &i:nums)if(i>=x)ans=min(ans,i);
        if(ans==OO)return -1;
        else return ans;
    }
}
void ON_Fire() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        if (n % k != 0) {
            cout << 1 << endl;
            cout << n << endl;
        } else {
            for (int i = 1; i <= n; i++) {
                if (i % k != 0) {
                    cout << 2 << endl;
                    cout << i << ' ' << n - i << endl;
                    break;
                }
            }
        }

    }
}

int main() {
    fast();
#ifndef ONLINE_JUDGE
    freopen("input.TXT", "r", stdin);
    freopen("output.TXT", "w", stdout);
#endif

        ON_Fire();
//     vector<int>st{0,2,3};
//     cout<<*lower_bound(all(st),1)<<endl;
//     cout<<*upper_bound(all(st),1)<<endl;

    return EXIT_SUCCESS;
}
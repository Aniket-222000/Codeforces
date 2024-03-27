//Radhe Radhe
#include <bits/stdc++.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include <map>
using namespace std;
#define ll long long
#define big unsigned long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define fi first
#define se second
#define fl(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define all(x) (x).begin(), (x).end()
#define rsor(x) {sort((x).begin(), (x).end(),greater<int>());}
#define sor(x) {sort((x).begin(), (x).end());}
#define fill(a) for (auto &x : a) cin >> x
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
using vi = vector<int>;
using vll=vector<long long>;
using mci = map<char,int>;
using umci = unordered_map<char,int>;
using umcl = unordered_map<char,long long>;
using mii = map<int,int>;
using umii = unordered_map<int,int>;
using mll=  map<long long,long long>;
using mli = map<long long,int>;
using pi = pair<int,int>;
#define w(t)            ll tc; cin>>tc; for (ll tt = 0; tt < tc; ++tt)
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a,int b){return a*b/gcd(a,b);}
bool cmpa(ll a,ll b) { return a> b; }
const unsigned int mod = 1000000007;
void printBinary(int num)
{
  for(int i=30;i>=0;i--)
  {
    cout<<((num>>i)&1);
  }
  cout<<endl;
}
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
int binexp(int a,int b,int m)
{
    int result=1;
    while(b>0)
    {
        if(b&1)
        {
            result=(result*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
         b>>=1;
    }
    return result;
}
void first()
 {
    string s,a="codeforces";
    cin>>s;
    int ct=0;
    fl(i,0,10)
    {
        if(s[i]!=a[i])
            ct++;
    }
    cout<<ct<<endl;
 }
 void second()
 {
    int n;
    cin>>n;
    vi v(n);
    int ct=0,ans=0;
    fl(i,0,n)
    {
        cin>>v[i];
        if(!v[i])
            ct++;
        else
        {
            ct=0;
        }
         ans=max(ans,ct);
    }
    cout<<ans<<endl;
 }
 void third()
 {
    int n;
    cin>>n;
   vector<pair<ll,string>>v;
    fl(i,0,n)
    {
        ll a;
        string b;
        cin>>a;
        cin>>b;
        v.pb(make_pair(a,b));
    }
     ll ans1=INT_MAX,ans2=INT_MAX,ans3=INT_MAX;
    for(auto& it:v){
        if(it.second=="11")
            ans1=min(ans1,it.first);
        else if(it.second=="01")
            ans2=min(ans2,it.first);
        else if(it.second=="10")
            ans3=min(ans3,it.first);
    }
    if(ans1!=INT_MAX&&ans2!=INT_MAX&&ans3!=INT_MAX)
        cout<<min(ans1,ans2+ans3)<<endl;
    else if(ans1!=INT_MAX)
        cout<<ans1<<endl;
    else if(ans2!=INT_MAX&&ans3!=INT_MAX)
        cout<<ans2+ans3<<endl;
    else
        cout<<-1<<endl;
         
 }
int main(){
    optimize();
      w(t)
      {
         second();
      }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
   cin>>t;
   while(t--){
    long long int k,n;
      cin>>n>>k;

   long long int p,q;

   
   if (k==1)
    {
      cout<<"YES"<<endl;
    } 
    else if (n%2==0 && k%2==0)
    {
      cout<<"YES"<<endl;
    }

    else if (n%2!=0 && k%2!=0)
    {
      cout<<"YES"<<endl;
    }
    else if (n%2!=0 && k%2==0 )
    {
      cout<<"NO"<<endl;
      
    }
    else if (n%2==0 && k%2!=0)
    {
      if ( n%2==0 || (n/2)>=k)
      {
        cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
      
    }
 }
    
    return 0;
 }
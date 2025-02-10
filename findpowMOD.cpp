// modular arithmetic, binary and modular exponentiation
#include<bits/stdc++.h>


/*
1. (a+b)%m = (a%m+b%m)%m;
2. (a-b)%m = (a%m - b%m)%m;
3. (a*b)%m = (a%m * b%m) %m;

*/
using namespace std;

long long findpow(long long a,long long b){

if(b==0) return 1;

if(b==1) return a;

long long x = findpow(a,b/2);
long long ans =0;

(b%2==0) ? ans=x*x : ans= x*x*a;

return ans;

/// complexity 0(logn)

}
long long findpowMOD(long long a,long long b, long long m){

    if(b==0) return 1;
    
    if(b==1) return a;
    
    long long x = findpowMOD(a,b/2,m)%m;
    long long ans =0;
    
    (b%2==0) ? ans=x*x : ans= (x%m*x%m*a%m)%m;
    
    return ans;
    
    /// complexity 0(logn)
    
    }


signed main() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
  long long n,m;

  cin>>n>>m;
   

   if(n>30) cout<<m;

   else {
    long long x = findpow(2,n);
    long long ans  = m%x;

    cout<<ans;
   }


    return 0;
}

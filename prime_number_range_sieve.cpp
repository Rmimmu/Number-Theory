/// print the prime number in between 1 to n using sieve's theorem.


#include<bits/stdc++.h>

using namespace std;

int isPrime(int n){

    bool ok=1;

    for(int i=2;i*i<=n;i++){

        if(n%i==0) ok=0;
    }
     
    return ok;

}

vector<bool>sieve(int n) {

    vector<bool>v(n+1, true);

    v[0] = false;
    v[1]= false;

    for(int i=2;i*i<=n;i++) {

        if(isPrime(i)) {
            for(int j=i*i;j<=n;j+=i) v[j] = false;

            
        }


    }
    
return v;



}


int main() {
  
    int n;
    cin>>n;

   vector<bool>v;
   v = sieve(n);

   for(int i=1;i<=n;i++) {
    if(v[i]) cout<<i<<" ";
   }

    return 0;
}

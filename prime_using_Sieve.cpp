/// find a prime number using sieve's theorem.


#include<bits/stdc++.h>

using namespace std;

int isPrime(int n){

    bool ok=1;

    for(int i=2;i*i<=n;i++){

        if(n%i==0) ok=0;
    }
     
    return ok;

}


int main() {
  
    int n;
    cin>>n;

    cout<< ((isPrime(n)) ? "Prime":"Not Prime");

    return 0;
}

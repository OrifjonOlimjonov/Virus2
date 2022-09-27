#include<bits/stdc++.h>
using namespace std;
/// Binary Power algorithm
long long binPower(long long k,long long n){
    if(n==0) return 1;
    long long temp = binPower(k,n/2);
    long long result = temp * temp%1000000007;
    if(n%2 == 1) result *=k%1000000007;
    return result%1000000007;
}
int main()
{
    long long n,k ,sum=1;
    cin>>n>>k;
    if(n==0)  cout<<1;
    else{
        sum = binPower(k+1,n);
        cout<<sum;
    }
    return 0;
}
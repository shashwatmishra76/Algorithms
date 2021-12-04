#include<bits/stdc++.h>
using namespace std;
 
#define int long long

/*
    Binary exponentiation lets you calculate a^n in log(n) steps rather than the tradional n steps.
    
    Eg. 3^13 = 3^((1101) base 2) = 3^1 * 3^4 * 3^8 (We skipped 3^2 because the corresponding bit in exponent is not set)
*/

int binaryExponentiation(int a, int n){
    int res = 1;
    while(n > 0){
        if(n & 1){
            res = res * a;
        }
        a = a * a;
        n >>= 1;
    }
    return res;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    const int mod = 1e9 + 7;
    //code here
    
    cout<<binaryExponentiation(3, 13);
    
    //code here
    return 0;
}

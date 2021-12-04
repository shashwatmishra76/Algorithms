#include<bits/stdc++.h>
using namespace std;
 
#define int long long

/*
    Euclidean algorithm lets you calculate gcd(a, b) in O(log(min(a,b))) complexity
    
    Extended Euclidean algorithm also lets you calculate x and y such that ax + by = gcd(a, b)
*/

int gcdEuclid(int a, int b){
    
    if(a == 0)
        return b;
    
    return gcdEuclid(b % a, a);
}

int extendedGcdEuclid(int a, int b, int *x, int *y){
    if(a == 0){
        *x = 0;
        *y = 1;
        return b;
    }
    
    int x1, y1;
    int gcd = extendedGcdEuclid(b % a, a, &x1, &y1);
    *x = y1 - ((b / a) * x1);
    *y = x1;
    
    return gcd;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    const int mod = 1e9 + 7;
    //code here
    
    cout<<gcdEuclid(2, 8);
    
    //code here
    return 0;
}

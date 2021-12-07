#include<bits/stdc++.h>
using namespace std;
 
#define int long long

int extendedEuclidean(int a, int b, int *x, int *y){
    if(a == 0){
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = extendedEuclidean(b % a, a, &x1, &y1);
    *x = y1 - (b/a)*x1;
    *y = x1;
    return gcd;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    const int mod = 1e9 + 7;
    //code here
    int x, y;
    int a, m;
    cin>>a>>m;
    int g = extendedEuclidean(a, m, &x, &y);
    if(g != 1){
        cout<<"Modular inverse does not exist";
    }else{
        cout<<((x%m + m) % m);
    }
    
    //code here
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
 
#define int long long

/* 
   Method to demonstrate insertion sort.

   Think of it as extracting cards with your right hand from a deck of cards and putting them in a 
   sorted manner in your left hand. The deck in your left hand remains sorted at all times.
   
*/


/* 
   
   Passing vector by reference as, if we pass by value, for a large sized vector, copying elements to
   formal parameter of the function will take a lot of time, hence it is inefficient.
   
   TC of insertion sort : O(n^2)

*/ 
void insertionSort(vector<int> &v){
    for(int i = 1; i < v.size(); i++){
        int key = v[i];
        int j = i-1;
        while(j >= 0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    const int mod = 1e9 + 7;
    //code here
    
    int n;
    cin>>n;
    
    vector<int>v;
    int x;
    for(int i = 0; i < n; i++){
        cin>>x;
        v.push_back(x);
    }
    
    insertionSort(v);
    
    cout<<"Sorted vector"<<"\n";
    for(int x : v){
        cout<<x<<" ";
    }
    //code here
    return 0;
}

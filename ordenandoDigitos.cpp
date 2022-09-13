#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL 
#include "debug.h"
#else
#define debug(...)
#define save(x)
#endif

#define fore(i,a,z) for(int i = a ; i < z ; i++)
#define endl '\n' 
#define ull unsigned long long  
#define ll long long

int main(){
 cin.tie(0)->sync_with_stdio(0), cout.tie(0);
 int n ;
 cin >> n ;
 int a[n];
 for(int i  = 0  ; i  < n ; i ++){
  cin >> a[i];
 }
 sort(a ,  a + n ); // manera mas eficiente      
 for(int i  = 0  ; i  < n ; i ++){
  cout << a[i] << " " ;
 }

    
} 

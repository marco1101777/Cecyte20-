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

// izi :D 

int f(int n){
  if(n <= 5 ){
    return 1;
  }
  return f( n -2 ) * 5 ;
}


int main(){
 cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  int  n ;
  cin  >> n ;
  cout <<  f(n) << '\n';



    
} 

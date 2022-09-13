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
  char  a  ;
  short  i = 1 ; 
  while(cin >> a ){
    if(a == '#') printf("[%d] ",i); 
    i++ ;
  }
  while(cin >> a){
    if(a == '#') printf("[%d]",i); 
    i++ ;
  }
} 

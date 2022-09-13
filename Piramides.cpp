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
  int subNiveles  ; 
  cin >>  subNiveles ; 
  int esp  = subNiveles / 2 ;
  esp++; 
  int estrellas  = 1 ;  
  for(int i = 0 ; i  < subNiveles ; i++){
    for(int j = 0  ; j < esp ; j++){
      cout << " " ;   
    }
    for(int d = 0  ; d < estrellas   ; d++){
      cout << "*" ;   
    }
    cout  << endl; 
    estrellas += 2 ;
    esp-- ;
  } 
    
} 

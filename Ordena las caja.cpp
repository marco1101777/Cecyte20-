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

struct  caja{
  int volumen;
  int peso ;
  int pos  ;


  friend ostream& operator << (ostream &os ,const caja a){
    return os <<  a.pos  << " " ; 
  }

   
 };

 bool orden(caja a , caja b){
  if(a.volumen != b.volumen)
    return a.volumen < b.volumen;
  return  a.peso  > b.peso ; 
 }


int main(){
 cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  int n ;
  cin  >> n  ;
  caja  cajas[n+1]; 
  fore(i,0,n){
    cin >> cajas[i].volumen >> cajas[i].peso ;
    cajas[i].pos = i + 1 ;
  }
  sort(cajas , cajas + n , orden);
  fore(i,0,n){
    cout << cajas[i];
  }

    
} 

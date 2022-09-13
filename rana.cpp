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





const int N = 1e6 ;
bool caminito[N]; 
int camino , saltos ;
int sal = 0  ;

int   rec(int piedra){
  if(caminito[piedra]){
    sal++;
    rec(piedra + saltos );
    return sal ; 
  }
  return sal;
}


int main(){
 cin.tie(0)->sync_with_stdio(0), cout.tie(0);
    
  cin >> camino >> saltos  ;
  fore(i,0,camino){
    cin >> caminito[i]; 
  }
  cout << rec(0);


    
} 

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


//  max 1 a 100 
const int  N  = 100 + 5;
vector<int> CantDiv(N) ; 

void pintar(){
    auto  divisores = [&](int num){
         set<int> div;
          div.insert(1);
          div.insert(num);
          for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
              div.insert(i);
              div.insert(num / i);
            }
          }
          debug(num,div);
          return div.size();
    }; 

    CantDiv[1] = 1 ; 
    CantDiv[2] = 2  ;
    CantDiv[3] = 2 ;
    fore( i , 4 , N ){
        CantDiv[i] = divisores(i);  
    }

} 



int main(){
    cin.tie(0)->sync_with_stdio(0), cout.tie(0);
    int n ;
    cin >> n ; 
    int a[n] ;
    fore( i, 0, n ){
        cin >> a[i] ;
    }  
    pintar() ;
    debug(CantDiv) ;
    sort(a , a + n ,[&](int c , int b){
        if( CantDiv[c] != CantDiv[b])
            return CantDiv[c] < CantDiv[b] ;
        return c > b;
    });
    fore( i , 0 , n ){
        printf("%d ",a[i] );
    }
} 

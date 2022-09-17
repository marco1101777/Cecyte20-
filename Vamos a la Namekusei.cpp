#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#define save(x)
#endif

#define fore(i, a, z) for (int i = a; i < z; i++)
#define endl '\n'
#define ull unsigned long long
#define ll long long




int main()   {
    cin.tie(0)->sync_with_stdio(0), cout.tie(0);
    int max_casas   = 10 ;
    bool caminos[max_casas][max_casas ];
    fore(i,0,max_casas){
      fore(j,0,max_casas){
        caminos[i][j] = false  ; 
      }
    }                                               ;
    int n_casas ;
    cin >> n_casas ;
    int casa1 ,casa2 ;
    for(int i  = 0  ; i < n_casas  ; i++ ) {
        cin >> casa1 >> casa2 ;
        caminos[casa1][casa2] = true  ;
        caminos[casa2][casa1] = true  ;
    }
    int casa ;
    cin >> casa ;
    for(int i =  0 ;  i < max_casas ; i++){
        if(caminos[casa][i]){
            cout << i << " ";
        }
    }
}

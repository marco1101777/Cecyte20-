#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL 
#include "debug.h"
#else
#define debug(...)
#endif

#define fore(i,a,z) for(int i = a ; i < z ; i++)
#define endl '\n' 
#define ull unsigned long long  
#define ll long long

set<int> copias ;

int main(){
 cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  
    // si existe negativo no imprimes nada ;
    int n;cin >> n ;
    int num;
    bool ok = true ;
    while(n--){
        cin >> num ;
        copias.insert(num);
        if(num < 0 && ok){
            ok = !ok ;
        }
    }

    if(ok){
        for(int  i : copias)
            cout << i << endl;
    }

} 
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
    int n ;
    cin >> n ;
    int a[n] ;
    for(int i = 0 ;i < n ; i ++){
        cin  >> a[i] ;
    }
    bool  ok = true ;
    int query  ;
    cin >> query  ;
    while(query--){
        char opc ;
        
        cin >> opc  ;
        if(opc == 'I'){
            int  num  ;
            cin >> num  ;
            int tmp = ok ? (num) : (n - 1) - num ;
            cout << a[tmp] << endl;  
        }else{
            ok = !ok ;
        }  
    }
}

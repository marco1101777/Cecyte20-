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
    char  num ;
   
    int tmp = 0 ;
    int  pos  = 0  ;
    char letra ;
    while(cin  >> num){
        if(num == '.' ){
            pos++; 
            letra  = tmp / pos  ;
            cout << letra;
            tmp = 0 ;  
        }else if (num == '-'){
            pos++;
            letra  = tmp / pos  ;
            cout << letra;
            cout << " " ;
            tmp  = 0 ;
        }else{
            tmp = (tmp * 10)  +  (num  - '0') ;
        }
        
    }   
    pos++;
    letra  = tmp / pos  ;
    
    cout << letra; 
}

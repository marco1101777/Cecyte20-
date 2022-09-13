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
    int n ;
    cin >> n  ;
    int esp = n / 2 ;
    esp++; 
    int estr = 1; 
    vector<char> matriz[n] ;
    for(int i = 0;  i < n ; i++ ){
        matriz[i].push_back('|'); 
        for(int tmp =  0 ; tmp < esp ; tmp++ ){
            matriz[i].push_back(' ');
        }
        for(int j = 0;  j < estr ; j++ ){
            matriz[i].push_back('*');
        }
        for(int tmp =  esp ; tmp > 0 ; tmp-- ){
            matriz[i].push_back(' ');
        }        
        matriz[i].push_back('|');
        esp--; 
        estr += 2 ; 
    } 
    for(int in = 0 ; in < n ;in++){
        for(auto it : matriz[in] ){
            cout << it ;
        }
        cout << endl;
    }
    
} 

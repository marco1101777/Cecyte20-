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


const int N = 1e6;
vector<int> tree[N];

void dfs(int ini){
  
  for(auto  i : tree[ini] ){
    cout << i << " ";
    dfs(i); 
  }
}

int main(){
 cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  int n  ;
  cin >> n  ;
  int a[n]; 
  fore(i,1,n+1){  
    cin >> a[i] ;
  } 
  int it = 2  ;
  
  for(int i =  1 ; it < n    ; i++){
    debug(it,i);
    tree[a[i]].push_back(a[it]);
    it++;
    tree[a[i]].push_back(a[it]);
    it++ ;
  }
  int q  ;
  cin >> q  ;
  cout << q << " ";
  dfs(q);

    
}

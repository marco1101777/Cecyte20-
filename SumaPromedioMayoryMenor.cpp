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
  // Suma Promedio Mayor y Menor 
 int Cantidad_de_numeros  ;
 cin >> Cantidad_de_numeros ;
 float  numero ;
 float suma =  0  ;
 float promedio = 0  ;
 int mayor  = 0 ;
 int menor  = 1e3 ; // 1e6 = 1000 ; 
 for(int i = 0 ; i < Cantidad_de_numeros ; i++ ){
   cin >> numero ; 
   suma += numero ;
   if(mayor < numero ){
    mayor  =  numero ; 
   }
   if(menor > numero ){
    menor = numero ;
   }
 }
 if(Cantidad_de_numeros != 0 ){
  promedio = suma  / Cantidad_de_numeros ; 
 }
 
 // fixed llena de 0 una variable flotante despus del punto .000000 
 // , setprecision(numero) funcion que solo muestra la cantdan de numeros despues del decimal que se le asigne
  cout <<  suma << " " << fixed <<setprecision(2) <<   promedio << " " << mayor <<  " " << menor  << '\n';   

} 

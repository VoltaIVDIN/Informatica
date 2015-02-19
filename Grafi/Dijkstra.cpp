#include <string>
#include <iostream>

#include "Dijkstra.h"

using namespace std;

void Dijkstra::Init()
{
}

bool Dijkstra::PercorsoMinimo( GrafoMatrice g, bool trace )
{
     bool visitati[5] = { false, false, false, false, false };
     int pesi[5] = { 0, -1, -1, -1, -1 };
     int da[5] = { 0, 0, 0, 0, 0 };
     
     int n = CercaNodo( pesi, visitati );
     while( n >= 0 )
     {
         CalcolaPesi( n, g.Grafo(), pesi, da, visitati );
         visitati[n] = true;

         if( trace )
             Show( n, pesi, da, visitati);
             
         n = CercaNodo( pesi, visitati );
     }
     
     return true;
}

int Dijkstra::CercaNodo( int *p, bool *v )
{
    int peso = -1;
    int nodo = -1;
    
    for( int i = 0; i<5; i++ )
    {
         if( v[i] ) continue;
         if( p[i] == -1 ) continue;

         if( peso == -1 ) 
             { peso = p[i]; nodo = i; }
         
         if( peso > p[i] ) 
             { peso = p[i]; nodo = i; }
    }
    
    return nodo;
}

void Dijkstra::CalcolaPesi( int n, Matrice g, int *p, int *da, bool *v )
{
     for( int j=0; j<5; j++ )
     {
          if( g[n*5+j] == 0 ) continue;
          if( v[j] ) continue;
          
          if( p[j] == -1 ) 
          {   
              p[j] = p[n] + g[n*5+j]; 
              da[j] = n;
          }
          if( p[j] > p[n] + g[n*5+j] )
          {   
              p[j] = p[n] + g[n*5+j]; 
              da[j] = n;
          }
     }
}

void Dijkstra::Show( int n, int *p, int *da, bool *v )
{
     cout << endl << endl << n << endl;
     for( int j=0; j<5; j++ )
          cout << "  " << p[j];

     cout << endl << endl;
     for( int j=0; j<5; j++ )
          cout << "  " << da[j];

     cout << endl << endl;
     for( int j=0; j<5; j++ )
          cout << "  " << v[j];
}

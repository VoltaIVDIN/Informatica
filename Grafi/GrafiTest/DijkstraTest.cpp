#include <string>
#include <iostream>

#include "DijkstraTest.h"
#include "Dijkstra.h"

int DijkstraTest::RunTest()
{
       int i = PercorsoMinimoConMatrice();
       
       return i;
}

bool DijkstraTest::PercorsoMinimoConMatrice()
{
     cout << endl << "PercorsoMinimo";

     int grafo[5][5] = {{ 0, 2, 4, 0, 0 }
                       ,{ 2, 0, 1, 5, 7 }
                       ,{ 4, 1, 0, 1, 4 }
                       ,{ 0, 5, 1, 0, 1 }
                       ,{ 0, 7, 4, 1, 0 }
                       };
     
     Matrice m = (Matrice) malloc( 5*5*sizeof(int));
     
     for( int i=0; i<5; i++ )
          for( int j=0; j<5; j++ )
               m[i*5 + j] = grafo[i][j];
               
     GrafoMatrice g;
     g.LeggiGrafo( m, 5 );
     free( m );

     Dijkstra d;
     if( ! d.PercorsoMinimo( g, true ) ) return true;
     
     return false;
}

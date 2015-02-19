//#include <list>
#include <iostream>

#include "Grafo.h"

using namespace std;

Grafo::Grafo()
{
     m_pGrafo = NULL;
}

bool Grafo::InputGrafo( string s )
{
     return true;
}
/*
bool Grafo::LeggiGrafoCon()
{
     Connettore conn;
     
     list<string> grafo;
     conn.LeggiGrafoCon( grafo );
     
     return false;
}

bool Grafo::LeggiGrafoTxt( string file )
{
     return false;
}

bool Grafo::LeggiGrafoXML( string file )
{
     return false;
}
*/

/*
Nodo * Grafo::LeggiSubGrafo( string s, bool origine )
{
//     string s = "A:B#1,D#4;";
     StringTool st; 
     vector<string> nodo;
     vector<string> nodiconnessi;
     
     st.Split( s, ':', nodo );
     if( nodo.size() != 2 ) return NULL;
     
     st.Split( nodo[1], ',', nodiconnessi );
     if( nodiconnessi.size() == 0 ) return NULL;
     
     Nodo * n = origine? new Nodo( nodo[0], nodo[0] ): new Nodo( nodo[0] );
     NodoConnesso * cur = n->ListaNodiConnessi();
     
     for( int i = 0; i < nodiconnessi.size(); ++i )
     {
          NodoConnesso * pnc = new NodoConnesso( nodiconnessi[i] );
          if( i == 0) 
              n->AggiungiNodoConnesso( pnc );
          else
              cur->AggiungiNodoConnesso( pnc );
          cur = pnc;
     }
   
     return n;
}
 */      

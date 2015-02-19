#include <iostream>

#include "GrafoLista.h"
#include "StringTool.h"

using namespace std;

bool GrafoLista::ConvertiGrafo( string )
{}

bool GrafoLista::LeggiGrafo( string s )
{
     StringTool st; 
     vector<string> nodi;
     
     st.Split( s, ';', nodi );
     if( nodi.size() == 0 ) return false;

     Nodo * cur = m_pGrafo;
     for( int i = 0; i < nodi.size(); i++ )
     {
          Nodo * n = LeggiSubGrafo( nodi[i], i == 0 );
          if( i == 0) 
              m_pGrafo = n;
          else
              cur->NodoSuccessivo( n );
          cur = n;
     }
     
     return true;
}

Nodo * GrafoLista::LeggiSubGrafo( string s, bool origine )
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
       

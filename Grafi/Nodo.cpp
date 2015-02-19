#include "Nodo.h"

Nodo::Nodo()
{
    m_Nome = "";
    m_Da = "";
    m_Peso = -1;
    m_Visitato = false;
    m_pListaNodiConnessi = NULL;
}

Nodo::Nodo( string n )
{
    m_Nome = n;
    m_Da = "";
    m_Peso = -1;
    m_Visitato = false;
    m_pListaNodiConnessi = NULL;
}

Nodo::Nodo( string n1, string n2 )
{
    m_Nome = n1;
    m_Da = n2;
    m_Peso = 0;
    m_Visitato = false;
    m_pListaNodiConnessi = NULL;
}

bool Nodo::LeggiNodo( string s )
{
     size_t colon = s.find( ':' );
     if( colon == string::npos )  return false;
     
     m_Nome = s.substr( 0, colon );
          
     return colon != string::npos && m_Nome != "";
}

bool Nodo::LeggiPrimoNodo( string s )
{
     if( !LeggiNodo( s ) ) return false;
     
     m_Da = m_Nome;
     m_Peso = 0;
     m_Visitato = false;
          
     return true;
}

bool Nodo::LeggiAltroNodo( string s )
{
     if( !LeggiNodo( s ) ) return false;
     
     m_Da = "";
     m_Peso = -1;
     m_Visitato = false;
          
     return true;
}

NodoConnesso * Nodo::AggiungiNodoConnesso( NodoConnesso * pnc )
{
     m_pListaNodiConnessi = pnc;
}

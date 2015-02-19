#include "Arco.h"
#include "StringTool.h"

Arco::Arco()
{
    m_NodoDa = "";
    m_NodoA = "";
    m_Peso = 0;
}

Arco::Arco( string da, string a, int p )
{
    m_NodoDa = da;
    m_NodoA = a;
    m_Peso = p;
}

bool Arco::LeggiArco( string s )
{
     StringTool st; 
     vector<string> da;
     vector<string> resto;
     
     st.Split( s, '>', da );
     if( da.size() != 2 ) return false;
     
     st.Split( da[1], '#', resto );
     if( resto.size() != 2 ) return false;
 	 
     m_NodoDa = da[0];
     m_NodoA = resto[0];
     string p = resto[1];
     m_Peso = atof( p.c_str() );
 	 
 	 return m_NodoDa != "" && m_NodoA != "" && p != "";
}

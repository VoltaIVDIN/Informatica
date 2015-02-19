#include "NodoConnesso.h"

NodoConnesso::NodoConnesso()
{
    m_Nome = "";
    m_Peso = 0;
    m_pNodoConnessoSuccessivo = NULL;
}

NodoConnesso::NodoConnesso( string s )
{
    LeggiNodoConnesso( s );
    m_pNodoConnessoSuccessivo = NULL;
}

bool NodoConnesso::LeggiNodoConnesso( string s )
{
     size_t sharp = s.find( '#' );
     if( sharp == string::npos )  return false;
     
     m_Nome = s.substr( 0, sharp );
     
     string peso = s.substr( sharp+1  );
     if( peso != "" ) m_Peso = atof( peso.c_str() );

     return sharp != string::npos && m_Nome != "" && peso != "";
}

bool NodoConnesso::LeggiNodoConnIntermedio( string s )
{
     size_t comma = s.find( ',' );
     if( comma == string::npos )  return false;
               
     return LeggiNodoConnesso( s );
}

bool NodoConnesso::LeggiNodoConnFinale( string s )
{
     size_t comma = s.find( ';' );
     if( comma == string::npos )  return false;
               
     return LeggiNodoConnesso( s );
}

NodoConnesso * NodoConnesso::AggiungiNodoConnesso( NodoConnesso * pnc )
{
     m_pNodoConnessoSuccessivo = pnc;
}

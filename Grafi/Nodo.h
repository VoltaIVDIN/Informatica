#include <string>
#include "NodoConnesso.h"

using namespace std;

class Nodo
{
public:
       Nodo();
       Nodo( string );
       Nodo( string, string );
       bool LeggiNodo( string s );
       bool LeggiPrimoNodo( string s );
       bool LeggiAltroNodo( string s );
       NodoConnesso * AggiungiNodoConnesso( NodoConnesso * );
       
       void Nome( string n ) { m_Nome = n; };
       string Nome() { return m_Nome; };
       void Da( string da ) { m_Da = da; };
       string Da() { return m_Da; };
       void Peso( float p ) { m_Peso = p; };
       float Peso() { return m_Peso; };
       void Visitato( bool v ) { m_Visitato = v; };
       bool Visitato() { return m_Visitato; };
       void ListaNodiConnessi( NodoConnesso * nc ) { m_pListaNodiConnessi = nc; };
       NodoConnesso * ListaNodiConnessi() { return m_pListaNodiConnessi; };
       void NodoSuccessivo( Nodo * n ) { m_pNodoSuccessivo = n; }
       Nodo * NodoSuccessivo() { return m_pNodoSuccessivo; }
       
private:
        string m_Nome;
        string m_Da;
        float m_Peso;
        bool m_Visitato;
        NodoConnesso * m_pListaNodiConnessi;
        Nodo * m_pNodoSuccessivo;
};

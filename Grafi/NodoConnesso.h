#include <string>

using namespace std;

class NodoConnesso
{
public:
       NodoConnesso();
       NodoConnesso( string );
       bool LeggiNodoConnesso( string );
       bool LeggiNodoConnIntermedio( string );
       bool LeggiNodoConnFinale( string );
       NodoConnesso * AggiungiNodoConnesso( NodoConnesso * );
       
       void Nome( string n ) { m_Nome = n; };
       string Nome() { return m_Nome; };
       void Peso( float p ) { m_Peso = p; };
       float Peso() { return m_Peso; };
       NodoConnesso * NodoConnessoSuccessivo() { return m_pNodoConnessoSuccessivo; };
       
private:
        string m_Nome;
        float m_Peso;
        NodoConnesso * m_pNodoConnessoSuccessivo;
};

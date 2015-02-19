#ifndef Arco_h
#define Arco_h

#include <string>

using namespace std;

class Arco
{
public:
       Arco();
       Arco( string, string, int );
       bool LeggiArco( string );
       
       void NodoDa( string n ) { m_NodoDa = n; };
       string NodoDa() { return m_NodoDa; };
       void NodoA( string n ) { m_NodoA = n; };
       string NodoA() { return m_NodoA; };
       void Peso( float p ) { m_Peso = p; };
       float Peso() { return m_Peso; };
       
private:
        string m_NodoDa;
        string m_NodoA;
        float m_Peso;
};
#endif //Arco_h

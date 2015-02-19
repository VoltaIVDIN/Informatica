#include <string>

#include "Grafo.h"
#include "Nodo.h"

using namespace std;

class GrafoLista : public Grafo
{
public:
       bool ConvertiGrafo( string );
       bool LeggiGrafo( string );
              
       Nodo * LeggiSubGrafo( string, bool );
       
       //getter setter
       Nodo * InizioGrafo() { return m_pGrafo; };
       
private:
       Nodo * m_pGrafo; 
};

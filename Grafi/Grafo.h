#ifndef Grafo_h
#define Grafo_h

#include <string>

#include "Arco.h"

using namespace std;

class Grafo
{
public:
       Grafo();
       bool InputGrafo( string );
       virtual bool ConvertiGrafo( string )=0;
                   
private:
       Arco * m_pGrafo; 
};
#endif //Grafo_h

#include <string>

#include "Grafo.h"

using namespace std;

#define NNODI 5

typedef int * Matrice;

class GrafoMatrice: public Grafo
{
public:
       bool ConvertiGrafo( string );
	   bool LeggiGrafo( Matrice m, int size );

	   //getter Setter
	   Matrice Grafo() { return m_Grafo; };     
       
private:
       Matrice m_Grafo;
       int m_Size;
};

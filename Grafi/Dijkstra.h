#include "GrafoMatrice.h"
#include "GrafoLista.h"

class Dijkstra
{
public:
       bool PercorsoMinimo( GrafoMatrice, bool );
       
private:
        void Init();
        int CercaNodo( int[], bool[] );
        void CalcolaPesi( int , Matrice, int *, int *, bool * );
        void Show( int n, int *, int *, bool * );
        
};

#include <string>
#include <iostream>
#include <math.h>

#include "GrafoListaTest.h"
#include "GrafoLista.h"


using namespace std;

int GrafoListaTest::RunTest()
{
    int i = LeggiPrimoNodo();
    i += LeggiAltroNodo();
    i += LeggiGrafo();
    
    return i;
}

bool GrafoListaTest::LeggiPrimoNodo()
{
     cout << endl << "LeggiPrimoNodo";

     string s = "A:B#1.1,D#4.1;";
     GrafoLista g;
     Nodo * pn = g.LeggiSubGrafo( s, true );
     
     bool res = pn->Nome() != "A";
     res |= pn->Da() != "A";
     res |= pn->Peso() != 0;
     res |= pn->Visitato() != false;
     string s2 = pn->Nome() + ":";
     
     NodoConnesso * pnc = pn->ListaNodiConnessi();
     res |= pnc->Nome() != "B";
     float peso = floorf( pnc->Peso() * 10) ;
     res |= peso != 11.0;
     s2 += pnc->Nome() + "#";
     char p[20];
     sprintf( p, "%f", pnc->Peso());
     string s3 = p;
     s2 += s3 + ",";
     
     pnc = pnc->NodoConnessoSuccessivo();
     res |= pnc->Nome() != "D";
     peso = floorf( pnc->Peso() * 10) ;
     res |= peso != 41.0;
     s2 += pnc->Nome() + "#";
     sprintf( p, "%f", pnc->Peso());
     s3 = p;
     s2 += s3 + ";";
     
     cout << ( res ? " ... FAILED    " : " ... PASSED   " ) << s2;
     return res;

      return true;
}


bool GrafoListaTest::LeggiAltroNodo()
{
     cout << endl << "LeggiAltroNodo";

     string s = "A:B#1.1,D#4.1;";
     GrafoLista g;
     Nodo * pn = g.LeggiSubGrafo( s, false );
     
     bool res = pn->Nome() != "A";
//     res |= pn->Da() != "";
     res |= pn->Peso() != -1;
     res |= pn->Visitato() != false;
     string s2 = pn->Nome() + ":";
     
     NodoConnesso * pnc = pn->ListaNodiConnessi();
     res |= pnc->Nome() != "B";
     float peso = floorf( pnc->Peso() * 10) ;
     res |= peso != 11.0;
     s2 += pnc->Nome() + "#";
     char p[20];
     sprintf( p, "%f", pnc->Peso());
     string s3 = p;
     s2 += s3 + ",";
     
     pnc = pnc->NodoConnessoSuccessivo();
     res |= pnc->Nome() != "D";
     peso = floorf( pnc->Peso() * 10) ;
     res |= peso != 41.0;
     s2 += pnc->Nome() + "#";
     sprintf( p, "%f", pnc->Peso());
     s3 = p;
     s2 += s3 + ";";
     
     cout << ( res ? " ... FAILED    " : " ... PASSED   " ) << s2;
     return res;

      return true;
}


bool GrafoListaTest::LeggiGrafo()
{
     cout << endl << "LeggiGrafo";

     string s = "A:B#1.1,D#4.1;B:A#1.1,C#3.1;";
     GrafoLista g;
     if( ! g.LeggiGrafo( s ) ) return true;
     
     Nodo * pn = g.InizioGrafo();
     
     bool res = pn->Nome() != "A";
     res |= pn->Da() != "A";
     res |= pn->Peso() != 0;
     res |= pn->Visitato() != false;
     string s2 = pn->Nome() + ":";
     
     NodoConnesso * pnc = pn->ListaNodiConnessi();
     res |= pnc->Nome() != "B";
     float peso = floorf( pnc->Peso() * 10) ;
     res |= peso != 11.0;
     s2 += pnc->Nome() + "#";
     char p[20];
     sprintf( p, "%f", pnc->Peso());
     string s3 = p;
     s2 += s3 + ",";
     
     pnc = pnc->NodoConnessoSuccessivo();
     res |= pnc->Nome() != "D";
     peso = floorf( pnc->Peso() * 10) ;
     res |= peso != 41.0;
     s2 += pnc->Nome() + "#";
     sprintf( p, "%f", pnc->Peso());
     s3 = p;
     s2 += s3 + ";";
     
     cout << ( res ? " ... FAILED    " : " ... PASSED   " ) << s2;
     return res;

      return true;
}

#include <string>
#include <iostream>

#include "NodoTest.h"
#include "Nodo.h"

using namespace std;

int NodoTest::RunTest()
{
    int i = LeggiNodoSenzaColon();
    i += LeggiNodoConColonErrato();
    i += LeggiNodoSenzaNome();
    i += LeggiPrimoNodo();
    i += LeggiAltroNodo();
    
    return i;
}

bool NodoTest::LeggiNodoSenzaColon()
{
     cout << endl << "LeggiNodoSenzaColon";
     
     string s = "A";
     Nodo n;
     bool res = n.LeggiNodo( s );
          
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}

bool NodoTest::LeggiNodoConColonErrato()
{
     cout << endl << "LeggiNodoConColonErrato";

     string s = "A#";
     Nodo n;
     bool res = n.LeggiNodo( s );
          
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}

bool NodoTest::LeggiNodoSenzaNome()
{
     cout << endl << "LeggiNodoSenzaNome";

     string s = ":";
     Nodo n;
     bool res = n.LeggiNodo( s );
          
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}

bool NodoTest::LeggiPrimoNodo()
{
     cout << endl << "LeggiPrimoNodo";

     string s = "A:";
     Nodo n;
     n.LeggiPrimoNodo( s );
     
     bool res = n.Nome() != "A";
     res |= n.Da() != "A";
     res |= n.Peso() != 0;
     res |= n.Visitato() != false;
     
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}

bool NodoTest::LeggiAltroNodo()
{
     cout << endl << "LeggiAltroNodo";

     string s = "A:";
     Nodo n;
     n.LeggiAltroNodo( s );
     
     bool res = n.Nome() != "A";
     res |= n.Da() != "";
     res |= n.Peso() != -1;
     res |= n.Visitato() != false;
     
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}

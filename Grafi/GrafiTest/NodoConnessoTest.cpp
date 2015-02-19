#include <string>
#include <iostream>
#include <math.h>

#include "NodoConnessoTest.h"
#include "NodoConnesso.h"

int NodoConnessoTest::RunTest()
{
       int i = LeggiNodoConnesso();
       i += LeggiNodoConnSenzaCanc();
       i += LeggiNodoConnConCancErrato();
       i += LeggiNodoConnSenzaNome();
       i += LeggiNodoConnSenzaPeso();
       
       i += LeggiNodoConnSenzaVirgola();
       i += LeggiNodoConnSenzaSemiColon();
       i += LeggiNodoConnIntermedio();
       i += LeggiNodoConnFinale();
       
       return i;
}

bool NodoConnessoTest::LeggiNodoConnesso()
{
     cout << endl << "LeggiNodoConnesso";
     
     string s = "B#1.1";
     NodoConnesso nc;
     bool res = !nc.LeggiNodoConnesso( s );
     
     res |= nc.Nome() != "B";
     float peso = floorf( nc.Peso() * 10) ;
     res |= peso != 11.0;
     
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}

bool NodoConnessoTest::LeggiNodoConnSenzaCanc()
{
     cout << endl << "LeggiNodoConnSenzaCanc";
     
     string s = "B1.1";
     NodoConnesso nc;
     bool res = nc.LeggiNodoConnesso( s );
          
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}


bool NodoConnessoTest::LeggiNodoConnConCancErrato()
{
     cout << endl << "LeggiNodoConnConCancErrato";
     
     string s = "B@1.1";
     NodoConnesso nc;
     bool res = nc.LeggiNodoConnesso( s );
          
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}


bool NodoConnessoTest::LeggiNodoConnSenzaNome()
{
     cout << endl << "LeggiNodoConnSenzaNome";
     
     string s = "#1.1";
     NodoConnesso nc;
     bool res = nc.LeggiNodoConnesso( s );
          
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}


bool NodoConnessoTest::LeggiNodoConnSenzaPeso()
{
     cout << endl << "LeggiNodoConnSenzaPeso";
     
     string s = "B#";
     NodoConnesso nc;
     bool res = nc.LeggiNodoConnesso( s );
          
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}

bool NodoConnessoTest::LeggiNodoConnSenzaVirgola()
{
     cout << endl << "LeggiNodoConnSenzaVirgola";
     
     string s = "B#1.1";
     NodoConnesso nc;
     bool res = nc.LeggiNodoConnIntermedio( s );
          
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}

bool NodoConnessoTest::LeggiNodoConnSenzaSemiColon()
{
     cout << endl << "LeggiNodoConnSenzaSemiColon";
     
     string s = "B#1.1";
     NodoConnesso nc;
     bool res = nc.LeggiNodoConnFinale( s );
          
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}



bool NodoConnessoTest::LeggiNodoConnIntermedio()
{
     cout << endl << "LeggiNodoConnIntermedio";
     
     string s = "B#1.1,";
     NodoConnesso nc;
     bool res = !nc.LeggiNodoConnIntermedio( s );
     
     res |= nc.Nome() != "B";
     float peso = floorf( nc.Peso() * 10) ;
     res |= peso != 11.0;
          
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}


bool NodoConnessoTest::LeggiNodoConnFinale()
{
     cout << endl << "LeggiNodoConnFinale";
     
     string s = "B#1.1;";
     NodoConnesso nc;
     bool res = !nc.LeggiNodoConnFinale( s );
     
     res |= nc.Nome() != "B";
     float peso = floorf( nc.Peso() * 10) ;
     res |= peso != 11.0;
          
     cout << ( res ? " ... FAILED" : " ... PASSED" );
     return res;
}



#include <string>
#include <iostream>
#include <math.h>

#include "ArcoTest.h"
#include "Arco.h"

using namespace std;

int ArcoTest::RunTest()
{
    int i = LeggiArcoSenzaMaggiore();
    i += LeggiArcoSenzaSharp();
    i += LeggiArcoSenzaNodoDa();
    i += LeggiArcoSenzaNodoA();
    i += LeggiArcoSenzaPeso();
    i += LeggiArco();
    
    return i;
}

bool ArcoTest::LeggiArcoSenzaMaggiore()
{
     cout << endl << "LeggiArcoSenzaMaggiore";
     
     string s = "AB#1";
     Arco a;
     bool res = a.LeggiArco( s );
     
     cout << ( res ? " ... FAILED" : " ... PASSED" );
 	 return res;
}

bool ArcoTest::LeggiArcoSenzaSharp()
{
     cout << endl << "LeggiArcoSenzaSharp";
     
     string s = "A>B1.1";
     Arco a;
     bool res = a.LeggiArco( s );
     
     cout << ( res ? " ... FAILED" : " ... PASSED" );
 	 return res;
}

bool ArcoTest::LeggiArcoSenzaNodoDa()
{
     cout << endl << "LeggiArcoSenzaNodoDa";
     
     string s = ">B#1.1";
     Arco a;
     bool res = a.LeggiArco( s );
     
     cout << ( res ? " ... FAILED" : " ... PASSED" );
 	 return res;
}

bool ArcoTest::LeggiArcoSenzaNodoA()
{
     cout << endl << "LeggiArcoSenzaNodoA";
     
     string s = "A>#1.1";
     Arco a;
     bool res = a.LeggiArco( s );
     
     cout << ( res ? " ... FAILED" : " ... PASSED" );
 	 return res;
}

bool ArcoTest::LeggiArcoSenzaPeso()
{
     cout << endl << "LeggiArcoSenzaPeso";
     
     string s = "A>B#";
     Arco a;
     bool res = a.LeggiArco( s );
     
     cout << ( res ? " ... FAILED" : " ... PASSED" );
 	 return res;
}

bool ArcoTest::LeggiArco()
{
     cout << endl << "LeggiArco";
     
     string s = "A>B#1.1";
     Arco a;
     bool res = !a.LeggiArco( s );

     res |= a.NodoDa() != "A";
     res |= a.NodoA() != "B";
     float peso = floorf( a.Peso() * 10) ;
     res |= peso != 11.0;
     
     cout << ( res ? " ... FAILED" : " ... PASSED" );
 	 return res;
}



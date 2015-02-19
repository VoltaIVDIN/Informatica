#include <cstdlib>
#include <iostream>

#include "StringToolTest.h"
#include "ArcoTest.h"
#include "NodoConnessoTest.h"
#include "NodoTest.h"
#include "GrafoListaTest.h"
#include "DijkstraTest.h"

using namespace std;

int main(int argc, char *argv[])
{
    system("PAUSE");
    
//________StringToolTest________
    cout << endl << endl << "________StringToolTest________" << endl;
    
    StringToolTest stt;
    
    int n;
    int ntot = n = stt.RunTest();    
    cout << endl << endl << "Test Falliti .... " << n << endl;
    
//________ArcoTest________
    cout << endl << endl << "________ArcoTest________" << endl;
    
    ArcoTest at;
    
    ntot += n = at.RunTest();    
    cout << endl << endl << "Test Falliti .... " << n << endl;
    
//________NodoTest________
    cout << endl << endl << "________NodoTest________" << endl;
    
    NodoTest nt;
    
    ntot += n = nt.RunTest();    
    cout << endl << endl << "Test Falliti .... " << n << endl;
    
//________NodoConnessoTest________
    cout << endl << endl << "________NodoConnessoTest________" << endl;
    
    NodoConnessoTest nct;
    
    ntot += n = nct.RunTest();    
    cout << endl << endl << "Test Falliti .... " << n << endl;
    
//________GrafoTest________
    cout << endl << endl << "________GrafoTest________" << endl;
    
    GrafoListaTest glt;
    
    ntot += n = glt.RunTest();    
    cout << endl << endl << "Test Falliti .... " << n << endl;
    
//________DijkstraTest________
    cout << endl << endl << "________DijkstraTest________" << endl;
    
    DijkstraTest dt;
    
    ntot += n = dt.RunTest();    
    cout << endl << endl << "Test Falliti .... " << n << endl;
    
//________Risultato Finale________
    cout << endl << endl << "________Risultato Finale________" << endl;
    
    cout << endl << endl << "Falliti in tutto .... " << ntot << endl;

    cout << endl << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

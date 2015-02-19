#include <iostream>

#include "GrafoMatrice.h"
//#include "StringTool.h"

using namespace std;

bool GrafoMatrice::ConvertiGrafo( string )
{}


bool GrafoMatrice::LeggiGrafo( Matrice m, int size )
{
     m_Size = size;
     m_Grafo = (Matrice) malloc( m_Size * m_Size * sizeof(int));
     
     for( int i=0; i<m_Size; i++ )
          for( int j=0; j<m_Size; j++)
               m_Grafo[i*m_Size+j] = m[i*m_Size+j];
}

   

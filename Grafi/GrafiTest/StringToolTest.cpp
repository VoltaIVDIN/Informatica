#include <string>
#include <vector>
#include <iostream>

#include "StringToolTest.h"
#include "StringTool.h"

using namespace std;

int StringToolTest::RunTest()
{
    int i = SplitStringRipetuto();
    i += SplitStringSubgrafo();
    
    return i;
}

bool StringToolTest::SplitStringRipetuto() 
{
     cout << endl << "SplitString";

     StringTool st; 
     vector<string> v;
     string s = "Account Name|Address 1|Address 2|City";
     st.Split( s, '|', v );
     
     bool res = v[0] != "Account Name";
     res |= v[1] != "Address 1";
     res |= v[2] != "Address 2";
     res |= v[3] != "City";
     
     string show = v[0] + "|" + v[1] + "|" + v[2] + "|" + v[3];

     cout << ( res ? " ... FAILED" : " ... PASSED    " ) << show;
     return res;
}

bool StringToolTest::SplitStringSubgrafo() 
{
     cout << endl << "SplitString";

     StringTool st; 
     vector<string> v1;
     vector<string> v2;
     string s = "A:B#1,D#4;";
     st.Split( s, ':', v1 );
     if( v1.size() != 2 ) 
     {   
         cout << ( true ? " ... FAILED    " : " ... PASSED    " );
         return false;
     }

     st.Split( v1[1], ',', v2 );
     
     bool res = v1[0] != "A";
     res |= v1[1] != "B#1,D#4;";
     res |= v2[0] != "B#1";
     res |= v2[1] != "D#4;";
     
     string show = v1[0] + ":" +  v2[0] + "," + v2[1];

     cout << ( res ? " ... FAILED    " : " ... PASSED    " ) << show;
     return res;
}

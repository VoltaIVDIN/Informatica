#include <string>

using namespace std;

class IGrafoInput
{
public:
       IGrafoInput(){};
       IGrafoInput( string ){};
       virtual string InputGrafo() = 0;
       virtual string InputGrafo( string ) = 0;
       
private:
};

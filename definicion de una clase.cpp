#include <iostream>
using namespace std;
class Persona
{   public:
    string nombre;
    int edad;
    void saludar()
    {   cout<<"Hola, soy "<<nombre<<" y tengo "<<edad<<" anios."<<endl;
    }
};
int main()
{   Persona persona1;
    persona1.nombre = "Juan";
    persona1.edad = 25;
    persona1.saludar();
    return 0;
}

#include <iostream>
#include <string>   
using namespace std;

int main() {
    string nombre;
    int num;
    int aleatorio = 0;
    rand(tine(0));
    aleatorio = (rand() % 20) + 1 ;

    while( (nombre.length() == 1) || (nombre.length() == 2) || (nombre.length() == 0) ){
        cout << "Hola, dime tu nombre" << endl;
        cin >> nombre;
        
        if ( (nombre.length() == 1) || (nombre.length() == 2) ){
            cout << "err: bad name"<<endl;
           // exit(0);
        }
    }

    cout << "Hola, " << nombre << endl;

    cout<<"Pensaré un número del 1 al 20 ,intenta adivinarlo"<< nombre << endl << Número: ;
    cin >> num;
    
    return 0;
}
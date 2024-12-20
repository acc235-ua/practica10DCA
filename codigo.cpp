#include <iostream>
#include <string>   
using namespace std;

int main() {
    string nombre;

    while( (nombre.length() == 1) || (nombre.length() == 2) || (nombre.length() == 0) ){
        cout << "Hola, dime tu nombre" << endl;
        cin >> nombre;
        
        if ( (nombre.length() == 1) || (nombre.length() == 2) ){
            cout << "err: bad name"<<endl;
           // exit(0);
        }
    }

    cout << "Hola, " << nombre << endl;
    
    return 0;
}
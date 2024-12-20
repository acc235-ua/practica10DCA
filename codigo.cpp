#include <iostream>
#include <string>   
using namespace std;

int main() {
    string nombre;
    cout << "Hola, dime tu nombre" << endl;
    cin >> nombre;
    
    if ( (nombre.length() == 1) || (nombre.length() == 0) ){
        cout << "err: bad name"<<endl;
        exit(0);
    }else{

        cout << "Hola, " << nombre << endl;
    }
    return 0;
}
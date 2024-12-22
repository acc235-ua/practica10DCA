#include <iostream>
#include <string>   
#include <ctime>
using namespace std;

int main() {
    string nombre;
    int num;
    int aleatorio = 0;
    string continua = "si"; 

    srand(time(0));
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
    while( continua == "si"){
        cout<<"Pensaré un número del 1 al 20 ,intenta adivinarlo"<< nombre << endl <<" Número: ";
        cin >> num;

        if ( num == aleatorio){

            cout<< "Enhorabuena !! has ganado "<< endl;
            continua = "no";
        }else{
            cout <<" Mala suerte, estaba pensando en" <<aleatorio << endl;
            do{
                cout << "¿ Volverlo a intentar ? (si/no)" << endl;
                cin >> continua ;
            }while( (continua != "si") || (continua != "no" ));

            
        }
    }

    cout <<" Adiós "<<nombre<<endl; 
    return 0;
}

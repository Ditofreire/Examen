#include <iostream>
using namespace std;

class Registrodetemperaturas{
    private:
    double * lecturas;
    int capacidad;
    int cantidad;

    public:

    Registrodetemperaturas(int cap): capacidad(cap){
        lecturas= new double [cap];
        for (int i=0; i<cap;i++){
            lecturas[i]=cantidad;
        }

    }
    ~Registrodetemperaturas(){
        delete [] lecturas;
        lecturas=nullptr;
    }

    void agregar (double temp){
        if ( lecturas[capacidad]>capacidad){
             cout<<"Registro lleno"<<endl;
        } else if ( temp>-50.0 && temp<60.0){
            lecturas[capacidad]=temp;
        } else {
            cout<<"Temperatura invalida "<<endl;
        }
    }

    double promedio(){
        for(int i=0; i<(lecturas[capacidad]); i++){

        }
    }

};
int main (){
    
}
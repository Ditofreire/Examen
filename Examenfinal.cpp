#include <iostream>
#include <string>
using namespace std;

class Publicacion {
    protected:
    const string titulo;
    const string autor;
    int anio;
    public:
    Publicacion(string t, string a, int an) : titulo(t), autor(a), anio(an){}
    virtual int diasPrestamo() const = 0;
    virtual void imprimir() const {
        cout<< anio<<" "<<titulo<<" "<<autor<<endl;
    }
     string getTitulo() const{return titulo;};
    virtual ~Publicacion() {}

};

class libro : public Publicacion{
    private:
    int paginas;
    public:
    libro(string t, string a,int an, int pg) : Publicacion(t,a,an), paginas(pg){}
       int diasPrestamo() const override{
        if(paginas<=300){
            return 14;
        }else{
            return 21;
        }
       }
       void imprimir() const override
};
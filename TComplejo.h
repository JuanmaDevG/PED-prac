//Juan Manuel Gonzalez Martinez
#include <iostream>

//Duda: ¿podemos asignar parametros por defecto? (Si los asigno seria en el fichero de declaracion)

class TComplejo 
{
    friend std::ostream& operator<<(std::ostream& os, const TComplejo& );

    //Para poder poner un double delante al operar con un complejo
    friend TComplejo operator+(const double&, const TComplejo&);
    friend TComplejo operator-(const double&, const TComplejo&);
    friend TComplejo operator*(const double&, const TComplejo&);

public:
    //Construccion / destruccion
    TComplejo();
    TComplejo(const double& real);
    TComplejo(const double& real, const double& img);
    TComplejo(const TComplejo& complejo);
    ~TComplejo();

    //Sobrecarga de operadores
    //En '=' se devuelve ref porque apunta al mismo objeto que es modificado en la funcion operador
    TComplejo& operator=(const TComplejo&);
    TComplejo operator+(const TComplejo&) const;
    TComplejo operator-(const TComplejo&) const;
    TComplejo operator*(const TComplejo&) const;
    TComplejo operator+(const double&) const;
    TComplejo operator-(const double&) const;
    TComplejo operator*(const double&) const;
    bool operator==(const TComplejo&) const;
    bool operator!=(const TComplejo&) const;
    
    //Getters / setters
    double Re() const;
    double Im() const;
    
    void Re(const double& real);
    void Im(const double& img);

    double Arg(); //Calcula el argumento (en radianes)
    double Mod(); //Calcula el modulo
private:
    double re;
    double im;
};
//Juan Manuel Gonzalez Martinez
//No hay funciones inline, todas requieren de llamada a puntero de funcion
#include "TComplejo.h"


TComplejo::TComplejo() : re(.0), im(.0) { }

TComplejo::TComplejo(const double& real) : re(real), im(.0) { }

TComplejo::TComplejo(const double& real, const double& img) : re(real), im(img) { }

TComplejo::TComplejo(const TComplejo& comp) : re(comp.Re()), im(comp.Im()) { }

TComplejo::~TComplejo() { re = .0; im = .0; }


TComplejo& TComplejo::operator=(const TComplejo& comp)
{
    this->re = comp.Re();
    this->im = comp.Im();
    return *this;
}



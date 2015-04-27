#include "cubeta.h"

/* Sobrecarga con el constructor */
Cubeta::Cubeta ():capacidad (5000), nivel (0)
{
}

Cubeta::Cubeta (double nivel):
capacidad (5000),
nivel (nivel)
{
}

Cubeta::Cubeta (double capacidad, double nivel):
capacidad (capacidad),
nivel (nivel)
{
}

double
Cubeta::get_nivel ()
{
  return this->nivel;
}

double
Cubeta::cargar (double cantidad)
{
  double excedente = 0;

  this->nivel += cantidad;
  if (this->nivel > this->capacidad)
    {
      excedente = this->nivel - this->capacidad;
      this->nivel = this->capacidad;
    }

  return excedente;

}

double
Cubeta::extraer (double cantidad)
{
  if (cantidad > this->nivel)
    cantidad = this->nivel;

  this->nivel -= cantidad;

  return cantidad;
}

#ifndef  TEMAPOO2_MATRICE_H

#define TEMAPOO2_MATRICE_H


#include "Complex.h"
class Matrice
{
protected:
    Complex **v;
    int lin, col;

public:
    explicit Matrice(int col = 1, int lin = 1, Complex nr = Complex(0, 0));

    Matrice(const Matrice& mat);

    virtual ~Matrice();

    friend std::ostream& operator <<(std::ostream&, const Matrice&);

    friend std::istream& operator >>(std::istream&, Matrice&);

    Matrice& operator =(Matrice&);

    virtual int verifica_triunghiulara()=0;

    virtual void verifica_diagonala()=0;

    friend void swap(Matrice&, Matrice&);

    int get_lin();
    int get_col();
    Complex** get_mat();

    

};

#endif // ! TEMAPOO2_MATRICE_H
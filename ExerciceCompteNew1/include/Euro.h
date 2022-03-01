#ifndef EURO_H
#define EURO_H
#include "Devise.h"

class Euro:public Devise
{
    private:

    public:
     Euro(double Valeur);
     virtual ~Euro();

};

#endif // EURO_H

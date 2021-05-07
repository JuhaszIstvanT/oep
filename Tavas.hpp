#ifndef TAVAS_HPP_INCLUDED
#define TAVAS_HPP_INCLUDED

#include "Fold.h"

class Tavas : public Fold {
public:
    Tavas(std::string &tulaj, int viz, char fajta = 't') : Fold(tulaj, viz, fajta) {}
    void valtozik(double &_para) override;
};

#endif // TAVAS_HPP_INCLUDED

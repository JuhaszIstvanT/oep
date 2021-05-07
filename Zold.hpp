#ifndef ZOLD_HPP_INCLUDED
#define ZOLD_HPP_INCLUDED

#include "Fold.h"

class Zold : public Fold {
public:
    Zold(std::string &tulaj, int viz, char fajta = 'z') : Fold(tulaj, viz, fajta) {}
    void valtozik(double &_para) override;
};

#endif // ZOLD_HPP_INCLUDED

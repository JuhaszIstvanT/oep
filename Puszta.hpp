#ifndef PUSZTA_HPP_INCLUDED
#define PUSZTA_HPP_INCLUDED

#include "Fold.h"

class Puszta : public Fold {
public:
    Puszta(std::string &tulaj, int viz, char fajta = 'p') : Fold(tulaj, viz, fajta) {}
    void valtozik(double &_para) override;
};

#endif // PUSZTA_HPP_INCLUDED

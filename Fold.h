#ifndef FOLD_H_INCLUDED
#define FOLD_H_INCLUDED

#include <string>

class Fold {
protected:
    std::string _tulaj;
    int _viz;
    char _fajta;
public:
    double _para;
    Fold(std::string &tulaj, int viz, char fajta) : _tulaj(tulaj), _viz(viz), _fajta(fajta) {}
    //virtual ~Fold();
    std::string tulaj() {return _tulaj;}
    int viz() {return _viz;};
    char fajta() {return _fajta;}
    virtual void valtozik(double &_para) = 0;
};

#endif // FOLD_H_INCLUDED

#include "Zold.hpp"

void Zold::valtozik(double &_para) {
    if (_para < 40) {
        _viz -= 6;
    } else if (_para > 70) {
        _viz += 10;
        _para = 30;
    } else {
        int rnd = rand() % 101;
        double esely = (_para-40)*3.3;
        if (rnd < esely) {
            _viz += 10;
        } else {
            _viz += 2;
        }
    }
    _para *= 1.07;
    if (_viz > 50)
        _fajta = 't';
    else if (_viz < 16)
        _fajta = 'p';
}

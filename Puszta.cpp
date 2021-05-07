#include "Puszta.hpp"

void Puszta::valtozik(double &_para) {
    if (_para < 40) {
        _viz -= 3;
    }
    else if (_para > 70) {
        _viz += 5;
        _para = 30;
    } else {;
        int rnd = rand() % 101;
        double esely = (_para-40)*3.3;
        if (rnd < esely) {
            _viz += 5;
        } else {
            _viz += 1;
        }
    }
    _para *= 1.03;
    if (_viz > 15) {
        _fajta = 'z';
    }
}

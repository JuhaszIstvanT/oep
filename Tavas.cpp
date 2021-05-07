#include "Tavas.hpp"

void Tavas::valtozik(double &_para) {
    if (_para < 40) {
        _viz -= 10;
    } else if (_para > 70) {
        _viz += 15;
        _para = 30;
    } else {
        int rnd = rand() % 101;
        double esely = (_para-40)*3.3;
        if (rnd < esely) {
            _viz += 15;
        } else {
            _viz -= 3;
        }
    }
    _para *= 1.1;
    if (_viz < 51)
        _fajta = 'z';
}

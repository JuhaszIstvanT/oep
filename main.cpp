#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include "Puszta.hpp"
#include "Tavas.hpp"
#include "Zold.hpp"

using namespace std;

void create(const string &filename, vector<Fold*> &foldek, double &para, int &n) {
    ifstream f(filename);
    if (f.fail()) {
        cout << "Wrong file name!\n";
        exit(1);
    }
    f >> n;
    foldek.resize(n);
    for (int i = 0; i < n; ++i) {
        string tulaj;
        char fajta;
        int viz;
        f >> tulaj >> fajta >> viz;
        if (viz >= 0) {
            switch(fajta) {
                case 'p' : foldek[i] = new Puszta(tulaj, viz); break;
                case 'z' : foldek[i] = new Zold(tulaj, viz); break;
                case 't' : foldek[i] = new Tavas(tulaj, viz); break;
            }
        }
    }
    f >> para;
}

int main()
{
    srand(time(NULL));
    string filename;
    cout << "Adja meg a fajl nevet!: ";
    cin >> filename;
    vector<Fold*> foldek;
    double para;
    int n;
    create(filename, foldek, para, n);
    for (int i = 0; i < 10; ++i) {
        for (int i = 0; i < n; ++i) {
            cout << foldek[i]->tulaj() << " " << foldek[i]->fajta() << " " << foldek[i]->viz() << endl;
            foldek[i]->valtozik(para);
        }
        cout << para << endl;
    }

    int maxi = foldek[0]->viz();
    string maxTulaj = foldek[0]->tulaj();
    for (int i = 1; i < n; ++i) {
        if (foldek[i]->viz() > maxi) {
            maxi = foldek[i]->viz();
            maxTulaj = foldek[i]->tulaj();
        }
    }

    cout << "A legvizesebb foldterulet tulajdonosa " << maxTulaj << endl;

    return 0;
}











































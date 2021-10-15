#include <iostream>

using namespace std;

string osszefuzes(string szovegek[], int darab) {
    string ujszoveg = "";

    for(int i = 0; i < darab; i++){
        ujszoveg = ujszoveg + szovegek[i];
    }
    return ujszoveg;
}

/*
#include <iostream>

using namespace std;

string osszefuzes(string szovegek[], int darab) {
    string res;
    for (int i = 0; i < darab; i++) {
        res += szovegek[i];
    }
    return res;
}
 */

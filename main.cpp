#include "monstre.cpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Monstre monstre1, monstre2;
    monstre1.affiche();
    monstre2.affiche();

    monstre1.attaque(monstre2);
    
    monstre1.affiche();
    monstre2.affiche();
}
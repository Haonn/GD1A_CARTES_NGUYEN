#include "monstre.h"
#include <string>
#include <iostream>
using namespace std;

string Monstre::getNom(){
    return _nom;
}
int Monstre::getPv(){
    return _pv;
}
int Monstre::getScoreAttaque(){
    return _scoreAttaque;
}
bool Monstre::getEtat(){
    return _epuise;
}
void Monstre::attaque(Monstre &cible){
    cible.perdVie(_scoreAttaque);
    int degat = cible.getScoreAttaque();
    _pv -= degat; 
    _epuise = true;
}
void Monstre::perdVie(int degat){
    _pv -= degat;
}
void Monstre::affiche(){
    cout << _nom << " " << _pv << " " << _scoreAttaque << endl;
}
Monstre::Monstre(){
    _pv = 15;
    _scoreAttaque = 7;
    _nom = "monstre générique";
    _epuise = false; 
}
Monstre::Monstre(int atk, int pv, std::string nom) : _pv(pv), _scoreAttaque(atk), _nom(nom), _epuise(false){}



#include <string>

class Monstre{
    private :
    int _pv;
    int _scoreAttaque;
    std::string _nom;
    bool _epuise;

    public : 
    std::string getNom();
    int getPv();
    int getScoreAttaque();
    bool getEtat();
    void attaque(Monstre &cible);
    void perdVie(int degat);
    void affiche();
    Monstre();
    Monstre(int atk, int pv, std::string nom);
};
#include "monstre.h"
#include <string>
#include <vector>
class Mage{
    private : 
    int _vie;
    std::string _nom;
    std::vector<Monstre> _invMonstres;
    

    public :
    std::string getNom();
    int getVie(); 
    std::vector<Monstre> getInvMonstre();
    void nouvMonstre();
    void attaqueMonstre(Mage &mageAdverse);
};
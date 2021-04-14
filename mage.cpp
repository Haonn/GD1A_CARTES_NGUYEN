#include "mage.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int Mage::getVie(){
    return _vie;
}

vector<Monstre> getInvMonstre(){
    return _invMonstres;
}

void nouvMonstre(){


}

void attaqueMonstre(Mage &mageAdverse){
    int choixMonstreAJouer;
    cout<<"Avec quel monstre souhaitez-vous attaquer ?"<<endl;
    for (int i=0; i<=_invMonstres.size();i++){
        cout<< i << " " << _invMonstres[i].affiche<<endl; 
    }
    cin >> choixMonstreAJouer;
    int choixMonstreAAttaquer;
    cout<<"Quel monstre adverse souhaitez-vous attaquer ?"<<endl;
    vector<Monstre> invMonstresAdverse() = mageAdverse.getInvMonstre();
    for (int i=0; i<=invMonstresAdverse.size();i++){
        cout<< i << " " << invMonstresAdverse[i].affiche<<endl; 
    }
    cin >> choixMonstreAAttaquer;

    _invMonstre[choixMonstreAJouer].attaque(invMonstresAdverses[choixMonstreAAttaquer]);
    
}
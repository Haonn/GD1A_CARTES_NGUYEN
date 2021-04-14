#include "mage.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int Mage::getVie(){
    return _vie;
}

vector<Monstre> Mage::getInvMonstre(){
    return _invMonstres;
}

void nouvMonstre(){


}

void Mage::attaqueMonstre(Mage &mageAdverse){
    int choixMonstreAJouer;
    cout<<"Avec quel monstre souhaitez-vous attaquer ?"<<endl;
    for (int i=0; i<=_invMonstres.size();i++){
        cout<< i << " " << _invMonstres[i].affiche()<<endl; 
    }
    cin >> choixMonstreAJouer;
    int choixMonstreAAttaquer;
    cout<<"Quel monstre adverse souhaitez-vous attaquer ?"<<endl;
    vector<Monstre> invMonstresAdverse() = mageAdverse.getInvMonstre();
    for (int i=0; i<=invMonstresAdverse.size();i++){
        cout<< i << " " << invMonstresAdverse[i].affiche<<endl; 
    }
    cin >> choixMonstreAAttaquer;

    _invMonstres[choixMonstreAJouer].attaque(invMonstresAdverses[choixMonstreAAttaquer]);   
}

void Mage::nouvMonstre(){
    int pvNouvMonstre;
    int numeroMonstre = (_invMonstres.size() + 1);
    string nomNouvMonstre;
    int scoreAttaqueNouvMonstre;
    cout<<"Comment voulez-vous appeler le nouveau monstre? "<<endl;
    cin >> nomNouvMonstre;
    cout <<"Quelle sera la vie du nouveau monstre ?"<<endl;
    cin >> pvNouvMonstre; 
    cout <<"Quel est le score d'attaque du nouveau monstre ?"<< endl;
    cin >> scoreAttaqueNouvMonstre;
    _invMonstres[_invMonstres.size() +1] = Monstre monstre1(scoreAttaqueNouvMonstre, pvNouvMonstre, nomNouvMonstre);
}
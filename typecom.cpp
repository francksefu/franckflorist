#include <iostream>
using namespace std;

//la surcharge est present ici
class TypeCommand{

public:

    void heureDeLivraison(){
        cout << "vous devez livrer toutes vos commandes entre 14h et 18h"<<endl;
    }

};
class Funeraire:public TypeCommand{
private:
    //permettre au gestionnaire d attribuer les nmbre de commande funeraire a faire une fois pour toute

    int nbreFuneraire;

public:

    int getNbreFuneraire(){
        return nbreFuneraire;
    }

    //ici le gestionnaire donne le nombre des funeraire a livrer
    void setFuneraire_A_Livr(int nbrFuner){
        nbreFuneraire=nbrFuner;
    }

};
class Entreprise: public TypeCommand{
private:
    int nbreEntreprise;

public:
    // cet accesseur permettra au chauffeur de voir combien des livraison il lui reste
    int getNbreEntreprise(){
        return nbreEntreprise;
    }

    void setNbrEntreprise(int nbreEntrep){
        nbreEntreprise=nbreEntrep;
    }

};
class Simple:public TypeCommand{
private:
    int nbreCommandSimple;


public:
    // accesseur pour le chauffeur et l administrateur
    int getNbreCommandSimple(){
        return nbreCommandSimple;
    }

    //accessuer gestionnaire
    void setNbreCommandSimple(int commandSimpl){
        nbreCommandSimple=commandSimpl;
    }

    void type(){
        cout<<"ceci est une commande simple"<<endl;
    }
};

//Dans le programme principale penser a utiliser le swich pour le gestionnaire et la chauffeur .merci


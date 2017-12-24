#include <iostream>
#include <algorithm>
#include <iterator>
#include "ChiffrementSubst.h"

using namespace std;

int main()
{
    // Le message a crypter
    string texte("BIENVENUE SUR LE MOOC C++ D'OCR !!");

    // Demande de la cle a l'utilisateur
    cout << "Quel fichier contenant la cle voulez-vous utiliser ? ";
    string nomFichier;
    cin >> nomFichier;

    // Creation du foncteur
    ChiffrementSubst foncteur(nomFichier);
    foncteur.lireCle();

    // Chaine de caracteres pour le message crypte
    string texte_crypte = texte;
    for_each(texte_crypte.begin(), texte_crypte.end(), foncteur);

    // Affichage
    cout << endl << "Message : " << texte << endl;
    cout << "Message crypte : ";
    copy(texte_crypte.begin(), texte_crypte.end(), ostream_iterator<char>(cout, ","));

    return 0;
}

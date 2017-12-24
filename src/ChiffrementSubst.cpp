#include "ChiffrementSubst.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>

using namespace std;

ChiffrementSubst::ChiffrementSubst(const string& nomFichier)
{
    ifstream fichier(nomFichier.c_str());

    string ligne;
    while (getline(fichier, ligne))
    {
        m_mapCle[ligne[0]] = ligne[2];
    }
}

void ChiffrementSubst::lireCle()
{
    cout << endl << "Cle de chiffrement par substitution : " << endl;
    for (map<char, char>::iterator it=m_mapCle.begin(); it!=m_mapCle.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
}

void ChiffrementSubst::operator()(char& caractere)
{
    if (isalpha(caractere) && isupper(caractere))
    {
        caractere = m_mapCle[caractere];
    }
}

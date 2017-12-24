#ifndef CHIFFREMENTSUBST_H
#define CHIFFREMENTSUBST_H

#include <string>
#include <map>

class ChiffrementSubst
{
    public:
        ChiffrementSubst(const std::string& nomFichier);
        void lireCle();
        void operator()(char& caractere);

    protected:

    private:
        std::map<char, char> m_mapCle;
};

#endif // CHIFFREMENTSUBST_H

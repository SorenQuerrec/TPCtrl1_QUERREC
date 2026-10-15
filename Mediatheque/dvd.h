/**
 * @file DVD.h
 * @author Soren QUERREC <soren.querrec.ecole@gmail.com>
 * @date 2026-10-15
 * @version 1.0
 * @brief Déclaration de la classe DVD.
 *
 * @details Ce fichier sert a afficher les DVDs enregistrés.
 */

#ifndef DVD_H
#define DVD_H
#include <string>
#include "media.h"

using namespace std;

class DVD : public Media
{
public:
    DVD(const int _identifiant, const string &_titre, const string &_auteur, const int _annee,const int _duree);
    virtual void Afficher();
private:
    int duree;

};

#endif // DVD_H

/**
 * @file Livre.h
 * @author Soren QUERREC <soren.querrec.ecole@gmail.com>
 * @date 2026-10-15
 * @version 1.0
 * @brief Déclaration de la classe Livre.
 *
 * @details Ce fichier sert a afficher les Livres enregistrés.
 */

#ifndef LIVRE_H
#define LIVRE_H
#include <string>
#include "media.h"



class Livre : public Media
{
public:
    Livre(const int _identifiant, const string &_titre, const string &_auteur, const int _annee,const int _nombreDePages);
    virtual void Afficher();
private:
    int nombreDePages;
};

#endif // LIVRE_H

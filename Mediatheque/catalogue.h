/**
 * @file Catalogue.h
 * @author Soren QUERREC <soren.querrec.ecole@gmail.com>
 * @date 2026-10-15
 * @version 1.0
 * @brief Déclaration de la classe Catalogue.
 *
 * @details Ce fichier permet de consulter la liste des différents média enregistrés.
 */

#ifndef CATALOGUE_H
#define CATALOGUE_H
#include <iostream>
#include <iomanip>

#include "media.h"

class Catalogue
{
private:
    Media lesMedias;
    int nbMedia;
    int index;

public:
    Catalogue(const Media &_lesMedias, int _nbMedia, int _index);
    ~Catalogue();
    void AjouterMedia(const Media * _ptrMedia);
    void Consulter(const int _typeAffichage);


};

#endif // CATALOGUE_H

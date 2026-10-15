/**
 * @file Media.h
 * @author Soren QUERREC <soren.querrec.ecole@gmail.com>
 * @date 2026-10-15
 * @version 1.0
 * @brief Déclaration de la classe Media.
 *
 * @details Ce fichier donne les méthodes et attributs au classes qui en héritent pour afficher les éléements enregistrés.
 */

#ifndef MEDIA_H
#define MEDIA_H
#include <string>
#include <iostream>
#include <iomanip>


using namespace std;

class Media
{
public:
    Media(const int _identifiant, const string &_titre, const string &_auteur, const int _annee);

    virtual void Afficher();
protected:
    int identifiant;
    string titre;
    string auteur;
    int annee;
};

#endif // MEDIA_H

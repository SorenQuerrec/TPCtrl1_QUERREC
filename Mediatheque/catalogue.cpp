/**
 * @file Catalogue.cpp
 * @author Soren QUERREC <soren.querrec.ecole@gmail.com>
 * @date 2026-10-15
 * @version 1.0
 * @brief Implémentation de la classe Catalogue.
 *
 * @details Contient le corps de toutes les méthodes déclarées dans le ".h".
 */

#include "catalogue.h"

Catalogue::Catalogue(int _nbMedias)
    : nbMedias(_nbMedias)
{
    lesMedias = new Media *[nbMedias];
    index = 0;
}

Catalogue::~Catalogue()
{
    delete [] lesMedias;
}

bool Catalogue::AjouterMedia(Media *ptrMedia)
{
    bool retour = true;
    if (index < nbMedias)
        lesMedias[index++] = ptrMedia ;
    else
        retour = false;
    return retour;
}

void Catalogue::Consulter(const int _typeAffichage)
{
    // for(int indice = 0; indice < index; ++indice)
    // {
    //     if(dynamic_cast<const class DVD*>(lesMedias[indice]))
    //         lesMedias[indice]->Afficher();
    // }

    for(int indice = 0; indice < index; ++indice)
    {
        // if(_typeAffichage == 1) // utilisation d'un switch case envisagée
        //     lesMedias[indice]->Afficher();
        // if(dynamic_cast<const class DVD*>(lesMedias[indice]) && _typeAffichage == 2)
        //     lesMedias[indice]->Afficher();
        // if(dynamic_cast<const class Livre*>(lesMedias[indice]) && _typeAffichage == 3)
        //     lesMedias[indice]->Afficher();
    }
}

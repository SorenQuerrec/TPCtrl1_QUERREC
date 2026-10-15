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

Catalogue::Catalogue(const Media &_lesMedias, int _nbMedia, int _index) : lesMedias(_lesMedias),
    nbMedia(_nbMedia),
    index(_index)
{

}

Catalogue::~Catalogue()
{

}

void Catalogue::AjouterMedia(const Media *_ptrMedia)
{

}

void Catalogue::Consulter(const int _typeAffichage)
{

}

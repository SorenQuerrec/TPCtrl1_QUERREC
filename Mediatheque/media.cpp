/**
 * @file Media.cpp
 * @author Soren QUERREC <soren.querrec.ecole@gmail.com>
 * @date 2026-10-15
 * @version 1.0
 * @brief Implémentation de la classe Media.
 *
 * @details Contient le corps de toutes les méthodes déclarées dans le ".h".
 */
#include "media.h"

Media::Media(const int _identifiant, const string &_titre, const string &_auteur, const int _annee) : identifiant(_identifiant),
    titre(_titre),
    auteur(_auteur),
    annee(_annee)
{

}

void Media::Afficher()
{

}

/**
 * @file DVD.cpp
 * @author Soren QUERREC <soren.querrec.ecole@gmail.com>
 * @date 2026-10-15
 * @version 1.0
 * @brief Implémentation de la classe DVD.
 *
 * @details Contient le corps de toutes les méthodes déclarées dans le ".h".
 */
#include "dvd.h"

DVD::DVD(int _identifiant, const string &_titre, const string &_auteur, int _annee,int _duree)
    : Media(_identifiant, _titre, _auteur, _annee),
    duree(_duree)
{

}

void DVD::Afficher()
{
    cout << setfill(' ');
    cout << "| " << identifiant << setw(7) << "| " << titre << setw(37) << "| " << auteur << setw(26) << "| " << annee << setw(8) << "| " << duree << "min" << setw(13) << "|" << endl;
}


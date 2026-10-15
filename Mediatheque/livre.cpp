/**
 * @file Livre.cpp
 * @author Soren QUERREC <soren.querrec.ecole@gmail.com>
 * @date 2026-10-15
 * @version 1.0
 * @brief Implémentation de la classe Livre.
 *
 * @details Contient le corps de toutes les méthodes déclarées dans le ".h".
 */

#include "livre.h"

using namespace std;

Livre::Livre(int _identifiant, const string &_titre, const string &_auteur, int _annee,int _nombreDePages)
    : Media(_identifiant, _titre, _auteur, _annee),
    nombreDePages(_nombreDePages)
{

}

void Livre::Afficher()
{
    cout << setfill(' ');
    cout << "| " << identifiant << setw(7) << "| " << titre << setw(37) << "| " << auteur << setw(26) << "| " << annee << setw(8) << "| " << nombreDePages << " Pages" << setw(13) << "|" << endl;
}


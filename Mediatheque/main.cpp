/**
 * @file Main.cpp
 * @author Soren QUERREC <soren.querrec.ecole@gmail.com>
 * @date 2026-10-15
 * @version 1.0
 * @brief Le Main du programme.
 *
 * @details Permet l'execution des différentes méthodes du programme.
 */

#include "media.h"
#include "livre.h"
#include "dvd.h"

using namespace std;

int main() // QUESTION 7 et 9
{

    Livre livre1(1000,"Prince","soren",1967,6767);
    livre1.Afficher();
    DVD dvd1(1000,"Prince","soren",1967,6767);
    dvd1.Afficher();
    return 0;
}

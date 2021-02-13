/**
 * \file fonctionsUtilitaires.h
 * \brief  déclarations des fonctions utilitaires
 * \author THE
 * \version 0.1
 */

#ifndef FONCTIONSUTILITAIRES_H_
#define FONCTIONSUTILITAIRES_H_

#include <string>

static const std::string ENSEIGNE[4] = {"Coeur", "Carreau", "Trèfle", "Pique"};
static const std::string FACE[13] = {"As", "Deux", "Trois", "Quatre", "cinq", "Six", "Sept", "Huit", "Neuf", "Dix",  "Valet", "Dame", "Roi"};
static const int LIGNES_JEU = 4;
static const int COLONNES_JEU = 13;
static const int TAILLE_MAIN = 5;
void battre (int p_jeu[][13]);
void afficheJeu (int p_jeu[][13]);
void distribue (const int p_jeu[][13], int p_poignee[][2]);
bool paires (const int p_poignee[][2]);
bool brelans (const int p_poignee[][2]);
bool carres (const int p_poignee[][2]);
bool couleurs (const int p_poignee[][2]);
bool suites (const int p_poignee[][2]);

#endif /* FONCTIONSUTILITAIRES_H_ */

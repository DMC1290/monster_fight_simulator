// monster_fight_simulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Etapes:


// 1 Interface:
// Expliquer le principe du jeu.
// Quelques lignes de texte un minimum recherch�es (petite histoire) (possible de skip).
// Expliquer au joueur le principe du jeu.
// Demander au joueur de choisir classe.
// Resultat du combat.


// 2 regles/deroulement du jeu:
// Les monstres doivent se battre en attaquant chacun leurs tour jusqu'a ce que l'un des deux meurt


// 3 Classes de Monstres :
// Dragon(Ragnir), F�e(Fey), Nuage(Zeus).


// 4 Stats des Classes:
// Health Point, Attack, Defense, Speed


#include <iostream>

#include "monster.h"

int main()
{
	do
	{

		dragon.GetDamage(5);



	} while (dragon.get_hp() > 0);

		std::cout << "Welcome to Monster Fight Simulator." << '\n';
		// ad text (history)

	std::cout << "There is 3 Monsters in this game";
		std::cout << "Chose two races to make them fight each other." << '\n';
		// 



		std::cout << " (Class) WIN ! " << '\n';

} 

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

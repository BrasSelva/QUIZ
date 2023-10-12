#include <iostream>
#include "Quizz.h"


// Fonction Start

void Startup() {
	std::cout << " Launche the game " << std::endl;
}



void Game1() {
	int score = 0; // Score initial

	std::cout << "Bienvenue au Quizz de Culture Generale !" << std::endl;
	std::cout << "Repondez aux questions en choisissant la bonne option (1, 2 ou 3)." << std::endl;

	// Question 1
	std::cout << "\n Quel est le premier satellite envoyer dans l'espece " << std::endl;
	std::cout << "1. Spoutnik 1" << std::endl;
	std::cout << "2. Explorer 4" << std::endl;
	std::cout << "3. la-lune" << std::endl; // Bonne reponse
	int reponse1;
	std::cin >> reponse1;
	if (reponse1 == 1) {
		std::cout << " Bonne reponse ! " << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est Spoutnik 1." << std::endl;
	}

	// Question 2
	std::cout << "\n Question 2: Quelle est la capital de l'australie ?" << std::endl;
	std::cout << "1. Dublin " << std::endl; // Bonne reponse
	std::cout << "2. Canberra " << std::endl;
	std::cout << "3. Sydney" << std::endl;
	int reponse2;
	std::cin >> reponse2;
	if (reponse2 == 2) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est Canberra ." << std::endl;
	}
	// Question 3
	std::cout << "\n Question 3: Le jeu de combat le plus vendu au monde est fait par : " << std::endl;
	std::cout << "1. Nintendo (developpeur de 'Mario')  " << std::endl; // Bonne reponse
	std::cout << "2. Activision (developpeur de 'Call of Duty') " << std::endl;
	std::cout << "3. EA(un des plus gros developpeurs de jeu au monde)" << std::endl;
	int reponse3;
	std::cin >> reponse3;
	if (reponse3 == 1) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est Nintendo ." << std::endl;
	}
	// Question 4
	std::cout << "\n Question 4: Quel acte de la vie courante occupe environ 6 mois de notre vie ? ?" << std::endl;
	std::cout << "1. Attendre au feu rouge  " << std::endl; // Bonne reponse
	std::cout << "2. Passer le balai " << std::endl;
	std::cout << "3. Regarder la television" << std::endl;
	int reponse4;
	std::cin >> reponse4;
	if (reponse4 == 1) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est Attendre au feu rouge ." << std::endl;
	}

	// Question 5
	std::cout << "\nQuestion 5: Quel materiau est le plus dense entre 1 kilogramme de beton et 1 kilogramme de plumes ?" << std::endl;
	std::cout << "1. plumes  " << std::endl;
	std::cout << "2. les deux" << std::endl; // Bonne reponse
	std::cout << "3. beton" << std::endl;
	int reponse5;
	std::cin >> reponse5;
	if (reponse5 == 2) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est les deux." << std::endl;
	}

	std::cout << "\nVotre score final est : " << score << " sur 5." << std::endl;

}

void Game2() {
	int score = 0; // Score initial

	std::cout << "Bienvenue au Quizz sur le langage C !" << std::endl;
	std::cout << "Repondez aux questions en choisissant la bonne option (1, 2 ou 3)." << std::endl;

	// Question 1
	std::cout << "\n Quelle est l'instruction en C pour afficher du texte a l'ecran? " << std::endl;
	std::cout << "1. print(''Hello, World!'');" << std::endl;
	std::cout << "2. echo ''Hello, World!'';" << std::endl;
	std::cout << "3. printf(''Hello, World!'');" << std::endl; // Bonne reponse
	int reponse1;
	std::cin >> reponse1;
	if (reponse1 == 3) {
		std::cout << " Bonne reponse ! " << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est printf(''Hello, World!'');." << std::endl;
	}

	// Question 2
	std::cout << "\n Question 2: Quelle est la declaration correcte d'une variable entière en C?" << std::endl;
	std::cout << "1. integer x;" << std::endl; // Bonne reponse
	std::cout << "2. int x; " << std::endl;
	std::cout << "3. x = int;" << std::endl;
	int reponse2;
	std::cin >> reponse2;
	if (reponse2 == 2) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est int x; ." << std::endl;
	}
	// Question 3
	std::cout << "\n Question 3: Quelle est la structure de contrôle utilisee pour executer un bloc de code " << std::endl;
	std::cout << "1. if  " << std::endl; // Bonne reponse
	std::cout << "2. while" << std::endl;
	std::cout << "3. for" << std::endl;
	int reponse3;
	std::cin >> reponse3;
	if (reponse3 == 1) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est if ." << std::endl;
	}
	// Question 4
	std::cout << "\n Question 4: Quelle est la boucle la plus couramment utilisee pour repeter une partie de code un nombre specifie de fois ?" << std::endl;
	std::cout << "1. if  " << std::endl; // Bonne reponse
	std::cout << "2. for " << std::endl;
	std::cout << "3. switch" << std::endl;
	int reponse4;
	std::cin >> reponse4;
	if (reponse4 == 2) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est for." << std::endl;
	}

	// Question 5
	std::cout << "\nQuestion 5: Quel operateur est utilise pour comparer l'egalite de deux valeurs en C ?" << std::endl;
	std::cout << "1. =  " << std::endl;
	std::cout << "2. ==" << std::endl; // Bonne reponse
	std::cout << "3. ===" << std::endl;
	int reponse5;
	std::cin >> reponse5;
	if (reponse5 == 2) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est ==." << std::endl;
	}

	std::cout << "\nVotre score final est : " << score << " sur 5." << std::endl;

}
void Game3() {

	int score = 0; // Score initial

	std::cout << "Bienvenue au Quizz sur le langage C !" << std::endl;
	std::cout << "Repondez aux questions en choisissant la bonne option (1, 2 ou 3)." << std::endl;

	// Question 1
	std::cout << "\n Quelle est l'instruction en C pour afficher du texte a l'ecran? " << std::endl;
	std::cout << "1. print(''Hello, World!'');" << std::endl;
	std::cout << "2. echo ''Hello, World!'';" << std::endl;
	std::cout << "3. printf(''Hello, World!'');" << std::endl; // Bonne reponse
	int reponse1;
	std::cin >> reponse1;
	if (reponse1 == 3) {
		std::cout << " Bonne reponse ! " << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est printf(''Hello, World!'');." << std::endl;
	}

	// Question 2
	std::cout << "\n Question 2: Quelle est la declaration correcte d'une variable entière en C?" << std::endl;
	std::cout << "1. integer x;" << std::endl; // Bonne reponse
	std::cout << "2. int x; " << std::endl;
	std::cout << "3. x = int;" << std::endl;
	int reponse2;
	std::cin >> reponse2;
	if (reponse2 == 2) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est int x; ." << std::endl;
	}
	// Question 3
	std::cout << "\n Question 3: Quelle est la structure de contrôle utilisee pour executer un bloc de code " << std::endl;
	std::cout << "1. if  " << std::endl; // Bonne reponse
	std::cout << "2. while" << std::endl;
	std::cout << "3. for" << std::endl;
	int reponse3;
	std::cin >> reponse3;
	if (reponse3 == 1) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est if ." << std::endl;
	}
	// Question 4
	std::cout << "\n Question 4: Quelle est la boucle la plus couramment utilisee pour repeter une partie de code un nombre specifie de fois ?" << std::endl;
	std::cout << "1. if  " << std::endl; // Bonne reponse
	std::cout << "2. for " << std::endl;
	std::cout << "3. switch" << std::endl;
	int reponse4;
	std::cin >> reponse4;
	if (reponse4 == 2) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est for." << std::endl;
	}

	// Question 5
	std::cout << "\nQuestion 5: Quel operateur est utilise pour comparer l'egalite de deux valeurs en C ?" << std::endl;
	std::cout << "1. =  " << std::endl;
	std::cout << "2. ==" << std::endl; // Bonne reponse
	std::cout << "3. ===" << std::endl;
	int reponse5;
	std::cin >> reponse5;
	if (reponse5 == 2) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est ==." << std::endl;
	}

	std::cout << "\nVotre score final est : " << score << " sur 5." << std::endl;

}
void Theme() {
	std::cout << "Choisissez un des themes qui sont presents ! \n" << std::endl;
	std::cout << "   [1] Culture general" << std::endl;
	std::cout << "   [2] Langage C " << std::endl;
	std::cout << "   [2] Jeux video \n" << std::endl;

	std::cout << "Choose an option: ";

	int MenuChoice;
	std::cin >> MenuChoice;

	// Appelle à la fonction 

	switch (MenuChoice)
	{
	case 1:
		Game1();
		break;

	case 2:
		Game2();
		break;

	default:
		Game3();
		break;
	}

}

// Fonction pour quitter le jeu
void ExitApp() {
	std::cout << "See you soon." << std::endl;
	exit(0);
}

// Fonction qui sert à guider le joueur

void MainMenu() {
	std::cout << "----- Main Menu -----" << std::endl;
	std::cout << "   [1] Start the game" << std::endl;
	std::cout << "           or " << std::endl;;
	std::cout << "   [2] Leave the game \n" << std::endl;
	std::cout << "Choose an option: ";

	int MenuChoice;
	std::cin >> MenuChoice;

	// Appelle à la fonction 

	switch (MenuChoice)
	{
	case 1:
		Theme();
		break;

	case 2:
		ExitApp();
		break;

	default:
		std::cout << "Good bye!" << std::endl;
		break;
	}

}








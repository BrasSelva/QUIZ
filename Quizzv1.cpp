#include <iostream>
#include "Quizz.h"


// Fonction Start

void Startup() {
	std::cout << " Launche the game " << std::endl;
}



//Theme 1, culture general

void Game1() {
	int score = 0; // Score initial

	std::cout << "Bienvenue au Quizz sur Culture Generale !" << std::endl;
	std::cout << "Repondez aux questions en choisissant la bonne option (1, 2 ou 3)." << std::endl;

	// Question 1
	std::cout << "\n  Quel est le premier satellite envoyé dans l'espace ? " << std::endl;
	std::cout << "1. Spoutnik 1." << std::endl;
	std::cout << "2. Explorer 4" << std::endl;
	std::cout << "3. La-Lune" << std::endl; // Bonne reponse
	int reponse1;
	std::cin >> reponse1;
	if (reponse1 == 1) {
		std::cout << " Bonne reponse ! " << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est Soutnik 1." << std::endl;
	}

	// Question 2
	std::cout << "\n Question 2: Quelle est la capital de l'australie ?" << std::endl;
	std::cout << "1. Dublin " << std::endl; // Bonne reponse
	std::cout << "2. Canberra  " << std::endl;
	std::cout << "3. Sydney " << std::endl;
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
	std::cout << "\n Question 3:Le jeu de combat le plus vendu au monde est fait par ? " << std::endl;
	std::cout << "1. Nintendo  " << std::endl; // Bonne reponse
	std::cout << "2. Activision " << std::endl;
	std::cout << "3. EA " << std::endl;
	int reponse3;
	std::cin >> reponse3;
	if (reponse3 == 1) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est Nentendo ." << std::endl;
	}
	// Question 4
	std::cout << "\n Question 4:Quel acte de la vie courante occupe environ 6 mois de notre vie ? " << std::endl;
	std::cout << "1. Regarder la television.  " << std::endl; // Bonne reponse
	std::cout << "2. Passer le balais. " << std::endl;
	std::cout << "3. Attendre au feux rouge. " << std::endl;
	int reponse4;
	std::cin >> reponse4;
	if (reponse4 == 3) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est Attendre au feux rouge." << std::endl;
	}

	// Question 5
	std::cout << "\nQuestion 5: Quel materiau est le plus dense entre 1 kilogramme de pierre et 1 kilogramme de plumes ?" << std::endl;
	std::cout << "1. Une pierre  " << std::endl;
	std::cout << "2. une plumes" << std::endl; // Bonne reponse
	std::cout << "3. C'est le meme poids" << std::endl;
	int reponse5;
	std::cin >> reponse5;
	if (reponse5 == 3) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est c'est le meme poids." << std::endl;
	}

	std::cout << "\nVotre score final est : " << score << " sur 5." << std::endl;
	Replay();
}

//Theme 2, langage C

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
	std::cout << "\n Question 3: Quelle est la structure de controle utilisee pour executer un bloc de code " << std::endl;
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
	Replay();
}



void Game3() {

	int score = 0; // Score initial

	std::cout << "Bienvenue au Quizz sur les jeux videos !" << std::endl;
	std::cout << "Repondez aux questions en choisissant la bonne option (1, 2 ou 3)." << std::endl;

	// Question 1
	std::cout << "\n Question 1: Lequel de ces personnages n'est pas issu de l'univers de Mario ? " << std::endl;

	std::cout << "1. Peach" << std::endl;
	std::cout << "2. Bowser" << std::endl;
	std::cout << "3. Tail;" << std::endl; // Bonne reponse
	int reponse1;
	std::cin >> reponse1;
	if (reponse1 == 3) {
		std::cout << " Bonne reponse ! " << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est Tails" << std::endl;
	}

	// Question 2
	std::cout << "\n Question 2: Quelle entreprise a cree la celèbre serie de jeux Pokemon?" << std::endl;
	std::cout << "1.  l'entreprise japonaise Game Freak" << std::endl; // Bonne reponse
	std::cout << "2. la societe  Game World Adventures." << std::endl;
	std::cout << "3. l'entreprise  Monstres de Poche Inc" << std::endl;
	int reponse2;
	std::cin >> reponse2;
	if (reponse2 == 1) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est l'entreprise japonaise Game Freak." << std::endl;
	}
	// Question 3
	std::cout << "\n Question 3: Quel jeu video populaire met en scène des animaux anthropomorphes vivant dans une ville et a ete developpe par Nintendo ? " << std::endl;
	std::cout << "1. Super Mario World  " << std::endl; // Bonne reponse
	std::cout << "2. Zelda's Animal Town" << std::endl;
	std::cout << "3. Animal Crossing" << std::endl;
	int reponse3;
	std::cin >> reponse3;
	if (reponse3 == 3) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est Animal Crossing ." << std::endl;
	}
	// Question 4
	std::cout << "\n Question 4: Quel jeu video permet aux joueurs de construire des mondes virtuels avec des blocs de differentes couleurs ?" << std::endl;
	std::cout << "1. Minecraft  " << std::endl; // Bonne reponse
	std::cout << "2. Fortnite " << std::endl;
	std::cout << "3. Grand Theft Auto V" << std::endl;
	int reponse4;
	std::cin >> reponse4;
	if (reponse4 == 1) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est Minecraft." << std::endl;
	}

	// Question 5
	std::cout << "\nQuestion 5: quel est le jeu de societe le plus ancien ?" << std::endl;
	std::cout << "1. Monopoly  " << std::endl;
	std::cout << "2. Jurassic Park" << std::endl; //Bonne reponse
	std::cout << "3. Senet" << std::endl;
	int reponse5;
	std::cin >> reponse5;
	if (reponse5 == 3) {
		std::cout << "Bonne reponse !" << std::endl;
		score++;
	}
	else {
		std::cout << "Mauvaise reponse. La bonne reponse est Senet" << std::endl;
	}

	std::cout << "\nVotre score final est : " << score << " sur 5." << std::endl;
	Replay();

}
void Theme() {
	std::cout << "Choisissez un des themes qui sont presents ! \n" << std::endl;
	std::cout << "   [1] Culture general" << std::endl;
	std::cout << "   [2] Langage C " << std::endl;
	std::cout << "   [3] Jeux video \n" << std::endl;

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

	case 3:
		Game3();
		break;

	default:
		std::cout << "Good bye!" << std::endl;
		break;
	}

}

// Declarez cette fonction au debut de votre code pour la rendre accessible aux autres fonctions.
void Replay() {
	char choix;

	printf("Do you want to replay ? (O/N) : ");
	fflush(stdin);
	scanf_s(" %c", &choix);

	if (choix == 'O' || choix == 'o') {
		// Si le joueur veut rejouer, appelez la fonction Game pour demarrer une nouvelle partie.
		Theme();
	}
	else if (choix == 'N' || choix == 'n') {
		printf("Thank for playing ! Good bye.\n");
		//ExitApp(); // Vous pouvez egalement ajouter un appel à la fonction ExitApp pour quitter l'application ici.
	}
	else {
		// Reponse non valide, redemandez.
		printf("Answer incorrect. Please answer by Y(yes) or N(no)\n");
		// Appel recursif pour redemander la reponse.
	}
}


// Fonction pour quitter le jeu
void ExitApp() {
	std::cout << "See you soon." << std::endl;
	Replay();
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

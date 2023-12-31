#include <iostream>
#include <string>
#include "Quiz.h"

using namespace std;

int Deviner;
int Totale;

class Question {
private:
	string Texte_Question;
	string Reponse_1;
	string Reponse_2;
	string Reponse_3;
	string Reponse_4;
	int Reponse_Correcte;
	int Score_Question;

public:
	void setValues(string, string, string, string, string, int, int);
	void askQuestion();

};

void Startup() {
	std::cout << " Lancer le jeu " << std::endl;
}
void Question::setValues(string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
	Texte_Question = q;
	Reponse_1 = a1;
	Reponse_2 = a2;
	Reponse_3 = a3;
	Reponse_4 = a4;
	Reponse_Correcte = ca;
	Score_Question = pa;

}

void Question::askQuestion() {
	cout << endl;
	std::cout << Texte_Question << std::endl;
	std::cout << "1. " << Reponse_1 << std::endl;
	std::cout << "2. " << Reponse_2 << std::endl;
	std::cout << "3. " << Reponse_3 << std::endl;
	std::cout << "4. " << Reponse_4 << std::endl;
	cout << endl;


	std::cout << "Reponse: " << std::endl;
	std::cin >> Deviner;

	if (Deviner == Reponse_Correcte)
	{
		cout << endl;
		std::cout << "Tres bien ! Vous avez raison." << std::endl;
		Totale += Score_Question;
		std::cout << "Score: " << Score_Question << " En dehors de " << Score_Question << " !" << std::endl;

	}
	else
	{
		cout << endl;
		std::cout << "Oh, NON. Vous avez tort." << std::endl;
		std::cout << "Vous gagnez 0 !" << " En dehors de " << Score_Question << " !" << std::endl;
		std::cout << "La bonne reponse est " << Reponse_Correcte << std::endl;
		cout << endl;
	}
}




// Fonction pour quitter le jeu
void ExitApp() {
	std::cout << "A la prochaine." << std::endl;
	Replay();
	exit(0);
}

void QuestionPose1() {

	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;


	q1.setValues("1.Quel est le premier satellite envoye dans l'espace ?", "Spoutnik 1", "Explorer 4", "la-lune", "La-Terre", 1, 10);

	q2.setValues("2.Quelle est la capital de l'australie ?", "Dublin", "Canberra", "Paris", "Sydney", 2, 10);

	q3.setValues("3.Qui a ecrit L'Odyssee", "Bart", "Emile Zola Right-left", "Homere", "Jean de la Fontaine", 3, 10);

	q4.setValues("4.Quel pays est celebre pour sa Grande Muraille ?", "France", "Maroc", "Chine", "Allemagne", 3, 10);

	q5.setValues("4.Qui a peint la Mona Lisa ?", "Vincent van Gogh", "Pablo Picasso", "Leonardo da Vinci", "Rembrandt", 3, 10);

	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();

	system("cls");

	std::cout << "Votre score Totale est de " << Totale << " points sur 150." << std::endl;

	if (Totale >= 30)
	{
		cout << "Bien joue tu as passe le quiz!" << endl;
		cout << "Felicitation" << endl;

	}        //end of the game
	else
	{
		std::cout << "Desole vous avez rate le quiz!" << std::endl;
	}

	std::cout << "Veut-tu rejoue (O/N) " << std::endl;
	string play_again;
	std::cout << "Ton choix: ";
	std::cin >> play_again;
	if (play_again == "O" || play_again == "o")
	{
		Theme();

	}
	else
	{
		std::cout << "OK. Au revoir." << std::endl;
	}
}

//Question 2 
void QuestionPose2() {

	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;


	q1.setValues("1. Quelle est l'instruction en C pour afficher du texte a l'ecran?", "print(''Hello, World!'');", "echo ''Hello, World!'';", "printf(''Hello, World!'');", "system.out.println(''Hello, World!'');", 3, 10);

	q2.setValues("2.Quelle est la declaration correcte d'une variable entière en C?", "integer x", "int x", "x = int", "float x", 2, 10);

	q3.setValues("3.Comment commentez-vous votre code en C?", "Utilisez // pour les commentaires en ligne, ou /* */", " le symbole '#'", "a syntaxe comment:", "la syntaxe '--'  ", 1, 10);

	q4.setValues("4.Quel operateur est utilise pour comparer l'egalite de deux valeurs en C ?", "=", "==", "===", " !=", 2, 10);

	q5.setValues("5.Quelle est la boucle la plus couramment utilisee pour repeter une partie de code un nombre specifie de fois ?", "if;", "swith;", "and;", "for", 4, 10);


	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	system("cls");

	cout << "Le total de ton score est de  " << Totale << " points sur 100." << endl;

	if (Totale >= 30)
	{
		cout << "Bien joue tu as passe le quiz!" << endl;
		cout << "Felicitation" << endl;



	}        //end of the game
	else
	{
		std::cout << "Desole vous avez rate le quiz!" << std::endl;
	}

	std::cout << "Veut-tu rejoue (O/N) " << std::endl;
	string play_again;
	std::cout << "Ton choix: ";
	std::cin >> play_again;
	if (play_again == "O" || play_again == "o")
	{
		Theme();

	}
	else
	{
		std::cout << "OK. Au revoir." << std::endl;
	}
}

void QuestionPose3() {


	Question q11;
	Question q12;
	Question q13;
	Question q14;
	Question q15;


	q11.setValues("11.Quelle entreprise a cree la celebre serie de jeux Pokemon?", "l'entreprise japonaise Game Freak", "la societe  Game World Adventures.", "l'entreprise  Monstres de Poche Inc", "Bandai Namco", 1, 10);
	q12.setValues("12.Quel jeu video populaire met en scene des animaux anthropomorphes vivant dans une ville et a ete developpe par Nintendo ?", "Super Mario World", "Zelda's Animal Town", "Animal Crossing", "Call Of Duty", 3, 10);
	q13.setValues("13. Quel jeu video permet aux joueurs de construire des mondes virtuels avec des blocs de differentes couleurs ?", "Minecraft", "Fortnite", "Grand Theft Auto V", "Valorant", 1, 10);
	q14.setValues("14.quel est le jeu de societe le plus ancien ?", "Monopoly", "Jurassic Park", "Senet", "Tetris", 3, 10);
	q15.setValues("15.Lequel de ces personnages n'est pas issu de l'univers de Mario ?", "Peach", "Bowser", "Tail", "Luigi", 2, 10);

	q11.askQuestion();
	q12.askQuestion();
	q13.askQuestion();
	q14.askQuestion();
	q15.askQuestion();

	system("cls");

	std::cout << "Ton score Totale est " << Totale << "point sur 150." << std::endl;

	if (Totale >= 30)
	{
		cout << "Bien joue tu as passe le quiz!" << endl;
		cout << "Felicitation" << endl;
	}        //end of the game
	else
	{
		std::cout << "Desole vous avez rate le quiz!" << std::endl;
	}

	std::cout << "Veut-tu rejoue (O/N) " << std::endl;
	string play_again;
	std::cout << "Ton choix: ";
	std::cin >> play_again;
	if (play_again == "O" || play_again == "o")
	{
		Theme();

	}
	else
	{
		std::cout << "OK. Au revoir." << std::endl;
	}
}

void Theme() {
	std::cout << "Choisissez un des themes qui sont presents ! \n" << std::endl;
	std::cout << "   [1] Culture general" << std::endl;
	std::cout << "   [2] Langage C " << std::endl;
	std::cout << "   [3] Jeux video \n" << std::endl;
	std::cout << "Choisie une option: ";

	int Menu = 3;
	std::cin >> Menu;

	// Appelle � la fonction 

	switch (Menu)
	{
	case 1:
		QuestionPose1();
		break;

	case 2:
		QuestionPose2();
		break;

	case 3:
		QuestionPose3();
		break;

	default:
		ExitApp();
		break;
	}
}

// Fonction qui sert à guider le joueur
void MainMenu() {
	system("color 5F");
	std::cout << "\t\t*************************************************************************************" << std::endl;
	std::cout << "\t\t*****                                                                           *****" << std::endl;
	std::cout << "\t\t*****                            BIENVENUE DANS LE QUIZ                         *****" << std::endl;
	std::cout << "\t\t*****                          CE QUIZ PRESENTE 3 THEMES                        *****" << std::endl;
	std::cout << "\t\t*****                                BON COURAGE                                *****" << std::endl;
	std::cout << "\t\t*****                                                                           *****" << std::endl;
	std::cout << "\t\t************************************************************************************* \n" << std::endl;


	string Name;
	std::cout << "Entre ton pseudo? " << std::endl;
	getline(cin, Name);

	std::cout << "   [1] Commencer le quiz" << std::endl;
	std::cout << "           ou " << std::endl;;
	std::cout << "   [2] Quitter le jeu \n" << std::endl;
	std::cout << "Choisit une option " << Name << " ?" << std::endl;


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
		std::cout << "Au revoir !" << std::endl;
		break;
	}
}
// Declarez cette fonction au debut de votre code pour la rendre accessible aux autres fonctions.
void Replay() {
	char choix;

	printf("Veux tu rejouer? (O/N) : ");
	fflush(stdin);
	scanf_s(" %c", &choix);

	if (choix == 'O' || choix == 'o') {
		// Si le joueur veut rejouer, appelez la fonction Game pour demarrer une nouvelle partie.
		Theme();
	}
	else if (choix == 'N' || choix == 'n') {
		printf("Merci d'avoir joue ! Au revoir.\n");
		//ExitApp(); // Vous pouvez egalement ajouter un appel à la fonction ExitApp pour quitter l'application ici.
	}
	else {
		// Reponse non valide, redemandez.
		printf("Reponse incorrecte. Veuillez repondre par O(oui) ou N(non)\n");
		// Appel recursif pour redemander la reponse.
	}
}
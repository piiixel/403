/*
Author: Fabian Eigenmann
date: 26.11.2017
Thema: Selbstfahrendes Auto
Version: 1.0

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int main(void) {


	int insassen = 0;
	int aussteigen = 0;
	int einsteigen = 0;

	char frage1;
	char frage2;
	int standort = 8606; // PLZ
	int ziel = 0; //PLZ in CH nur Zahlen ohne 0 prefix


	printf("Wollen Personen einsteigen[j=ja] [n=nein]\n");
	scanf("%c \n", &frage1); // & um Variable zu speichern
	printf("Ihre Eingabe: %c \n", frage1);
	/*getchar(); // Tastaturpuffer leeren*/
		if (frage1 == 'j') {
			printf("Wieviele Personen wollen einsteigen [Zahl] \n");
			scanf("%d \n", &einsteigen); // & um Variable zu speichern

			printf("Ihre Eingabe: %d \n ", einsteigen);
			insassen = insassen + einsteigen;
			printf("Personen im Auto: %d \n ", insassen);
			getchar(); // Tastaturpuffer leeren 
		}
				else
					printf("Niemand steigt ein");
				{
				}

	printf("Wollen Personen aussteigen[j=ja] [n=nein] \n");
	scanf("%c \n", &frage2); // & um Variable zu speichern
	getchar(); // Tastaturpuffer leeren

			if (frage2 == 'n') {
				printf("Niemand steigt aus");
			}
			else
			{

				printf("Wieviele Personen wollen aussteigen [Zahl]\n");
				scanf("%d \n", &insassen); // & um Variable zu speichern

				printf("Ihre Eingabe: %d \n ", aussteigen);
				insassen = insassen - aussteigen;
				printf("Personen im Auto: %d \n ", insassen);
				getchar(); // Tastaturpuffer leeren
			}
	printf("Wohin fahren [PLZ]\n");
	scanf("%d \n", &standort); // & um Variable zu speichern

	getchar(); // Tastaturpuffer leeren

			switch (standort) {
			case '8606':
				printf("Wir fahren nach Greifensee");
				getchar();
				break; //  beendet switch-abfrage , wenn kein break genutzt wird wird der default-wert verwendet
			case '8600':
				printf("Wir fahren Duebendorf");
				getchar();

				break;

			default:
				printf("ungueltige Eingabe");
				getchar();
				break;


			}



	return 0;
}


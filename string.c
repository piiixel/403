/*
Author: Fabian Eigenmann
date: 26.11.2017
Thema: String-Aufgabe
Version: 1.0

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //string.h library importieren



int main(void) {
	char string[] = "String Eingabe";
	int laenge = strlen(string);
	printf("Laenge: %d Zeichen \n", laenge);
	scanf("%c", &string);

	return 0;
}

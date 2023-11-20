#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

void run5()
{
	system("cls");
	double srednia = 0, suma = 0, pkt;
	int n, i = 1;
	printf("Podaj ilosc studenciakow: ");
	scanf_s("%d", &n);
	while (i != n + 1) {
		printf("Podaj punkty studenta nr %i: ", i);
		scanf_s("%f", &pkt);
		suma += pkt;

		i++;
	}
	srednia = suma;
	printf("Srednia ilosc punktow studentow wynosi: %f\n", srednia);
}


void run4()
{
	system("cls");
	srand(time(NULL));
	int liczba, n, min = -10, max = 45, suma = 0;
	printf("Podaj ilosc liczb do wylosowania: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		int liczba = (rand() % (max - min + 1)) + min;

		if (liczba % 2 == 0) {
			suma += liczba;
		}
	}
	printf("Suma parzystych liczb w ciagu: %d\n", suma);
}

void run3()
{
	system("cls");
	int a, suma = 0;
	printf("Podaj ilosc liczb w ciagu: ");
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) {
		int liczba;
		printf("Podaj liczbê %d: ", i + 1);
		scanf_s("%d", &liczba);

		if (liczba % 2 == 0) { 
			suma += liczba; 
		}
	}

	printf("Suma parzystych liczb: %d\n", suma);
}
void run2()
{
	system("cls");
	printf("Podaj 10 liczb: ");
	int i = 0, ujemne = 0, dodatnie = 0;
	float sumaD = 0, sumaU = 0;

	do {
		float liczba;
		scanf_s("%f", &liczba);

		if (liczba < 0) {
			ujemne++;
			sumaU += liczba;
		}
		else {
			dodatnie++;
			sumaD += liczba;
		}

		i++;
	} while (i != 10);

	printf("Suma dodatnich: %f\n", sumaD);
	printf("Dodatnie: %i\n", dodatnie);

	printf("Suma ujemnych: %f\n", sumaU);
	printf("Ujemne: %i\n", ujemne);
}

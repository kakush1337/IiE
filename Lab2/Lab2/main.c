
int main()
{
	int opcja = 1;
	printf("Wybierz zadanie do podgladu: ");
	scanf_s("%i", &opcja);
	switch (opcja) {
		case 1: {
			break;
		}
		case 2: {
			run2();
			break;
		}
		case 3: {
			run3();
			break;
		}
		case 4: {
			run4();
			break;
		}
		case 5: {
			run5();
			break;
		}
		case 6: {
		
			break;
		}
		default: {
			printf("Wybierz zadanie do podgladu: ");
			scanf_s("%i", &opcja);
			break;
		}
	}

}


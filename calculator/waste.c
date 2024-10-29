#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <ctype.h> 
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Ru");
	float a = 0;
	float b = 0;
	float res = 0;
	int k = 1;
	char prova = '+';
	char provb = '+';
	printf("> 1) Число А: %.0f\n", a);
	printf("2) Число Б: %.0f \n", b);
	printf("3) + \n");
	printf("4) - \n");
	printf("5) * \n");
	printf("6) / \n");
	printf("7) Выход \n");
	printf("----------- \n");
 
	printf("Результат: %.1f \n", res);
	while (true) {
		int p = getch();
		if (p == 49 || (p == 13 && k == 1)) {
			k = 1;
			system("cls");
			char aa[100];
			printf("Введите число А: ");
			gets(aa);
			int i;
			for (i = 0; i < strlen(aa); i++) {
				if (isdigit(aa[i]) || aa[0] == '-') {
					prova = '+';
					continue;
				}
				else {
					prova = '-';
					break;
				}
			}
			if (strlen(aa) < 8 && prova == '+') {
				sscanf_s(aa, "%f", &a);
			}
			else {
				prova = '-';
				a = 0;
			}
			res = 0;
		}
		else if (p == 50 || (p == 13 && k == 2)) {
			k = 2;
			system("cls");
			char bb[100];
			printf("Введите число Б: ");
			gets(bb);
			int i;
			for (i = 0; i < strlen(bb); i++) {
				if (isdigit(bb[i]) || bb[0] == '-') {
					provb = '+';
					continue;
				}
				else {
					provb = '-';
					break;
				}
			}
			if (strlen(bb) < 8 && provb == '+') {
				sscanf_s(bb, "%f", &b);
			}
			else {
				provb = '-';
				b = 0;
			}
			res = 0;
		}
		else if (p == 51 || (p == 13 && k == 3)) {
			k = 3;
			res = a + b;
		}
		else if (p == 52 || (p == 13 && k == 4)) {
			k = 4;
			res = a - b;
		}
		else if (p == 53 || (p == 13 && k == 5)) {
			k = 5;
			res = a * b;
		}
		else if (p == 54 || (p == 13 && k == 6)) {
			k = 6;
			if (b != 0) {
				res = a / b;
			}
			else {
			}
		}
		else if (p == 55 || (p == 13 && k == 7)) {
			k = 7;
			exit();
		}
		else if (p == 27) {
			exit();
		}
		else if (p == 80) {
			if (k == 7) {
				continue;
			}
			else {
				k++;
			}
		}
		else if (p == 72) {
			if (k == 1) {
				continue;
			}
			else {
				k--;
			}
		}
		if (k == 1) {
			system("cls");
			printf("> 1) Число А: %.0f\n", a);
			printf("2) Число Б: %.0f \n", b);
			printf("3) + \n");
			printf("4) - \n");
			printf("5) * \n");
			printf("6) / \n");
			printf("7) Выход \n");
			printf("----------- \n");
			if (prova == '+') {
				if (provb == '+') {
					printf("Результат: %.1f \n", res);
				}
				else {
					printf("Результат: число Б является некорректным!\n");
				}
			}
			else {
				printf("Результат: число А является некорректным!\n");
			}
		}
		else if (k == 2) {
			system("cls");
			printf("1) Число А: %.0f\n", a);
			printf("> 2) Число Б: %.0f \n", b);
			printf("3) + \n");
			printf("4) - \n");
			printf("5) * \n");
			printf("6) / \n");
			printf("7) Выход \n");
			printf("----------- \n");
			if (prova == '+') {
				if (provb == '+') {
					printf("Результат: %.1f \n", res);
				}
				else {
					printf("Результат: число Б является некорректным!\n");
				}
			}
			else {
				printf("Результат: число А является некорректным!\n");
			}
		}
		else if (k == 3) {
			system("cls");
			printf("1) Число А: %.0f\n", a);
			printf("2) Число Б: %.0f \n", b);
			printf("> 3) + \n");
			printf("4) - \n");
			printf("5) * \n");
			printf("6) / \n");
			printf("7) Выход \n");
			printf("----------- \n");
			if (prova == '+') {
				if (provb == '+') {
					printf("Результат: %.1f \n", res);
				}
				else {
					printf("Результат: число Б является некорректным!\n");
				}
			}
			else {
				printf("Результат: число А является некорректным!\n");
			}
		}
		else if (k == 4) {
			system("cls");
			printf("1) Число A: %.0f\n", a);
			printf("2) Число Б: %.0f \n", b);
			printf("3) + \n");
			printf("> 4) - \n");
			printf("5) * \n");
			printf("6) / \n");
			printf("7) Выход \n");
			printf("----------- \n");
			if (prova == '+') {
				if (provb == '+') {
					printf("Результат: %.1f \n", res);
				}
				else {
					printf("Результат: число Б является некорректным!\n");
				}
			}
			else {
				printf("Результат: число А является некорректным!\n");
			}
		}
		else if (k == 5) {
			system("cls");
			printf("1) Число A: %.0f\n", a);
			printf("2) Число Б: %.0f \n", b);
			printf("3) + \n");
			printf("4) - \n");
			printf("> 5) * \n");
			printf("6) / \n");
			printf("7) Выход \n");
			printf("----------- \n");
			if (prova == '+') {
				if (provb == '+') {
					printf("Результат: %.1f \n", res);
				}
				else {
					printf("Результат: число Б является некорректным!\n");
				}
			}
			else {
				printf("Результат: число А является некорректным!\n");
			}
		}
		else if (k == 6) {
			if (b != 0) {
				system("cls");
				printf("1) Число A: %.0f\n", a);
				printf("2) Число Б: %.0f \n", b);
				printf("3) + \n");
				printf("4) - \n");
				printf("5) * \n");
				printf("> 6) / \n");
				printf("7) Выход \n");
				printf("----------- \n");
				if (prova == '+') {
					if (provb == '+') {
						printf("Результат: %.1f \n", res);
					}
					else {
						printf("Результат: число Б является некорректным!\n");
					}
				}
				else {
					printf("Результат: число А является некорректным!\n");
				}
			}
			else {
				system("cls");
				printf("1) Число A: %.0f\n", a);
				printf("2) Число Б: %.0f \n", b);
				printf("3) + \n");
				printf("4) - \n");
				printf("5) * \n");
				printf("> 6) / \n");
				printf("7) Выход \n");
				printf("----------- \n");
				if (prova == '+') {
					if (provb == '+') {
						printf("Результат: деление на 0 запрещено!\n");
					}
					else {
						printf("Результат: число Б является некорректным!\n");
					}
				}
				else {
					printf("Результат: число А является некорректным!\n");
				}
			}
		}
		else if (k == 7) {
			system("cls");
			printf("1) Число A: %.0f\n", a);
			printf("2) Число Б: %.0f \n", b);
			printf("3) + \n");
			printf("4) - \n");
			printf("5) * \n");
			printf("6) / \n");
			printf("> 7) Выход \n");
			printf("----------- \n");
			if (prova == '+') {
				if (provb == '+') {
					printf("Результат: %.1f \n", res);
				}
				else {
					printf("Результат: число Б является некорректным!\n");
				}
			}
			else {
				printf("Результат: число А является некорректным!\n");
			}
		}
	}
	return 0;
}
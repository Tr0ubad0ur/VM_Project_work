#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Autorisation.h"
#include "Menu.h"
using namespace std;



int main() {
	setlocale(LC_ALL, "ru");
	int variant, variant1;
	do {
		print_menu();
		variant = get_variant(4);

		switch (variant) {
		case 1:
			cout << "Введите ваш Никнейм." << endl;
			Find();
			if (Find)
			{
				
				do {
					print_dop_menu();
					variant1 = get_variant(4);

					switch (variant1) {
					case 1:
						cout << "Введите препарат который хотите найти." << endl;
						Find_ANLG();
						break;

					case 2:
						Get_ANLG();
						break;

					case 3:
						cout << "Вот вся база данных по лекарствам:" << endl;
						Print_ANLG();
						break;
					}
					if (variant1 != 4)
						system("pause"); // задерживаем выполнение, чтобы пользователь мог увидеть результат выполнения выбранного пункта
				} while (variant1 != 4);
				
			}
			break;
			
		case 2:
			Get();
			break;

		case 3:
			cout << "Вот все зарегестрированные пользователи:" << endl;
			Print();
			break;

		}
		if (variant != 4)
			system("pause"); // задерживаем выполнение, чтобы пользователь мог увидеть результат выполнения выбранного пункта
	} while (variant != 4);



	return 0;
}

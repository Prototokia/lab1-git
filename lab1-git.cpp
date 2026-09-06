// Лабораторная работа № 1. Вариант 71.
// Выполнил: Важев А.Е., группа ПИ-52.
#include "lab1-git.h"

// ===== Расчётные функции варианта =====

// Перевод секунд в часы
int hoursOf(int sec) {
	return sec / 3600;
}

// Перевод секунд в минуты
int minutesOf(int sec) {
	return (sec % 3600) / 60;
}

// ===== Главная функция: меню =====

int main()
{
	setlocale(LC_ALL, "Russian");

	int choice;
	int sec;

	do {
		std::cout << "\n=== Вариант 71: Перевод секунд в часы;минуты;секунды ===\n";

		std::cout << "1. Секунды => часы\n";
		std::cout << "2. Секунды => минуты\n";
		std::cout << "0. Выход\n";
		std::cout << "Выберите пункт: ";

		std::cin >> choice;
		switch (choice) {
		case 1: {
			std::cout << "Введите количество секунд: ";
			std::cin >> sec;
			std::cout << "В " << sec << " секундах " << hoursOf(sec) << " часов.\n";
			break;
		}
		case 2: {
			std::cout << "Введите количество секунд: ";
			std::cin >> sec;
			std::cout << "В " << sec << " секундах " << minutesOf(sec) << " минут.\n";
			break;
		}
		case 0:
			std::cout << "Работа завершена.\n";
			break;
		default:
			std::cout << "Такого пункта нет.\n";
		}

	} while (choice != 0);

	return 0;

}

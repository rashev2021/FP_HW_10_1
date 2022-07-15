#include<Windows.h>
#include <iostream>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Задание 1
	/*
	// c двумерным массивом


	const size_t userArrayLow = 1, userArrayRow = 10;
	int array[userArrayLow][userArrayRow];
	int userNumber;

	cout << " Введите число:" << endl;
	cin >> userNumber;
	cout << endl;
	for (int i = 0; i < userArrayLow; i++) {
		for (int j = 0; j < userArrayRow; j++) {
			array[i][j] = userNumber;
			userNumber *=2;
			cout << " " << array[i][j] << " ";
		}
		cout << endl;
	}
	

	//с одномерным массивом
	
	
	const size_t userArray = 10;
	int array[userArray];
	int userNumber;

	cout << " Введите число:" << endl;
	cin >> userNumber;
	cout << endl;
	for (int i = 0; i < userArray; i++) {
			array[i] = userNumber;
			userNumber *= 2;
			cout << " " << array[i] << " ";
	}
	cout << endl;
	*/

	//Задание 2
	/*
	
	// c двумерным массивом
	
	const size_t userArrayLow = 1, userArrayRow = 10;
	int array[userArrayLow][userArrayRow];
	int userNumber;

	cout << " Введите число:" << endl;
	cin >> userNumber;
	cout << endl;
	for (int i = 0; i < userArrayLow; i++) {
		for (int j = 0; j < userArrayRow; j++) {
			array[i][j] = userNumber;
			userNumber += 1;
			cout << " " << array[i][j] << " ";
		}
		cout << endl;
	}
	
	// c одномерным массивом
	
	
	const size_t userArray = 10;
	int array[userArray];
	int userNumber;

	cout << " Введите число:" << endl;
	cin >> userNumber;
	cout << endl;
	for (int i = 0; i < userArray; i++) {
			array[i] = userNumber;
			userNumber += 1;
			cout << " " << array[i] << " ";
	}
	cout << endl;*/
	

	

	const size_t userArrayLow = 2, userArrayRow = 6;
	int array[userArrayLow][userArrayRow] = { {1,2,0,4,5,3},{4,5,3,9,0,1} };
	int enter;
	
	cout << " Дан массив: ";
	cout << endl << endl;
	for (int i = 0; i < userArrayLow; i++) {
		for (int j = 0; j < userArrayRow; j++) {
			cout << " ";
			cout  << array[i][j] << " ";
		}
		cout << endl;
	}

	do {

		cout << endl << " Выберите один из вариантов сдвига:" << endl;
		cout << " Влево  - введите 1" << endl << " Вправо - введите 2" << endl << " Вверх  - введите 3" << endl << " Вниз   - введите 4" << endl;
		
		cin >> enter;

		switch (enter)
		{
		case 1:
			cout << " Влево" << endl;

			for (int i = 0; i < userArrayLow; i++) {
				int temp = array[i][0];
				for (int j = 0; j < userArrayRow; j++) {
					array[i][j-1] = array[i][j];
				
				}
				array[userArrayLow][userArrayRow] = temp;
			}
			cout << endl;

			for (int i = 0; i < userArrayLow; i++) {
				for (int j = 0; j < userArrayRow; j++) {
					cout << " ";
					cout << array[i][j] << " ";
				}
				cout << endl;
			}



			break;

		case 2:
			cout << " Вправо" << endl;
			
			for (int i = 0; i < userArrayLow; i++) {
				int temp = array[i][0];
				for (int j = 0; j < userArrayRow; j++) {
					array[i][j] = array[i][j];
				}
				array[userArrayLow][userArrayRow] = temp;
			
			}
			cout << endl;

			for (int i = 0; i < userArrayLow; i++) {
				for (int j = 0; j < userArrayRow; j++) {
					cout << " ";
					cout << array[i][j] << " ";
				}
				cout << endl;
			}

			break;

		case 3:
			cout << " Вверх" << endl;

			for (int i = 0; i < userArrayLow; i++) {
				for (int j = 0; j < userArrayRow; j++) {

				}
			}


			break;

		case 4:
			cout << " Вниз" << endl;

			for (int i = 0; i < userArrayLow; i++) {
				for (int j = 0; j < userArrayRow; j++) {

				}
			}
			break;

		default:
			cout << " Введены неверные значения. Попробуйте еще раз";
			break;
		}

	} while (true);

	//не могу разобраться со сдвигами к сожалению....
	
}



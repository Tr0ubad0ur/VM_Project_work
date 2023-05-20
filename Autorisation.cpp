#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Autorisation.h"
using namespace std;

class Users {

public:
	string Log;
	Users(const Users& v) :
		Log(v.Log) {}
	const Users &operator = (const Users& v) {
		Log = v.Log;
		return v;
	}

	Users() {
		Log = "";

	}

};

class ANLG {

public:
	string Drug;
	string Drug_Price;
	string Analog;
	string Analog_Price;
	string Compaund;
	ANLG(const ANLG& v) :
		Drug(v.Drug), Drug_Price(v.Drug_Price), Analog(v.Analog), Analog_Price(v.Analog_Price), Compaund(v.Compaund) {}
	const ANLG &operator = (const ANLG& v) {
		Drug = v.Drug;
		Drug_Price = v.Drug_Price;
		Analog = v.Analog;
		Analog_Price = v.Analog_Price;
		Compaund = v.Compaund;

		return v;
	}

	ANLG() {

		 Drug = "";
		 Drug_Price = "";
		 Analog = "";
		 Analog_Price = "";
		 Compaund = "";

	}

};

bool Find() {
	ifstream fin;
	fin.open("users.txt");
	if (!fin.is_open()) {

		cout << "Ошибка открытия файла!" << endl; 

	}
	else 
	{
		vector<Users> Data;
		while (true) 
		{
			Users t;
			fin >> t.Log;
			if (fin.eof()) 
			{
				break;
			}
			Data.push_back(t);
		}
			int k = 0;
			string User_Name;
			cin >> User_Name;
			for (int i = 0; i < Data.size(); ++i) 
			{   
				if (Data[i].Log == User_Name) 
				{
					return true;
				}
				k = k + 1;
			}
			if (k == Data.size()) 
			{ 
					cout << "Хм, такого пользователя нет. Попробуйте ввести данные ещё раз" << endl;
					cout << "Или выберете пункт - 2.Зарегестрироваться" << endl;
					return false;
			}
	}
	fin.close();


}


bool Find_ANLG() {
	ifstream fin;
	fin.open("BD.txt");
	if (!fin.is_open()) {

		cout << "Ошибка открытия файла!" << endl;

	}
	else {
		vector<ANLG> BData; 
		while (true) {
			ANLG t;
			fin >> t.Drug;
			if (fin.eof()) {
				break;
			}
			fin >> t.Drug_Price;
			if (fin.eof()) {
				break;
			}
			fin >> t.Analog;
			if (fin.eof()) {
				break;
			}
			fin >> t.Analog_Price;
			if (fin.eof()) {
				break;
			}
			fin >> t.Compaund;
			if (fin.eof()) {
				break;
			}
			
			BData.push_back(t);
		}
		int k = 0;
			string Drug_Name;
			cin >> Drug_Name;
			for (int i = 0; i < BData.size(); ++i) {
				if (BData[i].Drug == Drug_Name) {
					cout << "Вот что нашлось:" << endl;
					cout << "Препарат: " << BData[i].Drug << endl;
					cout << "Цена: " << BData[i].Drug_Price << endl;
					cout << "Аналог: " << BData[i].Analog << endl;
					cout << "Цена: " << BData[i].Analog_Price << endl;
					cout << "Состав: " << BData[i].Compaund << endl;
					return true;
					k = k + 1;
				}
				if (k == BData.size()) {
					cout << "Такого препарата нет :( Попробуйте ввести данные ещё раз" << endl;
					cout << "Или выберете пункт - 2.Добавить новое лекарство и его аналог" << endl;
					return false;
				}
			}
		
	}
	fin.close();


}



void Get() {
	ofstream fout;
	fout.open("users.txt", ofstream::app);
	if (!fout.is_open()) {

		cout << "Ошибка открытия файла!" << endl;

	}
	else {
		cout << "Введите ваше имя или никнейм на английском." << endl;
		string User_Name;
		cin >> User_Name;
		fout << User_Name << endl;
		cout << "Отлично, " << User_Name << "! Ваши данные успешно сохранились!" << endl;
	}
	fout.close();

}


void Get_ANLG() {
	ofstream fout;
	fout.open("BD.txt", ofstream::app);
	if (!fout.is_open()) {

		cout << "Ошибка открытия файла!" << endl;

	}
	else {
		
		string Drug; 
		string Drug_Price; 
		string Analog; 
		string Analog_Price; 
		string Compaund;
		cout << "Введите препарат который хотите добавить." << endl;
		cin >> Drug;
		fout << Drug;

		cout << "Введите цену на препарат который хотите добавить." << endl;
		cin >> Drug_Price; 
		fout << Drug_Price; 

		cout << "Введите аналог препарата который хотите добавить." << endl;
		cin >> Analog; 
		fout << Analog; 

		cout << "Введите цену на аналог препарата который хотите добавить." << endl;
		cin >> Analog_Price; 
		fout << Analog_Price; 

		cout << "Введите состав препарата который хотите добавить." << endl;
		cin >> Compaund; 
		fout << Compaund; 
		cout << "\n";
		cout << "Отлично! Данные успешно сохранились!" << endl;
	}
	fout.close();

}

void Print() {
	ifstream fin;
	fin.open("users.txt");
	if (!fin.is_open()) {

		cout << "Ошибка открытия файла!" << endl;

	}
	else {
		char ch;
		while (fin.get(ch)) {
			cout << ch;
		}
		cout << "\n";
	}
	fin.close();
}

void Print_ANLG() {
	ifstream fin;
	fin.open("BD.txt");
	if (!fin.is_open()) {

		cout << "Ошибка открытия файла!" << endl;

	}
	else {
		char ch;
		while (fin.get(ch)) {
			cout << ch;
		}
		cout << "\n";
	}
	fin.close();
}

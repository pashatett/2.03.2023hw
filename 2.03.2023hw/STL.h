#pragma once//чет необходимое
#include <iostream>//стандартная библиотека вроде
#include <vector>//вектор
using namespace std;//пространство имен

class STL {//класс
	struct Car {//структура
		vector<string> name;//название
		vector<int> yVipuska;//год выпуска
		vector<int> dvijok;//обеъм
		vector<int> price;//цена
	}carr;//объект класса
public://публик
	void Del(int index);//удаление по индексу
	void Search();//поиск по названию
	void Add();//добавление
	void ShowAll();//вывод всех машин
};

void STL::Add() {
	string n; cout << "name -> "; cin >> n;
	carr.name.push_back(n);

	int yV; cout << "year -> "; cin >> yV;
	carr.yVipuska.push_back(yV);

	int d; cout << "volume -> "; cin >> d;
	carr.dvijok.push_back(d);

	int p; cout << "price -> "; cin >> p;
	carr.price.push_back(d);
	system("cls");
}

void STL::ShowAll() {
	system("cls");
	for (int i{ 0 }; i < carr.name.size(); i++) {
		cout << "Название автомобиля -> " << carr.name[i] << endl;
		cout << "Год выпуска -> " << carr.yVipuska[i] << endl;
		cout << "Объем двигателя -> " << carr.dvijok[i] << endl;
		cout << "Цена -> " << carr.price[i] << endl << endl << endl;
	}
}

void STL::Search() {
	string n; cout << "Какую машину хотите найти? -> "; cin >> n;
	int a = distance(carr.name.begin(),find(carr.name.begin(), carr.name.end(), n));
	cout << "Название автомобиля -> " << carr.name[a] << endl;
	cout << "Год выпуска -> " << carr.yVipuska[a] << endl;
	cout << "Объем двигателя -> " << carr.dvijok[a] << endl;
	cout << "Цена -> " << carr.price[a] << endl;
}

void STL::Del(int index) {
	carr.name.erase(carr.name.begin()+index);
	carr.yVipuska.erase(carr.yVipuska.begin() + index);
	carr.dvijok.erase(carr.dvijok.begin() + index);
	carr.price.erase(carr.price.begin() + index);
}
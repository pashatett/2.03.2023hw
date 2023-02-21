#pragma once//��� �����������
#include <iostream>//����������� ���������� �����
#include <vector>//������
using namespace std;//������������ ����

class STL {//�����
	struct Car {//���������
		vector<string> name;//��������
		vector<int> yVipuska;//��� �������
		vector<int> dvijok;//�����
		vector<int> price;//����
	}carr;//������ ������
public://������
	void Del(int index);//�������� �� �������
	void Search();//����� �� ��������
	void Add();//����������
	void ShowAll();//����� ���� �����
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
		cout << "�������� ���������� -> " << carr.name[i] << endl;
		cout << "��� ������� -> " << carr.yVipuska[i] << endl;
		cout << "����� ��������� -> " << carr.dvijok[i] << endl;
		cout << "���� -> " << carr.price[i] << endl << endl << endl;
	}
}

void STL::Search() {
	string n; cout << "����� ������ ������ �����? -> "; cin >> n;
	int a = distance(carr.name.begin(),find(carr.name.begin(), carr.name.end(), n));
	cout << "�������� ���������� -> " << carr.name[a] << endl;
	cout << "��� ������� -> " << carr.yVipuska[a] << endl;
	cout << "����� ��������� -> " << carr.dvijok[a] << endl;
	cout << "���� -> " << carr.price[a] << endl;
}

void STL::Del(int index) {
	carr.name.erase(carr.name.begin()+index);
	carr.yVipuska.erase(carr.yVipuska.begin() + index);
	carr.dvijok.erase(carr.dvijok.begin() + index);
	carr.price.erase(carr.price.begin() + index);
}
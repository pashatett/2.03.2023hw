#include <iostream>
using namespace std;

#include "STL.h"
int main() {
	setlocale(LC_ALL, "");
	STL f;
	f.Add();
	f.Add();
	f.Add();
	f.ShowAll();
	f.Del(1);
	f.ShowAll();
	f.Search();
}
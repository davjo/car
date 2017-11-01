#include <iostream>
#include "car.h"
using namespace std;

void main()
{
	car mycar;
	char make[10];
	char model[10];
	char engineVolume[10];
	char color[10];

	cout << "Please enter car details.\nMake: ";
	cin >> make;
	mycar.setMake(make);
	cout << "\nModel: ";
	cin >> model;
	mycar.setModel(model);
	cout << "\nEngineVolume: ";
	cin >> engineVolume;
	mycar.setEngineVolume(engineVolume);
	cout << "\nColor: ";
	cin >> color;
	mycar.setColor(color);
	mycar.print();
	system("PAUSE");
}
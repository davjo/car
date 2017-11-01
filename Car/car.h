#pragma once
class car
{
public:
	car();
	~car();
	char* getMake();
	char* getModel();
	char* getEngineVolume();
	char* getColor();
	void setMake(char*);
	void setModel(char*);
	void setEngineVolume(char*);
	void setColor(char*);
	void print();

private:
	char make[10];
	char model[10];
	char engineVolume[10];
	char color[10];
};
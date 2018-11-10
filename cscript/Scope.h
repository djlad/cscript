#pragma once
#include <map>
#include <string>
using namespace std;
class Scope
{
private:
	map<string, int> vInts;
	map<string, double> vDouble;
	map<string, string> vStrings;
	int position;

public:
	void assign(string varName, string value);
	Scope();
	~Scope();
	void setPosition(int newPos);
	int getPosition();
	void incrPos();
};
#pragma once
#include <string>
#include "Scope.h"

using namespace std;
class CScript
{
private:
	string source;
	vector<Scope> scopes;
	stringstream token;
	int position;
	char curChr;
public:
	CScript();
	~CScript();

	string readFile(string fileName);
	int runFile(string fileName);
	int parseAssign(string token);
	int parse();
	int resolve();
	void addScope();
};


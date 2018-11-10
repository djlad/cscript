#include "CScript.h"
#include <fstream>
#include <sstream>
#include <vector>
#include "Scope.h"
#include <iostream>

using namespace std;



CScript::CScript()
{
	scopes = vector<Scope>();
	position = 0;
}


CScript::~CScript()
{
}

string CScript::readFile(string fileName)
{
	stringstream ss;
	ifstream f;
	f.open(fileName);
	ss << f.rdbuf();
	string fileString = ss.str();
	return fileString;
}

int CScript::runFile(string fileName)
{
	source = readFile(fileName);
	int sourceLength = source.length();
	token.str("");
	addScope();
	position = 0;
	while (position < sourceLength) {
		curChr = source[position];
		switch (curChr)
		{
		case ' ':
			continue;
			break;
		case '\n':
			continue;
			break;
		case '=':
			position++;
			parseAssign(token.str());
			break;
		default:
			token << curChr;
			break;
		}
		token.str("");
		position++;
	}
	return 0;
}

int CScript::parse()
{
	return 0;
}

int CScript::resolve()
{

	return 0;
}

int CScript::parseAssign(string token)
{
	cout << token;
	return 0;
}



void CScript::addScope()
{
	scopes.push_back(Scope());
}

#include <iostream>
#include <sstream>
#include <fstream>
#include <stack>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#include "pa3.h"

int main(){
	cout << "Please enter the name of the input file:\n";
	string fileName;
	getline(cin, fileName);

	ifstream contents;
	contents.open(fileName.c_str());

	string temp;
	vector<string> keywords;
	vector<string> identifiers;
	vector<string> constants;
	vector<string> operators;
	vector<string> delimiters;
	vector<string> syntaxErrors;
	while (getline(contents, temp)){

		if(isInString(temp, '+')){
			operators.push_back("+");
		}
		if(isInString(temp, '-')){
			operators.push_back("-");
		}
		if(isInString(temp, '*')){
			operators.push_back("*");
		}
		if(isInString(temp, '/')){
			operators.push_back("/");
		}
		if(isInString(temp, '=')){
			operators.push_back("=");
		}

		if(isInString(temp, ',')){
			operators.push_back(",");
		}
		if(isInString(temp, ';')){
			operators.push_back(";");
		}

		if (hasUpper(temp)){
			stringstream iss(temp);
			iss >> temp;

			if (hasUpper(temp)){
				if (temp.compare("FOR") == 0){
					keywords.push_back("FOR");
					getline(contents, temp);
					removeFromString(temp, " ");
					if(countChars(temp, '(') != 1)
						syntaxErrors.push_back("(");
					}
					if(countChars(temp, ')') != 1){
						syntaxErrors.push_back(")");
					}
					if(temp[0]!='('){
						syntaxErrors.push_back("(");
					}
					if(temp[temp.size()-1]!='1'){
						syntaxErrors.push_back(")");
					}

				else if (temp.compare("BEGIN") == 0){
					keywords.push_back("BEGIN");
				}
				else if (temp.compare("END") == 0){
					keywords.push_back("END");
				} else {
					syntaxErrors.push_back(temp);
				}
			}
		}
	}

	for (unsigned int i; i < keywords.size(); i++){
		cout << "Keywords: " << keywords[i];
	}

	for (unsigned int i; i < identifiers.size(); i++){
		cout << "Identifiers: " << identifiers[i];
	}

	for (unsigned int i; i < constants.size(); i++){
		cout << "Constants: " << constants[i];
	}

	for (unsigned int i; i < operators.size(); i++){
		cout << "Operators: " << operators[i];
	}

	for (unsigned int i; i < delimiters.size(); i++){
		cout << "Delimiters: " << delimiters[i];
	}

	for (unsigned int i; i < syntaxErrors.size(); i++){
		cout << "Syntax Errors: " << syntaxErrors[i];
	}
}
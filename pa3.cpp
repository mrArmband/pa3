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
	contents.open(fileName);

	string temp;
	vector<string> keywords;
	vector<string> identifiers;
	vector<string> constants;
	vector<string> operators;
	vector<string> delimiters;
	vector<string> syntaxErrors;
	while (getline(contents, temp)){

		if (hasUpper(temp)){
			isstringstream iss(temp);
			iss >> temp;

			if (isKeyword){
				if (temp.compare("FOR") == 0){
					keywords.push_back("FOR");
					getline(contents, temp);
					removeFromString(temp, " ");
					
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
		
		if ()
	}

}
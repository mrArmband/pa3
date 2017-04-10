bool hasUpper(string in){
	bool hasUppercase = false;
		for(unsigned int i=0; i < in.length(); i++){
			if (isupper(in[i])){
				hasUppercase = true;
			}
		}
	return hasUppercase;
}

void removeFromString(string &str, string charsToRemove) {
   for (unsigned int i = 0; i < charsToRemove.length(); i++) {
      str.erase(remove(str.begin(), str.end(), charsToRemove[i]), str.end());
   }
}

int countChars(string str, char toFind){
	return count(str.begin(), str.end(), toFind);
}

bool isInString(string str, char toFind) {
    bool found = false;
    for(unsigned int i = 0; i < str.length(); i++){
        if(str[i] == toFind) {
            found = true;
        }
    }
    return found;
}
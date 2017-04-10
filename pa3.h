bool hasUpper(string in){
	bool hasUppercase = false;
		for(int i=0; i < in.length(); i++){
			if (isupper(in[i])){
				hasUppercase = true;
			}
		}
	return hasUppercase;
}

void removeFromString(string &str, string charsToRemove) {
   for (unsigned int i = 0; i < chars_to_remove.length(); i++) {
      str.erase(remove(str.begin(), str.end(), charsToRemove[i]), str.end());
   }
}
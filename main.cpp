#include <iostream>
#include <fstream>
#include <cstring>
#define VOWEL 'a', 'e', 'i', 'o' ,'u', 'A', 'E', 'I', 'O', 'U'

//prototypes
int countVowels(const char* str);		//returns number of vowels in c string
int countConsonants(const char* str);	//returns number of consonants in c string


int main() {
	int vowels = 0, cons = 0, h;
	const char* words = "Hello Boss";

	vowels = countVowels(words);
	cons = countConsonants(words);

	std::cout << "There are " << vowels << " vowels\n";
	std::cout << "There are " << cons << " consonants\n";
	std::cin >> h;


	//std::fstream fs("input.txt");
	return 0;
}



int countVowels(const char* str) {
	int vCounter = 0;	
	int i = 0;			//String index
	while (str[i] != '\0') {
		if (str[i] == VOWEL) {
			++vCounter;
		}
		++i;
	}
	return vCounter;
}

int countConsonants(const char* str) {
	int cCounter = 0;
	int i = 0;			//String index
	while (str[i] != '\0') {
		if ((str[i] != VOWEL) && (((str[i] > 'A') && (str[i] < 'Z')) || ((str[i]  > 'a') && (str[i] < 'z')))) {
			++cCounter;
		}
		++i;
	}
	return cCounter;
}
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

#include "Cezar.h"

// Cezar encrypt


//TODO move all functions to the class

int main() {

	std::unordered_map<char, char> map;
	std::unordered_map<char, char>::iterator it;

	it = map.begin();

	int shift;
	std::cout << "Enter coding rate(1-1000)\n";
	std::cin >> shift;
	while (shift <= 0 or shift > 1000) {
		std::cout << "Error! pls enter number in range 1-1000\n";
		std::cin >> shift;
	}

	std::cout << "enter the word you want to encrypt\n";
	std::string word;
	std::cin >> word;


	for (size_t i = 0; i < word.size(); i++){
		char keyLetter = word[0];
		char name = word[i];
		map.emplace(name, name + shift);
	}

	int size = word.size();
	std::vector<char> crypto;

	for (auto &it : map){
		std::cout<< it.second;
	}
	std::cout << '\n';
		
	for (auto& it : map) {
		crypto.push_back(it.second);
	}
	std::cout << '\n';
	for (size_t i = 0; i < crypto.size(); i++){
		std::cout << crypto[i];
	}
	std::cout << '\n';
	for (size_t i = 0; i < crypto.size(); i++){
		std::cout <<char(crypto[i]-shift);
	}
	// might be know 3 parameters - size, first letter of encrypt, shift;


	return 0;
}
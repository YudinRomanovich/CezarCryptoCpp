#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

#include "Cezar.h"
#include "Decoder.h"

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
	std::vector<char> crypto;

	CryptoTsezar cr(shift);
	Decoder dc;
	while (true) {
		std::cout << "Enter the word you want to encrypt\n";
		std::vector<std::string> word;
		std::string wrd;
		word.push_back(wrd);
		system("cls");
		int chose;

		while (true) {
			std::cout << word[0] << "\n\n";

			std::cout << "Options: \n";
			std::cout << "1. Coding word \n";
			std::cout << "2. Showing Coding word \n\n";
			std::cout << "3. Decode \n\n";
			std::cout << "4. Set new word \n\n";


			std::cout << "5. Exit \n";

			std::cin >> chose;

			switch (chose) {
			case 1:
				//Шифруем слово
				system("cls");
				cr.EncryptingWord(map, crypto, word[0]);
				system("cls");
				break;
			case 2:
				//Выводим шифр
				system("cls");
				cr.ShowCryptography(crypto);
				system("cls");
				break;
			case 3:
				//Декодируем шифр
				system("cls");
				dc.decodingWord(crypto, shift);
				system("cls");
				break;
			case 4:
				/*system("cls");
				std::cout << "Enter the word you want to encrypt\n";
				std::cin >> word;
				system("cls");
				break;*/
			case 5:
				system("cls");
				system("pause");
				return 0;
			}
			
		}
	}
}
#pragma once

class CryptoTsezar {
public:
	CryptoTsezar(int shift) {
		this->shift = shift;
	}

	std::vector<char> EncryptingWord(std::unordered_map<char, char> map, std::vector<char>& crypto, std::string& word) {
		for (size_t i = 0; i < word.size(); i++) {
			char keyLetter = word[0];
			char name = word[i];
			map.emplace(name, name + shift);
		}
		return pushCryptToVector(map, crypto);
	}

	std::vector<char> ShowCryptography(std::vector<char>& crypto) {
		for (size_t i = 0; i < crypto.size(); i++) {
			std::cout << crypto[i];
		}
		std::cout << '\n';
		system("pause");
		return crypto;
	}

private:
	std::vector<char> pushCryptToVector(std::unordered_map<char, char>& map, std::vector<char>& crypto) {
		for (auto& it : map) {
			crypto.push_back(it.second);
		}
		return crypto;
	}

	int shift;
	std::vector<char> crypto;
	std::string userWord;
};
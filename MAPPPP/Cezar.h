#pragma once

class CryptoTsezar {
public:
	CryptoTsezar(int shift) {
		this->shift = shift;
	}




private:
	int shift;
	std::vector<char> crypto;
	std::string userWord;
	
};
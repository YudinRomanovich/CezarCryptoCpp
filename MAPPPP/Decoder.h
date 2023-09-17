#pragma once

class Decoder {
public:
	std::vector<char> decodingWord(std::vector<char>& decodeVector, int& shift) {
		for (size_t i = 0; i < decodeVector.size(); i++) {
			decodeVector[i] = char(decodeVector[i] - shift);
		}
		return decodeVector;
	}


};
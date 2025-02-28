#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int argc, char* argv[]) {
	
	if (argc < 2) {
		std::string searchSentence;
		std::string searchString;

		std::cout << "Give a string from which to search from: " << std::endl;
		std::getline(std::cin, searchSentence);
		std::cout << "Give search string: " << std::endl;
		std::getline(std::cin, searchString);

		size_t wordPosition = searchSentence.find(searchString);

		if (wordPosition != std::string::npos) {
			std::cout << "String " << searchString << " found at position " << wordPosition << std::endl;
		}
		else {
			std::cout << "String " << searchString << " was not found" << std::endl;
		}
	}

	std::string searchString = argv[1];
	std::string searchFile = argv[2];
	std::string line;
	bool found = false;

	std::ifstream inputFile(searchFile);
	if (!inputFile) {
		std::cout << "Unable to open the file" << std::endl;
		return 1;
		}

	while (std::getline(inputFile, line)) {
		if (line.find(searchString) != std::string::npos) {
			std::cout << line << std::endl;
			found = true;
		}	
	}
	
	inputFile.close();

	if (!found) {
		std::cout << "String not found" << std::endl;
	}

	
	
	return 0;




}
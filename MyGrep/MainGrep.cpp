#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void readFile(std::string& searchFile, std::string& searchString) {
	std::ifstream inputFile(searchFile);
	if (!inputFile) {
		throw std::runtime_error("Unable to open the file");
	}
	else {
		std::string line;
		bool found = false;

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
	}
}

void readFileAndReturnLine(std::string& searchFile, std::string& searchString) {
	std::ifstream inputFile(searchFile);
	if (!inputFile) {
		throw std::runtime_error("Unable to open the file");
	}
	else {
		std::string line;
		bool found = false;
		int lineNumber = 0;

		while (std::getline(inputFile, line)) {
			lineNumber++;
			if (line.find(searchString) != std::string::npos) {
				std::cout << lineNumber << ":     " << line << std::endl;
				found = true;
			}
		}

		inputFile.close();

		if (!found) {
			std::cout << "String not found" << std::endl;
		}
	}
}

void readFileAndReturnLineAmount(std::string& searchFile, std::string& searchString) {
	std::ifstream inputFile(searchFile);
	if (!inputFile) {
		throw std::runtime_error("Unable to open the file");
	}
	else {
		std::string line;
		bool found = false;
		int lineNumber = 0;
		int lineOccurences = 0;

		while (std::getline(inputFile, line)) {
			lineNumber++;
			if (line.find(searchString) != std::string::npos) {
				lineOccurences++;
				std::cout << line << std::endl;
				std::cout << " " << std::endl;
				found = true;
			}
		}
		if (lineOccurences > 0) {
			std::cout << "     Occurences of lines containing \"" << searchString << "\": " << lineOccurences << std::endl;
		}
		inputFile.close();

		if (!found) {
			std::cout << "String not found" << std::endl;
		}
	}
}

int main(int argc, char* argv[]) {
	
	std::string searchSentence;
	std::string searchString;
	std::string option;
	std::string firstArgument;
	std::string searchFile;


	if (argc < 2) {

		std::cout << "Give a string from which to search from: " << std::endl;
		std::getline(std::cin, searchSentence);
		std::cout << "Give search string: " << std::endl;
		std::getline(std::cin, searchString);

		size_t wordPosition = searchSentence.find(searchString);

		if (wordPosition != std::string::npos) {
			std::cout << "String \"" << searchString << "\" found in \"" << searchSentence << "\" at position " << wordPosition << std::endl;
		}
		else {
			std::cout << "String \"" << searchString << "\" was not found in \"" << searchSentence << "\"" << std::endl;
		}
	}
	else if (argc == 3) {
		searchString = argv[1];
		searchFile = argv[2];

		try {
			readFile(searchFile, searchString);
		}
		catch (const std::runtime_error& err) {
			std::cerr << "Error: " << err.what() << std::endl;
			return 1;
		}
	}
	else if (argc > 3) {
		firstArgument = argv[1];
		searchString = argv[2];
		searchFile = argv[3];

		if (firstArgument == "-ol") {
			try {
				readFileAndReturnLine(searchFile, searchString);
			}
			catch (const std::runtime_error& err) {
				std::cerr << "Error: " << err.what() << std::endl;
				return 1;
			}
		}
			else if (firstArgument == "-oo") {
				try {
					readFileAndReturnLineAmount(searchFile, searchString);
				}
				catch (const std::runtime_error& err) {
					std::cerr << "Error: " << err.what() << std::endl;
					return 1;
				}
			}
		
		
	}


		return 0;




		}
	
#include <iostream>
#include <string>

int main() {

	std::string searchSentence;
	std::string searchString;

	std::cout << "Give a string from which to search for: " << std::endl;
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

	return 0;




}
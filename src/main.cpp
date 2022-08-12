#include <iostream>

/// This is the main function, it only shows Hello World.
int main(int argc, char const *argv[]){
	std::cout << "Hello World\n";
	if(argc == 2){
		std::cout << "Hello World false\n";
	}
	return 0;
}
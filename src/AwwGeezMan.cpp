//Nafisul Khondaker
//9.28.2020

#include "Morty.hpp"

using std::string;
using interdimensional::args;

int main(int ac, char** av) {
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)" 
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;
		
		return -1;
	}
	args inp = interdimensional::parseArgs(ac, av);
	switch (inp.dim) {
	case interdimensional::C137: 
		C137::Morty(inp);
		break;
	case interdimensional::Z286:
		Z286::Morty(inp);
		break;
	default:
		std::cout << "ERROR: Unknown dimension!!" << std::endl;
	}

	return 0;
}



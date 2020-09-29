//Nafisul Khondaker
//9.28.2020

#include <iostream>
#include <string>

Extra credit below:
namespace interdimensional {
	enum dimension { UNKNOWN = -1, C137, Z286 };

	struct args {
		int start;
		int stop;
		int step;
		dimension dim;
	};
	args parseArgs(int c, char** v);

}

namespace C137 {
	void Morty(interdimensional::args);
}

namespace Z286 {
	void Morty(interdimensional::args);
}

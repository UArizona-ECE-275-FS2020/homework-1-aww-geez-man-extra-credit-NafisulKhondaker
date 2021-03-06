//Nafisul Khondaker
//9.28.2020

#include "Morty.hpp"

using std::cout;
using std::endl;
using interdimensional::args;

args interdimensional::parseArgs(int c, char** v) {
	args inp;
	std::string s = *(v + c - 1);
	if (c == 4) {
		inp.start = atoi(*(v + 1));
		inp.stop = atoi(*(v + 2));
		inp.step = 1;
		if (s == "C137") {
			inp.dim = C137;
		}
		else if (s == "Z286") {
			inp.dim = Z286;
		}
		else {
			inp.dim = UNKNOWN;
		}
	}
	else {
		inp.start = atoi(*(v + 1));
		inp.stop = atoi(*(v + 2));
		inp.step = atoi(*(v + 3));
		if (s == "C137") {
			inp.dim = C137;
		}
		else if (s == "Z286") {
			inp.dim = Z286;
		}
		else {
			inp.dim = UNKNOWN;
		}
	}
	return inp;
}

void C137::Morty(args x) {
	cout << "Morty C137 says:" << endl;
	for (int i = x.start; i <= x.stop; i += x.step) {
		if (i % 15 == 0) {
			cout << i << ": Aww Geez Man" << endl;
		}
		else if (i % 3 == 0) {
			cout << i << ": Aww" << endl;
		}
		else if (i % 5 == 0) {
			cout << i << ": Geez" << endl;
		}
		else {
			cout << i << ": " << endl;
		}
	}
}

void Z286::Morty(args x) {
	cout << "Morty Z286 says:" << endl;
	for (int i = x.start; i <= x.stop; i += x.step) {
		if (i % 15 == 0) {
			cout << i << ": naM zeeG wwA" << endl;
		}
		else if (i % 3 == 0) {
			cout << i << ": wwA" << endl;
		}
		else if (i % 5 == 0) {
			cout << i << ": zeeG" << endl;
		}
		else {
			cout << i << ": " << endl;
		}
	}
}

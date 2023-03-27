#include <iostream>

using namespace std;

bool notcalc(bool A) {
	return !A;
}

bool xorcalc(bool A, bool B) {
	if (A != B) return true;
	else return false;
}

bool orcalc(bool A, bool B) {
	if (A == false && B == false)return false;
	else return true;
}

bool andcalc(bool A, bool B) {
	if (A == true && B == true) return true;
	else return false;
}
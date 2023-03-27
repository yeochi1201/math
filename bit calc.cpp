#include <iostream>
#define end 16
using namespace std;

//16bit 기준 연산

string BitAnd(string A, string B) {
	string res = "";
	for (int i = 0; i < end; i++) {
		if (A[i] == '1' && B[i] == '1') res += '1';
		else res += '0';
	}
	return res;
}

string BitOr(string A, string B) {
	string res = "";
	for (int i = 0; i < end; i++) {
		if (A[i] == '0' && B[i] == '0') res += '0';
		else res += '1';
	}
	return res;
}

string BitXor(string A, string B) {
	string res = "";
	for (int i = 0; i < end; i++) {
		if (A[i] != B[i])res += '1';
		else res += '0';
	}
	return res;
}

string BitNo(string A) {
	string res = "";
	for (int i = 0; i < end; i++) {
		if (A[i] == '0')res += '1';
		else res += '0';
	}
	return res;
}

string BitLeft(string A) {
	string res;
	for (int i = 0; i < end - 1; i++)
		A[i] = A[i + 1];
	A[15] = 0;

	return res;
}

string BitRight(string A) {
	string res;
	for (int i = end - 1; i > 0; i--)
		A[i] = A[i - 1];
	A[0] = 0;
	return res;
}
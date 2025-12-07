#include "X0_write.h"
#include <iostream>
using namespace std;
void write_board(int a, int b, int c)
{
	for (int i = 0; i < 3; i++) {
		if (a == 1) {
			if (i == 1) {
				cout << " X ";
			}
			else {
				cout << "X X";
			}
		}
		else if (a == 0) {
			if (i == 1) {
				cout << "0 0";
			}
			else {
				cout << " 0 ";
			}
		}
		else if (a == 2) {
			cout << "[ ]";
		}
		cout << "   ";
		if (b == 1) {
			if (i == 1) {
				cout << " X ";
			}
			else {
				cout << "X X";
			}
		}
		else if (b == 0) {
			if (i == 1) {
				cout << "0 0";
			}
			else {
				cout << " 0 ";
			}
		}
		else if (b == 2) {
			cout << "[ ]";
		}
		cout << "   ";
		if (c == 1) {
			if (i == 1) {
				cout << " X ";
			}
			else {
				cout << "X X";
			}
		}
		else if (c == 0) {
			if (i == 1) {
				cout << "0 0";
			}
			else {
				cout << " 0 ";
			}
		}
		else if (c == 2) {
			cout << "[ ]";
		}
		cout << endl;
	}
	cout << " " << endl;
}

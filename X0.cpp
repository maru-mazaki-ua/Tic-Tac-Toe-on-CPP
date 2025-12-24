#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include "X0_write.h"
using namespace std;
int main() {
	int score1 = 0;
	int score2 = 0;
	int p1won = 0;
	int p2won = 0;
	int rounds = 0;
	int board[3][3]{};
	char start = 0;
	string player1 = "p1";
	string player2 = "p2";
	int x = 0;
	int y = 0;
	cout << "Hello.";
	this_thread::sleep_for(chrono::seconds(1));
	system("cls");
	cout << "And ";
	this_thread::sleep_for(chrono::milliseconds(200));
	cout << "wel";
	this_thread::sleep_for(chrono::milliseconds(300));
	cout << "co";
	this_thread::sleep_for(chrono::milliseconds(200));
	cout << "me";
	this_thread::sleep_for(chrono::milliseconds(100));
	cout << " to";
	this_thread::sleep_for(chrono::milliseconds(200));
	cout << " the";
	this_thread::sleep_for(chrono::milliseconds(200));
	cout << " BEST ";
	this_thread::sleep_for(chrono::milliseconds(400));
	cout << "GAME ";
	this_thread::sleep_for(chrono::milliseconds(100));
	cout << "IN ";
	this_thread::sleep_for(chrono::milliseconds(100));
	cout << "THE ";
	this_thread::sleep_for(chrono::milliseconds(100));
	cout << "WHO";
	for (int o = 0; o < 20; o++) {
		cout << "O";
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	cout << "LE ";
	this_thread::sleep_for(chrono::milliseconds(100));
	cout << "WO";
	for (int o = 0; o < 10; o++) {
		cout << "O";
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	cout << "RLD!";
	this_thread::sleep_for(chrono::seconds(3));
	system("cls");
	this_thread::sleep_for(chrono::seconds(2));
	cout << "It's ";
	this_thread::sleep_for(chrono::milliseconds(100));
	cout << "called..." << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << endl;
	cout << "[=---[]---=] (O) [=---]" << endl;
	this_thread::sleep_for(chrono::milliseconds(50));
	cout << "I    |/    I     [    I" << endl;
	this_thread::sleep_for(chrono::milliseconds(50));
	cout << "     I        I  I     " << endl;
	this_thread::sleep_for(chrono::milliseconds(50));
	cout << "     |        |  [    I" << endl;
	this_thread::sleep_for(chrono::milliseconds(50));
	cout << "    _I_       I  [L___]" << endl;
	this_thread::sleep_for(chrono::seconds(1));
	for (int space = 0; space < 24; space++) {
		cout << " ";
	}
	cout << "[=---[]---=]  _A_  [=---]" << endl;
	this_thread::sleep_for(chrono::milliseconds(50));
	for (int space = 0; space < 24; space++) {
		cout << " ";
	}
	cout << "I    |/    I  I I  [    I" << endl;
	this_thread::sleep_for(chrono::milliseconds(50));
	for (int space = 0; space < 24; space++) {
		cout << " ";
	}
	cout << "     I       _I-I_ I     " << endl;
	this_thread::sleep_for(chrono::milliseconds(50));
	for (int space = 0; space < 24; space++) {
		cout << " ";
	}
	cout << "     |       [   ] [    I" << endl;
	this_thread::sleep_for(chrono::milliseconds(50));
	for (int space = 0; space < 24; space++) {
		cout << " ";
	}
	cout << "    _I_      I   I [L___]" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	for (int space = 0; space < 50; space++) {
		cout << " ";
	}
	cout << "[=---[]---=] _A[]A_  [=---]  [I]" << endl;
	this_thread::sleep_for(chrono::milliseconds(200));
	for (int space = 0; space < 50; space++) {
		cout << " ";
	}
	cout << "I    |/    I I[  ]I  [    I  ^I^" << endl;
	this_thread::sleep_for(chrono::milliseconds(200));
	for (int space = 0; space < 50; space++) {
		cout << " ";
	}
	cout << "     I       I[  ]I  I==]     I" << endl;
	this_thread::sleep_for(chrono::milliseconds(200));
	for (int space = 0; space < 50; space++) {
		cout << " ";
	}
	cout << "     |       I[  ]I  [" << endl;
	this_thread::sleep_for(chrono::milliseconds(200));
	for (int space = 0; space < 50; space++) {
		cout << " ";
	}
	cout << "    _I_      ^V[]V^  [L___]   0" << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << endl;
	cout << "(Includes ASCII-art!)" << endl;
	cout << "With love by Temaru Mazaki, 2025(c)" << endl;
	cout << "Input A to start: ";
	cin >> start;
	if (start == 'A' || start == 'a') {
		system("cls");
		cout << "Okay, first we must know names of our players!" << endl;
		cout << " " << endl;
		cout << "Player 1, your name is: ";
		cin >> player1;
		cout << " " << endl;
		cout << "Thanks, " << player1 << "!" << endl;
		cout << " " << endl;
		cout << "Now, player 2, your name is: ";
		cin >> player2;
		cout << " " << endl;
		cout << "Thanks, " << player2 << "!" << endl;
		cout << " " << endl;
		cout << "Now, " << player1 << " and " << player2 << ", how many rounds do you wanna play?" << endl;
		cin >> rounds;
		while (rounds < 1) {
			cout << "Ah-tah-tah-tah! No minor values or zero!" << endl;
			cout << "So, how many rounds do you wanna play?" << endl;
			cin >> rounds;
		}
		cout << "Okay, " << rounds << " rounds to go!" << endl;
		cout << "Now, let's begin our game!";
		this_thread::sleep_for(chrono::seconds(3));
		system("cls");
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				board[i][j] = 2;
			}
		}
		int turn = 0;
		int gameEnd = 0;
		while (gameEnd != 1) {
			if (turn == 0 && score2 != rounds) {
					p2won = 0;
					cout << player1 << "'s score: " << score1 << "   " << player2 << "'s score: " << score2 << endl;
					cout << " " << endl;
					for (int row = 0; row < 3; row++) {
						write_board(board[row][0], board[row][1], board[row][2]);
					}
					this_thread::sleep_for(chrono::seconds(1));
					cout << "It's " << player1 << "'s turn!" << endl;
					cout << "Write row where your X must be: " << endl;
					cin >> x;
					while ((x - 1) < 0 || (x - 1) > 2) {
						cout << "No-no-no! 1, 2 or 3 only! Try again!" << endl;
						cin >> x;
					}
					cout << "Now write column where your X must be: " << endl;
					cin >> y;
					while ((y - 1) < 0 || (y - 1) > 2) {
						cout << "No-no-no! 1, 2 or 3 only! Try again!" << endl;
						cin >> y;
					}
					while (board[x - 1][y - 1] != 2) {
						cout << "Don't write position that is already filled with X or 0!" << endl;
						cout << "Write row where your X must be: " << endl;
						cin >> x;
						while ((x - 1) < 0 || (x - 1) > 2) {
							cout << "No-no-no! 1, 2 or 3 only! Try again!" << endl;
							cin >> x;
						}
						cout << "Now write column where your X must be: " << endl;
						cin >> y;
						while ((y - 1) < 0 || (y - 1) > 2) {
							cout << "No-no-no! 1, 2 or 3 only! Try again!" << endl;
							cin >> y;
						}
					}
					board[x - 1][y - 1] = 1;
					for (int i = 0; i < 3; i++) {
						if (board[i][0] == 1 && board[i][1] == 1 && board[i][2] == 1) {
							p1won = 1;
						}
					}
					for (int j = 0; j < 3; j++) {
						if (board[0][j] == 1 && board[1][j] == 1 && board[2][j] == 1) {
							p1won = 1;
						}
					}
					if (board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1) {
						p1won = 1;
					}
					if (board[2][0] == 1 && board[1][1] == 1 && board[0][2] == 1) {
						p1won = 1;
					}
					if (p1won == 1) {
						score1++;
						for (int i = 0; i < 3; i++) {
							for (int j = 0; j < 3; j++) {
								board[i][j] = 2;
							}
						}
					}
					system("cls");
					turn = 1;
					if (score1 == rounds) {
						gameEnd = 1;
					}
				}
				else if (turn == 1 && score1 != rounds) {
					p1won = 0;
					cout << player1 << "'s score: " << score1 << "   " << player2 << "'s score: " << score2 << endl;
					cout << " " << endl;
					for (int row = 0; row < 3; row++) {
						write_board(board[row][0], board[row][1], board[row][2]);
					}
					this_thread::sleep_for(chrono::seconds(1));
					cout << "It's " << player2 << "'s turn!" << endl;
					cout << "Write row where your 0 must be: " << endl;
					cin >> x;
					while ((x - 1) < 0 || (x - 1) > 2) {
						cout << "No-no-no! 1, 2 or 3 only! Try again!" << endl;
						cin >> x;
					}
					cout << "Now write column where your 0 must be: " << endl;
					cin >> y;
					while ((y - 1) < 0 || (y - 1) > 2) {
						cout << "No-no-no! 1, 2 or 3 only! Try again!" << endl;
						cin >> y;
					}
					while (board[x - 1][y - 1] != 2) {
						cout << "Don't write position that is already filled with X or 0!" << endl;
						cout << "Write row where your X must be: " << endl;
						cin >> x;
						while ((x - 1) < 0 || (x - 1) > 2) {
							cout << "No-no-no! 1, 2 or 3 only! Try again!" << endl;
							cin >> x;
						}
						cout << "Now write column where your X must be: " << endl;
						cin >> y;
						while ((y - 1) < 0 || (y - 1) > 2) {
							cout << "No-no-no! 1, 2 or 3 only! Try again!" << endl;
							cin >> y;
						}
					}
					board[x - 1][y - 1] = 0;
					for (int i = 0; i < 3; i++) {
						if (board[i][0] == 0 && board[i][1] == 0 && board[i][2] == 0) {
							p2won = 1;
						}
					}
					for (int j = 0; j < 3; j++) {
						if (board[0][j] == 0 && board[1][j] == 0 && board[2][j] == 0) {
							p2won = 1;
						}
					}
					if (board[0][0] == 0 && board[1][1] == 0 && board[2][2] == 0) {
						p2won = 1;
					}
					if (board[2][0] == 0 && board[1][1] == 0 && board[0][2] == 0) {
						p2won = 1;
					}
					if (p2won == 1) {
						score2++;
						for (int i = 0; i < 3; i++) {
							for (int j = 0; j < 3; j++) {
								board[i][j] = 2;
							}
						}
					}
					system("cls");
					turn = 0;
					if (score2 == rounds) {
						gameEnd = 1;
					}
				}
		}
		if (score1 == rounds) {
			cout << "Congratulations, " << player1 << "!" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << " " << endl;
			cout << "I I _=_ | |   I I _=_ I I  I" << endl;
			this_thread::sleep_for(chrono::milliseconds(500));
			cout << "^Y^ I I | |   IAI I I INI  ^" << endl;
			this_thread::sleep_for(chrono::milliseconds(500));
			cout << " |  ^=^ ^=^   | | ^=^ I I  o" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			cout << " " << endl;
			cout << "Don't worry, " << player2 << ", you'll get it next time!" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
		}
		else if (score2 == rounds) {
			cout << "Congratulations, " << player2 << "!" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << " " << endl;
			cout << "I I _=_ | |   I I _=_ I I  I" << endl;
			this_thread::sleep_for(chrono::milliseconds(500));
			cout << "^Y^ I I | |   IAI I I INI  ^" << endl;
			this_thread::sleep_for(chrono::milliseconds(500));
			cout << " |  ^=^ ^=^   | | ^=^ I I  o" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			cout << " " << endl;
			cout << "Don't worry, " << player1 << ", you'll get it next time!" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			system("cls");
		}
	}
	else {
		system("cls");
		cout << "\33[31mOops! Something went wrong! Restart the console!";
	}

}


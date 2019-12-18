#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::ifstream;
using std::string;
using std::vector;

void ReadBoardFile(string path) {
	ifstream myfile (path);
	if (myfile) {
		string line;
		while (getline(myfile, line)) {
			cout << line << "\n";
		}
	}
}

void PrintBoard(const vector<vector<int>> board) {
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[i].size(); j++) {
			cout << board[i][j];
		}
		cout << "\n";
	}
}

int main() {
	ReadBoardFile("1.board");
	//PrintBoard(board);
}

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<int> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;
    vector<int> row;
    while (sline >> n >> c && c == ',') {
        row.push_back(n);
    }
    return row;
}

// TODO: change the return type of ReadBoardFile.
vector<vector<int>> ReadBoardFile(string path) {
    ifstream myfile (path);
    // TODO: Declare an empty board variable here with
    // type vector<vector<int>>.
    vector<vector<int>> board{};
    if (myfile) {
        string line;
        while (getline(myfile, line)) {
            // TODO: Replace the "cout" code with a call to ParseLine for each line and push the results of ParseLine to the back of the board.
            vector<int> row = ParseLine(line);
            board.push_back(row);
        }
    }
    // TODO: Return the board variable;
	return board;
}

void PrintBoard(const vector<vector<int>> board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            cout << board[i][j];
        }
        cout << "\n";
    }
}

int main() {
    // TODO: Store the output of ReadBoardFile in the "board" variable.
    auto board = ReadBoardFile("1.board");
    // TODO: Uncomment PrintBoard below to print "board".
    PrintBoard(board);
}

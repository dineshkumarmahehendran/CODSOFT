#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

vector<string> board = {"-", "-", "-",
                        "-", "-", "-",
                        "-", "-", "-"};

void print_board() {
    for (int i = 0; i < 9; ++i) {
        cout << board[i] << " ";
        if ((i + 1) % 3 == 0)
            cout << endl;
    }
}

bool check_win() {
    vector<pair<int, int>> win_conditions = {{0, 1}, {3, 1}, {6, 1}, {0, 3}, {1, 3}, {2, 3}, {0, 4}, {2, 2}};
    for (auto &condition : win_conditions) {
        if (board[condition.first] == board[condition.first + condition.second] &&
            board[condition.first] == board[condition.first + 2 * condition.second] &&
            board[condition.first] != "-")
            return true;
    }
    return false;
}

void take_turn(string player) {
    cout << player << "'s turn. Enter position (1-9): ";
    int position;
    cin >> position;
    while (position < 1 || position > 9 || board[position - 1] != "-") {
        cout << "Invalid position. Enter position (1-9): ";
        cin >> position;
    }
    board[position - 1] = player;
}

int main() {
    print_board();
    string current_player = "X";
    while (true) {
        take_turn(current_player);
        print_board();
        if (check_win()) {
            cout << current_player << " wins!" << endl;
            break;
        }
        if (find(board.begin(), board.end(), "-") == board.end()) {
            cout << "It's a tie!" << endl;
            break;
        }
        current_player = (current_player == "X") ? "O" : "X";
    }
    return 0;
}

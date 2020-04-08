#include <iostream>
using namespace std;

char initBoard[100] = {
    -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
    -1, 0, 0, 0, 0, 0, 0, 0, 0,-1,
    -1, 0, 0, 0, 0, 0, 0, 0, 0,-1,
    -1, 0, 0, 0, 0, 0, 0, 0, 0,-1,
    -1, 0, 0, 0, 0, 0, 0, 0, 0,-1,
    -1, 0, 0, 0, 0, 0, 0, 0, 0,-1,
    -1, 0, 0, 0, 0, 0, 0, 0, 0,-1,
    -1, 0, 0, 0, 0, 0, 0, 0, 0,-1,
    -1, 0, 0, 0, 0, 0, 0, 0, 0,-1,
    -1,-1,-1,-1,-1,-1,-1,-1,-1,-1
};
int solutions = 0;
void showBoard(char board[100]) {
    int i, j;
    for (i = 1; i <= 8; i++) {
        for (j = 1; j <= 8; j++) {
            (board[10 * i + j] == 'Q') ? cout <<"Q " :cout <<"。 ";
        }
        cout <<"\n";
    }
    cout <<"\n";
}

void putOneQueen(char board[100], int n) {
    if (n > 8) {
        showBoard(board);
        solutions++;
        return;
    }
    int dir[3] = {9,10,11}; // 下方的三個方向
    int col, pos, i, j;
    // 檢查nth row上的每一個column(有8個要檢查)
    for (col = 1; col <= 8; col++) {
        // 如果要放上去的地方不在任何一個皇后的勢力範圍內
        if (board[pos = 10 * n + col] == 0) {
            // 放上新皇后
            board[pos] = 'Q';
            // 建立新皇后下方的勢力範圍
            for (i = 0; i < 3; i++)
                for (j = pos + dir[i]; board[j] >= 0; j += dir[i])
                    board[j]++;
            putOneQueen(board, n + 1);
            // 移除此皇后
            board[pos] = 0;
            // 移除此皇后的勢力範圍
            for (i = 0; i < 3; i++)
                for (j = pos + dir[i]; board[j] > 0; j += dir[i])
                    board[j]--;
        }
    }
}
int main() {
    putOneQueen(initBoard, 1);
    cout <<"八皇后問題共有" <<solutions <<"組解\n" ;
}

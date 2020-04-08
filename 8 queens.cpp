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
            (board[10 * i + j] == 'Q') ? cout <<"Q " :cout <<"�C ";
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
    int dir[3] = {9,10,11}; // �U�誺�T�Ӥ�V
    int col, pos, i, j;
    // �ˬdnth row�W���C�@��column(��8�ӭn�ˬd)
    for (col = 1; col <= 8; col++) {
        // �p�G�n��W�h���a�褣�b����@�ӬӦZ���դO�d��
        if (board[pos = 10 * n + col] == 0) {
            // ��W�s�ӦZ
            board[pos] = 'Q';
            // �إ߷s�ӦZ�U�誺�դO�d��
            for (i = 0; i < 3; i++)
                for (j = pos + dir[i]; board[j] >= 0; j += dir[i])
                    board[j]++;
            putOneQueen(board, n + 1);
            // �������ӦZ
            board[pos] = 0;
            // �������ӦZ���դO�d��
            for (i = 0; i < 3; i++)
                for (j = pos + dir[i]; board[j] > 0; j += dir[i])
                    board[j]--;
        }
    }
}
int main() {
    putOneQueen(initBoard, 1);
    cout <<"�K�ӦZ���D�@��" <<solutions <<"�ո�\n" ;
}

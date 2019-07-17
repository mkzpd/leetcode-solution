#include <stdio.h>

typedef int bool;

bool isValidSudoku(char** board, int boardRowSize, int boardColSize) {
    int rows[9][9]={0}; //rows[5][0] means whether number 1('0'+1) in row 5 has appeared.
	int cols[9][9]={0}; //cols[3][8] means whether number 9('8'+1) in col 3 has appeared.
	int blocks[3][3][9]={0};//blocks[0][2][5] means whether number '6' in block 0,2 (row 0~2,col 6~8) has appeared.
	for(int r=0;r<9;r++)    //traverse board r,c
		for(int c=0;c<9;c++)
			if(board[r][c]!='.'){   //skip all number '.'
				int number=board[r][c]-'1'; //calculate the number's index(board's number minus 1)
				if(rows[r][number]++)  //if the number has already appeared once, return false.
                    return 0;
				if(cols[c][number]++) 
                    return 0;
				if(blocks[r/3][c/3][number]++) 
                    return 0;
			}
	return 1;
}

int main()
{
    char *board[] = {
        "53..7....",
        "6..195...",
        ".98....6.",
        "8...6...3",
        "4..8.3..1",
        "7...2...6",
        ".6....28.",
        "...419..5",
        "....8..79"
    };
    int res = isValidSudoku(board,9,9);
    if(1 == res){
        printf("true\n");
    }else{
        printf("false\n");
    }
    return 0;
}


#include <stdio.h>

int main()
{
    int n = 5;
    int arr[5][5] = {0};
    int i, row = 0, col = 0;
    int dir = 0; // 0=right, 1=down, 2=left, 3=up

    int dx[4] = {0, 1, 0, -1};  // row movement
    int dy[4] = {1, 0, -1, 0};  // column movement

    for(i = 1; i <= n*n; i++)
    {
        arr[row][col] = i;

        int nextRow = row + dx[dir];
        int nextCol = col + dy[dir];

        if(nextRow < 0 || nextRow >= n || 
           nextCol < 0 || nextCol >= n || 
           arr[nextRow][nextCol] != 0)
        {
            dir = (dir + 1) % 4;   // change direction
            nextRow = row + dx[dir];
            nextCol = col + dy[dir];
        }

        row = nextRow;
        col = nextCol;
    }

    // Print
    int r, c;

for(r = 0; r < n; r++)
{
    for(c = 0; c < n; c++)
        printf("%3d ", arr[r][c]);
    printf("\n");
}

    return 0;
}

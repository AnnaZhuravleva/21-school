#include <stdio.h>
#include <stdlib.h>
int		get_square(int i);
int		is_valid(int **sudoku, int row, int col, int val);
int		solve(int **sudoku, int val);

 /*

int finder(int l, int x, int y, int **matrix)
{
    int z;

    z = sizeof(matrix[x][y]);
    printf("%d", z);
    if (matrix[x][y][0] == 0 && counter(l,x,y,matrix) == 0)
    {
        matrix[x][y] = (int)malloc(sizeof(matrix[x][y]) + 1);
        matrix[x][y] = (int)malloc(sizeof(matrix[x][y]) + 1);
        //matrix[x][y][z] = l;
       // printf("%d %d",z, matrix[x][y][z]);
    }
    return(0);
}*/
    int		is_valid(int **sudoku, int row, int col, int val)
    {
        int i;
        int j;

        i = 0;
        while (i < 9)
        {
            if (sudoku[i][col] == val || sudoku[row][i] == val)
                return (0);
            i++;
        }
        i = 0;
        j = 0;
        while (i < 3)
        {
            j = 0;
            while (j < 3)
            {
                if (sudoku[row / 3 * 3 + i][col / 3 * 3 + j] == val)
                    return (0);
                j++;
            }
            i++;
        }
        return (1);
    }

    int		solve(int **sudoku, int val)
    {
        int x;
        int y;
        int i;

        x = val / 9;
        y = val % 9;
        i = 1;
        if (val >= 81)
            return (1);
        if (sudoku[x][y] != 0)
            return (solve(sudoku, val + 1));
        while (i < 10)
        {
            if (is_valid(sudoku, x, y, i))
            {
                sudoku[x][y] = i;
                if (solve(sudoku, val + 1))
                    return (1);
                else
                    sudoku[x][y] = 0;
            }
            i++;
        }
        return (0);
    }
int main()
{
    int **a;
    int *b;
    int x;
    int y;
    int s;
    char *str;

    x = y = 0;

    a = (int **)malloc(sizeof(int *) * 9);

    a[0] = (int*)malloc(sizeof(*a) * 9);
    a[1] = (int*)malloc(sizeof(*a) * 9);
    a[2] = (int*)malloc(sizeof(*a) * 9);
    a[3] = (int*)malloc(sizeof(*a) * 9);
    a[4] = (int*)malloc(sizeof(*a) * 9);
    a[5] = (int*)malloc(sizeof(*a) * 9);
    a[6] = (int*)malloc(sizeof(*a) * 9);
    a[7] = (int*)malloc(sizeof(*a) * 9);
    a[8] = (int*)malloc(sizeof(*a) * 9);

    str = "900070000200090053060012400840001090500000800031004000003700680090050741470000000";

    while (x < 9)
    {
        y = 0;
        while (y < 9)
        {
            a[x][y] = str[s] - '0';
            y++;
            s++;
        }
        x++;
    }
    

  


    //counter(1,0,0, *a);
    //finder(9, 0,0,*a);*/
    
    solve(a, 1);
    y = x = 0;
    while (x < 9)
    {
        y = 0;
        while (y < 9)
        {
            printf("%d", a[x][y]);
            y++;
        }
        printf("\n");
        x++;
    }

    
    return(0);
}

//
"900070000" "200090053" "060012400" "840001090" "500000800" "031004000" "003700680" "090050741" "470000000"
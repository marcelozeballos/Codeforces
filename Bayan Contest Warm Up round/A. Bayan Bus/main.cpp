#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{

    int n; fscanf(stdin, "%d", &n);
    if(n == 0){
        fprintf(stdout, "+------------------------+\n");
        fprintf(stdout, "|#.#.#.#.#.#.#.#.#.#.#.|D|)\n");
        fprintf(stdout, "|#.#.#.#.#.#.#.#.#.#.#.|.|\n");
        fprintf(stdout, "|#.......................|\n");
        fprintf(stdout, "|#.#.#.#.#.#.#.#.#.#.#.|.|)\n");
        fprintf(stdout, "+------------------------+\n");
    }
    else{
    bool grid[5][13];
    memset(grid, 0, sizeof grid);
    int i = 0, j = 0;
    while(true)
    {
        if(i == 2 && j > 0)
        {
            i++;
            continue;
        }
        if(grid[i][j] == false)
        {
            grid[i][j] = true;
            i++;
            n--;
        }
        if(i == 4){
            j++;
            i = 0;
        }
        if(j == 11 || n == 0)
            break;
    }


    fprintf(stdout, "+------------------------+\n");
    fprintf(stdout, "|");
    for(int i = 0,j = 0; i < 11; i++){
        if(grid[j][i] == true)
            fprintf(stdout, "O.");
        else
            fprintf(stdout, "#.");
    }
    fprintf(stdout, "|D|)\n");
    fprintf(stdout, "|");
    for(int i = 0,j = 1; i < 11; i++){
        if(grid[j][i] == true)
            fprintf(stdout, "O.");
        else
            fprintf(stdout, "#.");
    }
    fprintf(stdout, "|.|\n");
    fprintf(stdout, "|");
    if(grid[2][0] == true)
        fprintf(stdout, "O.......................|\n");
    else
        fprintf(stdout, "#.......................|\n");
    fprintf(stdout, "|");
    for(int i = 0, j = 3;i < 11; i++)
    {
        if(grid[j][i] == true)
            fprintf(stdout, "O.");
        else
            fprintf(stdout, "#.");
    }
    fprintf(stdout, "|.|)\n");
    fprintf(stdout, "+------------------------+\n");

    }

    return 0;
}

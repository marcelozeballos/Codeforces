#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int ants; fscanf(stdin, "%d", &ants);

    long long arra[ants];
    for(int i = 0; i < ants; i++)
        cin >> arra[i];

    int cases; fscanf(stdin, "%d", &cases);

    while(cases--)
    {
        int lo, hi; fscanf(stdin, "%d %d", &lo, &hi);
        int auxl = lo, auxh = hi;
        lo -= 1;
        hi -= 1;
        int len = auxh - auxl +1;
        int battlepoints[len];
        memset(battlepoints, 0, sizeof battlepoints);


        for(int i = lo; i <= hi; i++)
        {
            for(int j = lo; j <= hi; j++)
            {
                if(i != j){
                    if(arra[i]%arra[j] == 0)
                        battlepoints[i]++;
                    if(arra[j]%arra[i] == 0)
                        battlepoints[j]++;
                }
            }
        }

        int eat;
        if(auxh-auxl == 1)
            eat = 1;
        else
            eat = (auxh-auxl)+1;
        for(int i = 0; i < auxh; i++)
        {
            int points = battlepoints[i];
            if(points == ((auxh)-(auxl)))
                eat--;
        }

        fprintf(stdout, "%d\n", eat);
    }
}

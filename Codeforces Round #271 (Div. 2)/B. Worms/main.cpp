#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int piles, queries;
    long long label;

    fscanf(stdin,"%d",&piles);
    long long parr[piles];

    long long start = 0,aux;
    for(int i = 0; i < piles; i++){
        fscanf(stdin,"%ll",&aux);
        start+=aux;
        parr[i]=start;
    }

    fscanf(stdin,"%d",&queries);

    while(queries--)
    {
        fscanf(stdin,"%ll",&label);

        for(int i = 0; i < piles; i++){
            if(label <= parr[i]){
                fprintf(stdout,"%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}

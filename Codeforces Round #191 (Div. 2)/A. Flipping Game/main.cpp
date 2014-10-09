#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
    int len; fscanf(stdin, "%d", &len);
    int arr[len];

    for(int i = 0; i < len; i++)
        fscanf(stdin, "%d", &arr[i]);

    int ones = 0, maximum = -1, aux = 0;

    for(int i = 0; i < len; i++)
    {
        if(arr[i] == 1){
            aux = 0;
            ones++;
        }
        else if(arr[i] == 0 ){
            aux++;
            maximum = max(maximum, aux);
        }
    }

    fprintf(stdout, "%d\n", maximum+ones);

    return 0;
}

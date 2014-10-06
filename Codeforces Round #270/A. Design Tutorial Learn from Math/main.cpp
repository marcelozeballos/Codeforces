#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

bool isNotPrime(int n)
{
    int cnt = 0;
    for(int i = 1; i < (n/2)+1; i++)
        if(n%i == 0)
            cnt++;
    if(cnt > 1)
        return true;
    else if(cnt == 1)
        return false;
}

int main()
{
    int num; fscanf(stdin, "%d", &num);
    int f1, f2;
    bool found = false;
    for(int i = 4; i < num; i++){
        for(int j = 4 ; j < num; j++){
            if(i+j == num && isNotPrime(j) && isNotPrime(i))
            {
                f1 = i;
                f2 = j;
                found = true;
                break;
            }
        }
        if(found)
            break;
    }
    fprintf(stdout, "%d %d\n", f1, f2);

    return 0;
}

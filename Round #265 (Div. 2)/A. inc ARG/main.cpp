#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    int n; fscanf(stdin,"%d", &n);
    string str; cin >> str;
    string compare;
    compare = str;

    for(int i = 0; i < n; i++){
        if(str[i] == '1')
            str[i] = '0';
        else
        {
            str[i] = '1';
            break;
        }
    }

    int cnt = 0;
    for(int i= 0; i < n; i++)
        if(str[i] != compare[i])
            cnt++;

    fprintf(stdout,"%d\n", cnt);
}

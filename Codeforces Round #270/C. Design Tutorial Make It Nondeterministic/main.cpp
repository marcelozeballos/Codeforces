#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
typedef pair <string,string> ss;
typedef vector <ss> vss;

int main()
{
    int len; fscanf(stdin, "%d", &len);
    map<int,ss> handles;
    int cnt = 1;

    for(int i = 0; i < len; i++){
        ss auxt;
        string aux1, aux2;
        cin >> aux1 >> aux2;
        auxt.first = aux1, auxt.second = aux2;
        handles[cnt] = auxt;
        cnt++;
    }

    int order[len];
    for(int i = 0; i < len; i++)
        fscanf(stdin, "%d", &order[i]);



    return 0;
}

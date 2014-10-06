#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    int n,m;
    fscanf(stdin,"%d %d",&n,&m);
    string aux1,aux2;

    cin >> aux1 >> aux2;
    if((aux1[0]=='>' && aux2[0]== 'v') || (aux1[0]=='<' && aux2[0]== '^')){
        fprintf(stdout,"NO");
        return 0;
    }
    if((aux1[0]=='>' && aux2[m-1]== '^') || (aux1[0]=='<' && aux2[m-1]== 'v')){
        fprintf(stdout,"NO");
        return 0;
    }
    if((aux1[n-1]=='>' && aux2[0]== '^') || (aux1[n-1]=='<' && aux2[0]== 'v')){
        fprintf(stdout,"NO");
        return 0;
    }
    if((aux1[n-1]=='>' && aux2[m-1]== 'v') || (aux1[n-1]=='<' && aux2[m-1]== '^')){
        fprintf(stdout,"NO");
        return 0;
    }
    fprintf(stdout,"YES");

    return  0;
}

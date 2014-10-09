#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
#include <bitset>
#include <cstring>
using namespace std;

int main()
{
    int maximum; cin >> maximum;
    bool arr[maximum+1];
    memset(arr, false, sizeof arr);

    for(int i = 0;i < 2; i++)
    {
        int cases; cin >> cases;
        while(cases--){
            int aux; cin >> aux;
            arr[aux] = true;
        }
    }

    bool possible = true;
    for(int i = 1; i <= maximum; i++){
        if(arr[i] != true)
        {
            possible = false;
            break;
        }
    }
    if(possible)
        cout << "I become the guy.\n";
    else
        cout << "Oh, my keyboard!\n";

    return 0;
}

#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <cstdlib>
using namespace std;

int main()
{
    int piles; fscanf(stdin, "%d", &piles);
    int sum = 0;
    vector <int> vec;

    for(int i =0; i < piles; i++){
        int aux;
        fscanf(stdin, "%d", &aux);
        sum += aux;
        vec.push_back(sum);
    }

    int queries; fscanf(stdin, "%d", &queries);

    for(int i = 0; i < queries; i++){
        int worm;
        fscanf(stdin, "%d", &worm);
        int pos = distance(vec.begin(),lower_bound(vec.begin(),vec.end(),worm))+1;
        fprintf(stdout, "%d\n", pos);
    }
    return 0;
}

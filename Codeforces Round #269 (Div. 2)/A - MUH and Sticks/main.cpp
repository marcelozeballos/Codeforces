#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int arr[6];

    for(int i = 0; i < 6; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr+6);

    if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3]){
        if (arr[4] == arr[5])
            printf("Elephant\n");
        else
            printf("Bear\n");
    }

    else if (arr[4] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3]){
        if (arr[0] == arr[5])
            printf("Elephant\n");
        else
            printf("Bear\n");
    }

    else if (arr[4] == arr[5] && arr[5] == arr[2] && arr[2] == arr[3]){
        if (arr[0] == arr[1])
            printf("Elephant\n");
        else
            printf("Bear\n");
    }

    else
        printf("Alien\n");

    return 0;
}

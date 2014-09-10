#include <iostream>
#include <string>
#include <cstdio>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string number; cin >> number;
    int quer; fscanf(stdin,"%d", &quer);
    string cad;
    while(quer--)
    {
        string aux; cin >> aux;

        char r = aux[0];
        string em;
        for(int i = 3; i < aux.size(); i++)
            em += aux[i];


        for(int i = 0; i < number.size(); i++){
            if(number[i] == r){
                cad+=em;
                //number.erase(i,1);
                //number.insert(i,em);
            } else {
                cad+=number[i];
            }
        }
        //number=cad;

    }
     stringstream sso(cad);

        unsigned long long int num;
        sso >> num;
    cout << num%1000000007 << endl;
}

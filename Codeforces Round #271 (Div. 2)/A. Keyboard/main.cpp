#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char inst; cin >> inst;
    string line; cin >> line;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string changed;
    if(inst == 'L'){
        for(int i = 0; i < (int)line.size(); i++)
        {
            if(line[i] != 'p' && line[i] != ';' && line[i] != '/')
            {
                char aux = line[i];
                int pos = keyboard.find(aux);
                changed += keyboard[pos+1];
            }
            else
                changed += line[i];
        }
    }
    else if(inst == 'R'){
        for(int i = 0; i < (int)line.size(); i++)
        {
            if(line[i] != 'q' && line[i] != 'a' && line[i] != 'z')
            {
                char aux = line[i];
                int pos = keyboard.find(aux);
                changed += keyboard[pos-1];
            }
            else
                changed += line[i];
        }
    }

    cout << changed << endl;

    return 0;
}

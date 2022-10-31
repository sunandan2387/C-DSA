#include <iostream>
#include <string.h>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
    string s1 = "AKHDSGFBASDKHF";
    for (int i = 0; i < s1.length();i++){
        s1[i] += 32;
    }
        cout <<s1  << endl;

    return 0;
}
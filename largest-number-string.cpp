#include <iostream>
#include <string.h>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
    string s1 = "49856349856";
    for (int i = 0; i < s1.length();i++){
        sort(s1.begin(), s1.end(), greater<int>());
    }
        cout <<s1  << endl;

    return 0;
}
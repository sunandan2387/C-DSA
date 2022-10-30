#include <iostream>
#include <string.h>

using namespace std;

int main(){
// by input
    string str;
    cin >> str;
    cout << str<<endl;
//by declaration
    string str1 = "sunandan";
    cout << str1<<endl;
//repetitive character
    string str2(5, 'a');
    cout << str2 << endl;

    return 0;
}
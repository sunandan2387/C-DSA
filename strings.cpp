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
//with spaces
    string str3;
    getline(cin, str3);
    cout << str3 << endl;
    //add strings

    string s1 = "fam";
    string s2 = "ily";
    s1 = s1 + s2;
    cout << s1 << endl;
    //delete string
    string abc = "asufkgaalf";
    abc.clear();
    //compare strings
    string comp1 = "abc";
    string comp2 = "abc";
    cout << comp2.compare(comp1) << endl;
    //check empety string
    string check;
    if(check.empty()){
        cout << "empty" << endl;
    }
    //delete characters in string
    string del = "hundasgry";
    del.erase(3, 3);
    cout << del << endl;
    //fing substring
    string fin = "computer";
    cout << fin.find("put") << endl;
    //insert in string
    string ins = "comter";
    ins.insert(3, "pu");
    //find length/size of string
    string len = "computer";
    int a = len.length();
    return 0;
}
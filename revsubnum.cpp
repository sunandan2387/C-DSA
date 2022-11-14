#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string n,rev;
    getline(cin,n);
    rev = n;
    reverse(rev.begin(), rev.end());

    cout << stoi(n)-stoi(rev) << endl;
}
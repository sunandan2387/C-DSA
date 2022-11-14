#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<ctype.h>

using namespace std;


int main()
{   int sum=0;
    string n;
    getline(cin, n);
for(int i=0;i<n.length();i++){
    if(isdigit(n[i])){
        sum += n[i]-2;
    }else{
sum += ((int)n[i])-55;
    }
}
 cout <<sum<< endl;
}
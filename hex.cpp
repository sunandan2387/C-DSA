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
    if((int)n[i]>55){
        sum += ((int)n[i])-55;
        
    }else{
 sum += ((int)n[i])-48;
    }
}
 cout <<sum<< endl;
}
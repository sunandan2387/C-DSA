#include <bits/stdc++.h>
#include <string.h>
using namespace std;

main(){

   string wishlist;
   getline(cin,wishlist);
   cin.ignore();
   string item;
   getline(cin,item);


   int start =0, flag =0;
   string word;

   for (int i = 0; i < wishlist.length()+1;i++){
    if( (wishlist[i] == ' ') || (wishlist[i] == '\0')){
        word = wishlist.substr(start, i);
        if(item.compare(word) == 0){
            flag = 1;
        }
        start = i + 2;
    } 
   }
if(flag ==1){
    cout << "yoink" << endl;
}else{
    cout << "yeet" << endl;
}
     

   return 0;
}
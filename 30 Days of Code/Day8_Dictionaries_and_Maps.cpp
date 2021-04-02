#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n; cin>>n;
    map<string, int> phoneBook;
    for(int i=0; i<n; i++){
        string name;
        int no;
        cin>>name>>no;
        phoneBook[name]=no;
    }
    string key;
    while(cin>>key){
        if(phoneBook.find(key)!=phoneBook.end()){
            cout<<key<<"="<<phoneBook.find(key)->second<<endl;
        }
        else {
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}

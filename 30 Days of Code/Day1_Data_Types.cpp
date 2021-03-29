#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int j; 
    double e; 
    string t; 
    
    // Declare second intege, double, and String variables.
    cin>>j>>e;
    cin.ignore(); 
    getline(cin, t);
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cout<<i+j<<endl;
    // Print the sum of both integer variables on a new line.
    cout<<fixed<<setprecision(1)<<d+e<<endl;
    // Print the sum of the double variables on a new line.
    cout<<s+t;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    return 0;

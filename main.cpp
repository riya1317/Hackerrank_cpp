/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    
    // Declare second integer, double, and String variables.
    int x;
    double y;
    string s2;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin>>x;
    cin>>y;
  getline(cin, s2);
  getline(cin, s2);

    // Print the sum of both integer variables on a new line.
    cout<<i+x<<endl;
    // Print the sum of the double variables on a new line.
    double w=d+y;
    cout<<fixed<<setprecision(1)<<w<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + s2 << endl;
    return 0;
}

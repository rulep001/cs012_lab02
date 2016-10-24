#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib> //needed for exit function

using namespace std;

int fileSum (string file);

int main() {
   string filename;
   cout << "Enter the name of the input file: ";
   cin >> filename;
   cout << "Sum: ";
   cout << fileSum(filename) << endl;
   
   return 0;
}

int fileSum (string fileIn) {
   int sum = 0;
   int input;
   ifstream inFS;
   
   inFS.open(fileIn.c_str());
   
   if (!inFS.is_open()) {
      cout << "Error opening " << fileIn << endl;
      exit(1);
   }
   
   else {
      while (inFS >> input) {
         sum += input;
      }
   
      return sum;
   }
}
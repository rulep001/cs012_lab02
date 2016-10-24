#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int charCnt(string filename, char ch) {
   ifstream fin(filename.c_str());
   if (!fin) {
      cout << "Error opening " << filename << endl;
      exit(1);
   }
   int cnt = 0;
   char input;
   while (fin.get(input)) {
      if (input == ch) {
         ++cnt;
      }
   }
   fin.close();   
   return cnt;
}

int main() {
   string filename;
   char ch;
   cout << "Enter the name of the input file: ";
   cin >> filename;
   cout << "Enter a character: ";
   cin >> ch;
   
   cout << "# of " << ch << "'s: " << charCnt(filename, ch) << endl;
   
   return 0;
}
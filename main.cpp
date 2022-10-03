#include <iostream>
#include <string>
using namespace std;
// Functions 
string Astro(string);

int main() {
  // values 
  int caseAm, d, i_0;
  string m;
  //taking in answers
  cin >> caseAm;
  cin >> d;
  cin >> m;
  //
  if (m == 'Jan')
    i_0 = 1;
  else if (m == 'Feb')
    i_0 = 2;
  else if (m == 'Mar')
    i_0 = 3;
  else if (m == 'Apr')
    i_0 = 4;
  else if (m == 'May')
    i_0 = 5;
  else if (m == 'Jun')
    i_0 = 6;
   else if (m == 'Jul')
    i_0 = 7;
      else if (m == 'Aug')
    i_0 = 8;
  else if (m == 'Sep')
    i_0 = 9;
   else if (m == 'Oct')
    i_0 = 10;
      else if (m == 'Nov')
    i_0 = 11;
   else if (m == 'Dec')
    i_0 = 12;
  
  
}
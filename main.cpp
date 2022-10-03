#include <iostream>
#include <string>
using namespace std;
// Functions 
void Astro(int, int );

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
void Astro(int i_o, int d)
(
switch (i_0)
{
case 1:
  if ((i_0 =< 1 ) || (i_0 >=20))
  cout << "Your Astrological sign is Capricorn."<<endl;
else 
  cout << "Your Astrological sign is Aquarius."<< endl;
break;
case 2:
  if ((i_0 =< 1 ) || (i_0 >=19))
  cout << "Your Astrological sign is Aquarius."<<endl;
else 
  cout << "Your Astrological sign is Pisces."<< endl;
break;
case 3:
  if ((i_0 =< 1 ) || (i_0 >=20))
  cout << "Your Astrological sign is Pisces."<<endl;
else 
  cout << "Your Astrological sign is Aries."<< endl;
break;
case 4:
  if ((i_0 =< 1 ) || (i_0 >=20))
  cout << "Your Astrological sign is Aries."<<endl;
else 
  cout << "Your Astrological sign is Taurus."<< endl;
break;
case 5:
  if ((i_0 =< 1 ) || (i_0 >=20))
  cout << "Your Astrological sign is Taurus."<<endl;
else 
  cout << "Your Astrological sign is Gemini."<< endl;
break;
case 6:
  if ((i_0 =< 1 ) || (i_0 >=21))
    cout << "Your Astrological sign is Gemini."<<endl;
  else 
    cout << "Your Astrological sign is Cancer."<< endl;
  break;
case 7:
  if ((i_0 =< 1 ) || (i_0 >=22))
  cout << "Your Astrological sign is Cancer."<<endl;
else 
  cout << "Your Astrological sign is Leo."<< endl;
break;
case 8:
if ((i_0 =< 1 ) || (i_0 >=22))
  cout << "Your Astrological sign is Leo."<<endl;
else 
  cout << "Your Astrological sign is Virgo."<< endl;
break;
case 9:
if ((i_0 =< 1 ) || (i_0 >=21))
  cout << "Your Astrological sign is Virgo."<<endl;
else 
  cout << "Your Astrological sign is Libra."<< endl;
break;
case 10:
if ((i_0 =< 1 ) || (i_0 >=22))
  cout << "Your Astrological sign is Libra."<<endl;
else 
  cout << "Your Astrological sign is Scorpio."<< endl;
break;
case 11:
if ((i_0 =< 1 ) || (i_0 >=22))
  cout << "Your Astrological sign is Scorpio."<<endl;
else 
  cout << "Your Astrological sign is Sagittarius."<< endl;
break;
case 12:
if ((i_0 =< 1 ) || (i_0 >=21))
  cout << "Your Astrological sign is Sagittarius."<<endl;
else 
  cout << "Your Astrological sign is Capricon."<< endl;
break;
  }
return 0;
);

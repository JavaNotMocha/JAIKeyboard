#include <Math>
using namespace std;

//pull values from Math header
  extern int tMode;
  extern double nTETIn;
  extern const int g;
  extern double r;
  
  
  
  
  
  int main() {

  switch(tMode) { /*select tuning system*/
  case 1: n_TET();
  break;
  
  case 2: twelveTETFunc();
  break;
  
  case 3: limit3Func();
  break;
  
  case 4: limit5Func();
  break;
  
  case 5: pre1();
  break;
  
  case 6: pre2();
  break;
  
  case 7: pre3();
  break;
  
  case 8: pre4();
  break;
  
  case 9: pre5();
  
  break;
  
  case 10: pre6();
  break;
  
  case 11: pre7();
  break;
  
  case 12: pre8();
  break;
  
  case 13: pre9();
  break;
  
  case 14: pre10();
  break;
  
  default: twelveTETFunc();
  }
  
  std::cout <<g_chord[17];
  
}
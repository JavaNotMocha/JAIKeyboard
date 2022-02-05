#include <iostream>
#include <cmath>
using namespace std;

//placeholder inputs. Values only assigned manually for debugging.
int tMode = 1;               //what tuning system is being used? 1=nTET, 2=12TET, 3=lim3, 4 = lim5, 5-15 = presets 1-10
double nTETIn = 31;          //how many notes in an octave
const int g = 49;            //how many notes total
double r = 440;              //frequency of A

/* misc functions */
int fact(int n){
    return std::tgamma(n + 1);
}

/*hexany, octaney, etc array size*/
double hexArr(int m, int n) {
  int p = fact(n)/fact(m) * fact(n-m);
  return p;
}

/*defines how many notes are available. Currently spans 4 octaves.*/
long double g_chord[g];

/*Calculate ratios for intonation of different styles. n-TET is procedural, and therefore ommitted in this section; presets are merely defined.*/
double twelveTET[12] = {1, 1.0594630943593, 1.1224620483094, 1.189207115, 1.2599210498949, 1.33483985417, 1.4142135623731, 1.4983070768767, 1.5874010519682, 1.681792830507, 1.7817974362807, 1.8877486253634};
double limit_3[12] = {1, 1.05349794239, 1.125, 1.18518518519, 1.265625, 1.3333333333, 1.423828125, 1.5, 1.58024691358, 1.6875, 1.777777778, 1.8984375};
double limit_5[12] = {1, 1.06666666667, 1.125, 1.2, 1.25, 1.3333333333333, 1.40625, 1.5, 1.6, 1.666666666667, 1.8, 1.875};
double pre1[g], pre2[g], pre3[g], pre4[g], pre5[g], pre6[g], pre7[g], pre8[g], pre9[g], pre10[g];


  //build scales based on A = r(hZ)
  
  double TET(int k) {
   double z = std::pow(2, k/nTETIn);
   return z;
  }
  
  void n_TET() {
   for(int n = 0; n < g; n++) {
   g_chord[n] = TET(n) * r;
  }}

  void twelveTETFunc() {
   for(int n = 0; n < 12; n++) {
   g_chord[n] = twelveTET[n] * r;
   }
   for(int n = 12; n < 24; n++) {
   g_chord[n] = twelveTET[n] * r*2;
   }
   for(int n = 24; n < 36; n++) {
   g_chord[n] = twelveTET[n] * r*4;
   }
   for(int n = 36; n < 48; n++) {
   g_chord[n] = twelveTET[n] * r*8;
   }
   for(int n = 48; n < 50; n++) {
   g_chord[n] = twelveTET[n] * r*16;
  }}

  void limit3Func() {
   for(int n = 0; n < 12; n++) {
   g_chord[n] = limit_3[n] * r;
   }
   for(int n = 12; n < 24; n++) {
   g_chord[n] = limit_3[n] * r*2;
   }
   for(int n = 24; n < 36; n++) {
   g_chord[n] = limit_3[n] * r*4;
   }
   for(int n = 36; n < 48; n++) {
   g_chord[n] = limit_3[n] * r*8;
   }
   for(int n = 48; n < 50; n++) {
   g_chord[n] = limit_3[n] * r*16;
  }}

  void limit5Func() {
   for(int n = 0; n < 12; n++) {
   g_chord[n] = limit_5[n] * r;
   }
   for(int n = 12; n < 24; n++) {
   g_chord[n] = limit_5[n] * r*2;
   }
   for(int n = 24; n < 36; n++) {
   g_chord[n] = limit_5[n] * r*4;
   }
   for(int n = 36; n < 48; n++) {
   g_chord[n] = limit_5[n] * r*8;
   }
   for(int n = 48; n < 50; n++) {
   g_chord[n] = limit_5[n] * r*16;
  }}

  void pre1() {
   for(int n = 0; n < g; n++) {
   g_chord[n] = pre1[n] * r;
   }}

  void pre2() {
   for(int n = 0; n < g; n++) {
   g_chord[n] = pre2[n] * r;
   }}

  void pre3() {
   for(int n = 0; n < g; n++) {
   g_chord[n] = pre3[n] * r;
   }}

  void pre4() {
   for(int n = 0; n < g; n++) {
   g_chord[n] = pre4[n] * r;
   }}

  void pre5() {
   for(int n = 0; n < g; n++) {
   g_chord[n] = pre5[n] * r;
   }}

  void pre6() {
   for(int n = 0; n < g; n++) {
   g_chord[n] = pre6[n] * r;
   }}

  void pre7() {
   for(int n = 0; n < g; n++) {
   g_chord[n] = pre7[n] * r;
   }}

  void pre8() {
   for(int n = 0; n < g; n++) {
   g_chord[n] = pre8[n] * r;
   }}

  void pre9() {
   for(int n = 0; n < g; n++) {
   g_chord[n] = pre9[n] * r;
   }}

  void pre10() {
   for(int n = 0; n < g; n++) {
   g_chord[n] = pre10[n] * r;
   }}

  }
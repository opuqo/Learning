#include <string.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
//#define RAND_MAX 10000
using namespace std;

class Gauss {
public:
    double M;
    double D2;
    FILE *out;
    int step;
    Gauss(double M1, double D21, int s, FILE *o); 
    void GetGauss();
};

Gauss::Gauss(double M1, double D21, int s, FILE *o) {
 M=M1;
 D2=D21;
 step=s;
 out=o; }

void Gauss::GetGauss() 
    {double N;
     double E[12];
     double SUM=0;
  //   srand(time(NULL));
     for (int i=0;i<step;i++) 
      {
       for (int n=0;n<12;i++) 
       {
         E[n]=127;
         SUM+=E[n];
        }
       N=(SUM-6)*D2+M;
       fprintf(out,"%3.5f",N);
       fprintf(out,"\n");
      }
    }
        

#include <string.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#define PI 3.1415926535
using namespace std;
class Chebish {
public:
	char tip[5];   //тип алгоритма sin или cos
	double N;      //отношение  N=T/dt
	int step;     //число шагов
	double phase;  //фаза
	FILE *out;    //файл
	//char fname[20]; //имя файла с выходными числами

//конструктор
Chebish(char t[5], double Nt, int s, double p, FILE *o);    
//void InitChe();
void GetHarmonic();
};

Chebish::Chebish(char t[5], double Nt, int s, double p, FILE *o) { 
//конструктор инициализует члены класса
  strcpy(tip,t);
  N=Nt;
  step=s;
  phase=p;
  out=o; }

void Chebish::GetHarmonic() {
double u[2];
double U;
double c=2*cos((2*PI/N));
if(!strcmp(tip, "sin"))
 {
    u[1]=sin(phase);
    u[0]=sin(((-2)*PI/N)+phase);
    for(int i=1;i<step+1;i++)
 {
  U=c*u[1]-u[0];
  u[0]=u[1];
  u[1]=U;
  fprintf(out,"%3.5f",U);
  fprintf(out,"\t");
  fprintf(out,"%3.5f",(sin(((2*i*PI)/N)+phase)));
  fprintf(out,"\n");
  }

 }
else 
 {
 u[1]=cos(phase);
 u[0]=(-1)*cos((2*PI/N)-phase);
 for(int i=1;i<step+1;i++)
 {
  U=c*u[1]-u[0];
  u[0]=u[1];
  u[1]=U;
  fprintf(out,"%3.5f",U);
  fprintf(out,"\t");
  fprintf(out,"%3.5f",(cos((i*2*PI/N)+phase)));
  fprintf(out,"\n");
  }

 }

}




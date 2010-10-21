#include <iostream>
#include "Gauss.h"
#include <stdio.h>
using namespace std;

int main(void) 
{ 
  char fname[20];
  double M3;
  double D23;
  int step3;
  FILE *out3;
  cout<<"программа моделирования алгоритма формирования выборки гауссовых случайных чисел с заданными параметрами M и D2\n";
  cout<<"введите M........";
  cin>>M3;
  cout<<"\n введите D2.....";
  cin>>D23;
  cout<<"\n введите количество чисел";
  cin>>step3;
  cout<<"\nвведите имя файла..";
  cin>>fname;
  if((out3=fopen(fname,"wt")) == NULL)
    { 
      cout<<"\n ошибка открытия файла";
      return 0;
    }
  Gauss part(M3, D23, step3, out3);
  part.GetGauss();
fclose(out3); 
 return 0;
  }

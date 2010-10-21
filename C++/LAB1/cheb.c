#include <iostream>
#include "cheb.h"
#include <stdio.h>
using namespace std;

int main(void) {
 char t1[5];
 double N1;
 double ph1;
 FILE *output;
 int step1;
 char fname1[20];
 cout<<"Программа моделирования гармонического процесса \n";
 cout<<"методом Чебышева\n";
 cout<<"Введите тип алгоритма sin или cos....";
 cin>>t1;
 cout<<" Введите N........";
 //scanf("%f",&N1);                           //!!!!
 cin>>N1;
 cout<<N1;
 cout<<" Введите фазу........";
 cin>>ph1;
 cout<<" Введите число шагов.......";
 cin>>step1;
 cout<<"Имя файла для записи......";
 cin>>fname1;
 if((output=fopen(fname1,"wt")) == NULL)
  {
     cout<<"\n Ошибка открытия файла";
     //getch();
     return 0;
  }
 Chebish part(t1, N1, step1, ph1, output);
 part.GetHarmonic();
 fclose(output);
// cout<<"\n ДлЯ выхода нажмите Enter";
// getch();
return 0;
} 

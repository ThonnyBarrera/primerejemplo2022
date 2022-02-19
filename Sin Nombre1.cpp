#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>



using namespace std;
int main()

{
 
 setlocale(LC_CTYPE, "spanish");
 int dia, mes, ano;
 
 cout<<"ingrese el dia:\n";
 cin>>dia;
 
 cout<<"ingrese el mes:\n";
 cin>>mes;

cout<<"ingrese el año:\n";
 cin>>ano;

cout<<"la fecha ingresa es :"<<dia<<"/"<<mes<<"/"<<ano<<endl;

}

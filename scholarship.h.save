#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
class Scholarship
{
   long value;
   public:
       Scholarship():value(0)
       {

       }
       void toscholar(Scholarship s);
       void disp();
       void get(int b);
      // double calc();
       void overview();
       void on_percent();
       void on_LPunest();
       void on_nat_lvl_test();//national lvl test
       void on_sports();//on basis of cultural activities social service,bravery awards
       void on_defence();
       void on_toppers();
       void on_orphan();
       void on_disabilty();
};
void Scholarship::overview()
{
    string s;
    ifstream fin("Overview.txt",ios::in);
    if(fin.eof())
    {
        cout<<"\nError Opening file \"Overview.txt\"";
    }
    else{
    while(!fin.eof())
    {
        getline(fin,s);
        cout<<"\n"<<s;
    }
    }
}
void Scholarship::toscholar(Scholarship t)
{
    system("cls");
    int n;
    string s;
    ifstream fin;
    cout<<"Press:\n\n(1):Overview Of Scholarship"
    <<"\n(2):On the basis of Percentage"
    <<"\n(3):On the basis of LPUNEST"
    <<"\n(4):On the basis of National Level Tests"
    <<"\n(5):On the basis of Sports, Cultural, R&D, Co-curricular, Social Service, Bravery Awards"
    <<"\n(6):Fee Concession for Defence, CAPF personnel and their dependants"
    <<"\n(7):Special Scholarship for Toppers of Education Board"
    <<"\n(8):Scholarship for Orphan Applicants"
    <<"\n(9):Scholarship for Person with Certain Disability"
    <<"\n\nEnter Choice: ";
    cin>>n;
    switch(n)
    {
    case 1:
        system("cls");
        t.overview();
        break;
    case 2:
        system("cls");
    fin.open("onper.txt",ios::in);
    if(fin.eof())
    {
        cout<<"\nError Opening file \"onper.txt\"";
    }
    else{
    while(!fin.eof())
    {
        getline(fin,s);
        cout<<"\n"<<s;
    }
    }
        break;
    case 3:
        system("cls");
    fin.open("onlpunest.txt",ios::in);
    if(fin.eof())
    {
        cout<<"\nError Opening file \"onlpunest.txt\"";
    }
    else{
    while(!fin.eof())
    {
        getline(fin,s);
        cout<<"\n"<<s;
    }
    }
        break;
    case 4:
        system("cls");
    fin.open("onnlt.txt",ios::in);
    if(fin.eof())
    {
        cout<<"\nError Opening file \"onnlt.txt\"";
    }
    else{
    while(!fin.eof())
    {
        getline(fin,s);
        cout<<"\n"<<s;
    }
    }
        break;
    case 5:
        system("cls");
    fin.open("sports.txt",ios::in);
    if(fin.eof())
    {
        cout<<"\nError Opening file \"sports.txt\"";
    }
    else{
    while(!fin.eof())
    {
        getline(fin,s);
        cout<<"\n"<<s;
    }
    }
        break;
    case 6:
        system("cls");
    fin.open("defence.txt",ios::in);
    if(fin.eof())
    {
        cout<<"\nError Opening file \"defence.txt\"";
    }
    else{
    while(!fin.eof())
    {
        getline(fin,s);
        cout<<"\n"<<s;
    }
    }
        break;
    case 7:
        system("cls");
        cout<<"Full Programme Fee waiver, and\n"
        <<"Free Stay in four seater room (Air Cooled Room) in Residential Facility\n"
        <<"Or\nFree Transport Facility.";
        break;
    case 8:
        system("cls");
    fin.open("orphansc.txt",ios::in);
    if(fin.eof())
    {
        cout<<"\nError Opening file \"orphansc.txt\"";
    }
    else{
    while(!fin.eof())
    {
        getline(fin,s);
        cout<<"\n"<<s;
    }
    }
        break;
    case 9:
        system("cls");
    fin.open("disablesc.txt",ios::in);
    if(fin.eof())
    {
        cout<<"\nError Opening file \"disablesc.txt\"";
    }
    else{
    while(!fin.eof())
    {
        getline(fin,s);
        cout<<"\n"<<s;
    }
    }
        break;
    default:
        cout<<"\nWrong Input";
    }
}

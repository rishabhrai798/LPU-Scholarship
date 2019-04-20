#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<dos.h>
#include<stdlib.h>
using namespace std;
class overview
{
    int n;
public:
    void showDetails();
};
void overview::showDetails()
{
    string s;
    int n,n1;
    ifstream fin1("Placements.txt",ios::in);
    ifstream fin2("Ranking.txt",ios::in);
    ifstream fin3("Alumni.txt",ios::in);
    ifstream fin4("Leadership.txt",ios::in);
    cout<<"\nWhat you Wanna know about LPU:\n(1):Placements\n(2):Ranking\n(3):Alumni\n"
    <<"(4):Leadership\n(5):Lpu In Your Town\n\nEnter Choice : ";
    cin>>n;
    switch(n)
    {
    case 1:
        if(fin1.eof())
    {
        cout<<"\nError Opening file \"Overview.txt\"";
    }
    else{
        while(!fin1.eof())
        {
          getline(fin1,s);
          cout<<"\n"<<s<<endl;
        }
    }
    fin1.close();
        break;
    case 2:
        if(fin2.eof())
    {
        cout<<"\nError Opening file \"Overview.txt\"";
    }
    else{
        while(!fin2.eof())
        {
          getline(fin2,s);
          cout<<"\n"<<s<<endl;
        }
    }
    fin2.close();
        break;
    case 3:
        if(fin3.eof())
    {
        cout<<"\nError Opening file \"Overview.txt\"";
    }
    else{
        while(!fin3.eof())
        {
          getline(fin3,s);
          cout<<"\n"<<s<<endl;
        }
    }
    fin3.close();
        break;
    case 4:
        if(fin4.eof())
    {
        cout<<"\nError Opening file \"Overview.txt\"";
    }
    else{
        while(!fin4.eof())
        {
          getline(fin4,s);
          cout<<"\n"<<s<<endl;
        }
    }
    fin4.close();
        break;
    case 5:
        cout<<"\nSelect Your State/city\n(1):Andhra Pradesh\n(2):New Delhi\n(3):Punjab\n(4):Rajasthan\n"
        <<"(5):Telangana\n(6):Uttar Pradesh \nEnter Choice: ";
        cin>>n1;
        switch(n1)
        {
        case 1:
            cout<<"\nVijaywada\nCounselling Office - Vijaywada\n#40-1-60, 1st Floor,"
            <<" Chand Imprea, Opp. Grand Modern Super Market, Beside Yes Bank,Benz Circle\nPhone: 9216656007";
            break;
        case 2:
            cout<<"\nNew Delhi\nCounselling Office - New Delhi\n5-7 Ground floor, World Trade Centre(Lalit Hotel),"
            <<" Barakhamba Lane\nPhone: 011-23416041,011-23709131 ";
            break;
        case 3:
            cout<<"\nBATHINDA\nCounselling Office - BATHINDA\n#3007/2, Corner of Gali No 10-A,"
            <<" Main Ajit Road\nPhone: 9814955664";
            break;
        case 4:
            cout<<"\nKota\nCounselling Office - Kota\n#15,16, Near Allen Safalya, Rajiv Gandhi Nagar\n"
            <<"Phone: 9878426863,9878426875";
            break;
        case 5:
            cout<<"\nHyderabad\nCounselling Office - Hyderabad\n#2/2A, Ameer Estate, SR Nagar Main Road,"
            <<" Sanjeeva Reddy Nagar.\nPhone: 9780036542";
            break;
        case 6:
            cout<<"\nBareilly\nCounselling Office - Bareilly\n15-A, Gulmohar Park, Rajendra Nagar\n"
            <<"Phone: 09415313112,09889061931";
            break;
        default:
            cout<<"\nWrong Input";
        }
        break;
    default:
        cout<<"\nWrong Choice";

    }
    /*while(!fin.eof())
    {
        getline(fin,s);
        cout<<"\n"<<s<<endl;
    }*/
}

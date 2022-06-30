#include <iostream>
#include <time.h>
#include <windows.h>




using namespace std;


int  strzal,a,b,ile,punkty;


//funkcje
void funkcja()
{



    srand(time(NULL));

    a = rand()%10+1;

    b = rand()%10+1;

    cout<<a<<" * "<<b<<" = "; cin>>strzal;

    if(strzal== a*b)
    {system("cls");
        cout<<"dobrze!"<<endl;
        punkty++;
    }
    else
    {
        system("cls");
    cout<<"Zle! "<<"Prawidlowy wynik: "<<a*b<<endl;

    }
}



int main()
{
cout << "MULTIPLICATION TABLE GAME ";
cout<<"          ROSZEK STUDIO 2021"<<endl;
cout<<"Witaj ile dzialan chcesz rozwiazac? "; cin>>ile;



for(int i=0;i<ile;i++)
{
  funkcja();
}


cout<<"KONIEC GRY"<<endl;
cout<<"-------------------------------"<<endl;
cout<<"Liczba punktow: "<<punkty<<"/"<<ile;




    return 0;
}

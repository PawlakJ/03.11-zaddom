#include <iostream>

using namespace std;

int main()
{
   int ilosc_liczb,p,q,liczba1,ilosc_wierszy,i,j;
    cout<<"Podaj ilosc liczb: ";
    cin>>ilosc_liczb;
    cout<<"Podaj przedzial, z ktorego maja byc wylosowane"<<endl;
    cout<<"Poczatek przedzialu : ";
    cin>>p;
    cout<<"Koniec przedzialu : ";
    cin>>q;

    while(p>q)
    {
        cout<<""<<endl;
        cout<<"Bledne dane"<<endl;
        cout<<"Podaj przedzial, z ktorego maja byc wylosowane"<<endl;
        cout<<"Poczatek przedzialu : ";
        cin>>p;
        cout<<"Koniec przedzialu : ";
        cin>>q;
    }
    cout<<"Podaj ilosc wierszy: ";
    cin>>ilosc_wierszy;
    liczbal=p+rand()%(q-p+1);
    for(i=1;i<=ilosc_wierszy;i++)
        {
            for(j=1;j<=ilosc_liczb;j++)
                cout<<liczba1<<" ";
            cout<<" "<<endl;
        }
    system("pause");
    return 0;
}

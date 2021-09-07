#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{

    int option;
    do
    {

        cout<<"\n\nWelcome To Our Hotel"<<endl;
        cout<<"******X Hotel Menu******"<<endl;
        cout<<"Do you need our service for yes 1 exit 0..."<<endl;
        cin>>option;

        switch (option)
        {
        case 1:


            cout<<"Please, Enter Service number else press n"<<endl;
            for(int check = 1; check<=3; check++)
            {
                cout<<"Our Services Below\n"<<endl;
                cout<<"1. Room catagory"<<endl;
                cout<<"2. Food Items\n3. Remain"<<endl;

                switch(check)
                {
                case 1:
                    cout<<"1 for AC-Room n 2 For None-AC-Room."<<endl;
                    break;
                case 2:
                    cout<<"1 for Deshi-Food, 2 for Indian-Food n 3 for Thi-Food"<<endl;
                    break;
                case 3:
                    cout<<"1 for (One Night+One Day)."<<endl;
                    cout<<"2 for (One Night+Two Days)."<<endl;
                    break;

                }

            }

            break;

        case 0:

            cout<<"Exit!!!"<<endl;
            break;

        default :

            cout<<"Enter right number"<<endl;
        }
    }
    while(option != 0);

    return 0;
}

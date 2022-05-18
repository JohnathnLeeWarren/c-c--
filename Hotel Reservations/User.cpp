#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "Employer.cpp"
#include "login_reg.cpp"
///Johnathn Warren///


using namespace std;

int main()
{   //Variables needed for options
    int Rooms;
    int food;
    double check_out;

    // User var for selecting an option.
    int Selection;
    // Menu screen
    cout<<"      ______________________"<<endl;
    cout<<"     |        Welcome       |"<<endl;
    cout<<"     |______________________|"<<endl;
    cout<<"     | 1. Rooms             |"<<endl;
    cout<<"     | 2. Food              |"<<endl;
    cout<<"     | 3. Beverages         |"<<endl;
    cout<<"     | 4. Check out         |"<<endl;
    cout<<"     | 5. Exit              |"<<endl;
    cout<<"     |______________________|"<<endl;

    cout<<"Please make selection: "<<endl;
    cin>>Selection;

    switch(Selection)
    {
        case 1:
            cout<<"-> How many rooms would you like? ";
            cin>>Rooms;
            main();
        case 2:
            system("clear");
            cout<<" ________________________";
            cout<<"| 1. Burgers             |";
            cout<<"| 2. Hotdogs             |";
            cout<<"| 3. Fries               |";
            cout<<"| 4. Chilli Chesse Dogs  |";
            cout<<"| 5. Chilli Chesse Fries |";
            cout<<"| 6. Salads              |";
            cout<<"|________________________|";
            cout<<"-> What kind of Serving would you for your stay? (1-6)";
            cin>>food;
            if(food == 1){
                cout<<"How many would you like? ";
                cin>>sBurgers;
                }else if(food == 2){
                    cout<<"How many would you like? ";
                    cin>>sHotdogs;
                }else if(food == 3){
                    cout<<"How many would you like? ";
                    cin>>sFries;
                }else if(food == 4){
                    cout<<"How many would you like? ";
                    cin>>sCCD;
                }else if(food == 5){
                    cout<<"How many would you like? ";
                    cin>>sCCF;
                }else if(food == 6){
                    cout<<"How many would you like? ";
                    cin>>sSalads;
                }else{
                    cout<<"Invaild";
                }
            main();
        case 3:
            system("clear");
            cout<<" ______________ ";
            cout<<"| 1. Beverages |";
            cout<<"|______________|";
            cout<<"-> How many Beverages would you like for your stay? ";
            cin>>sBeverages;
            main();
        case 4:
            system("clear");
            int tFood =sSalads + sCCF + sCCD + sFries + sHotdogs + sBurgers;
            sting n_y;

            cout<<" _______________________________ ";
            cout<<"|__________Check Out____________|";
            cout<<"| Rooms       |"<<Rooms<<"|     |"
            cout<<"| Food        |"<<tFood<<"|     |";
            cout<<"| Beverages   |"<<sBeverages<<"||";
            cout<<"|                               |";
            cout<<"|                ____________   |";
            cout<<"| Total Amount  |"          "|  |";
            cout<<"|               |____________|  |";
            cout<<"|_______________________________|";
            cout<<"-> Would You like to check out? ";
            cin>>n_y;
            if(n_y == "y"){
                cout<<"Thank you for your reservation! We can't to see you!";
                main();
            }else{
                cout<<"Maybe next time.";
                main();
            }
        case 5:
            exit(0);
    };

    return 0;
}
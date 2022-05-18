#include <iostream>
#include <fstream>
#include <stdlib.h>


using namespace std;


int main()
{   // Set by manager
    int qunitiy;
    int sales = 0;
    double price;
    double check_out;
    double range_price[8];

    /// Qunitiy of rooms
    int Qroom;
    
    // How many are smoking rooms
    int smoking;

    // Qunitiy and Sales of food
    int qBurgers, qFries, qHotdogs, qCCD, qCCF, qSalads, qBeverages;   
    int sBurgers, sFries, sHotdogs, sCCD, sCCF, sSalads, sBeverages;

    system("clear");
    
    cout<<"      ______________________"<<endl;
    cout<<"     |        Welcome       |"<<endl;
    cout<<"     |______________________|"<<endl;
    cout<<"     | 1. Rooms             |"<<endl;
    cout<<"     | 2. Food              |"<<endl;
    cout<<"     | 3. Beverages         |"<<endl;
    cout<<"     | 4. Sales             |"<<endl;
    cout<<"     | 5. Exit              |"<<endl;
    cout<<"     |______________________|"<<endl;
    
     // Managers choice
    int add;
    cout<<"-> Selection: ";
    cin>>add;
    string y_n;

    switch(add){
        case 1:
            system("clear");
            cout<<"-> How many Rooms are available? ";
            cin>>Qroom;
            cout<<"-> How many are Smoking? ";
            cin>>smoking;
            cout<<"Total rooms avaliable: "<<Qroom<<endl;
            cout<<"Total Smoking rooms avaliable: "<<smoking<<endl;
            cin.get();
            main();
        case 2:
            system("clear");
            cout<<"-> How many Burgers? ";
            cin>>qBurgers;
            cout<<"-> How main Hotdogs? ";
            cin>>qHotdogs;
            cout<<"-> How many Fries? ";
            cin>>qFries;
            cout<<"-> How many Chilli Chesse Dogs? ";
            cin>>qCCD;
            cout<<"-> How many Chill Chesse Fries? ";
            cin>>qCCF;
            cout<<"-> How many Salads? ";
            cin>>qSalads;
            cout<<"Total items: "<<qBurgers<<qHotdogs<<qFries<<qCCD<<qCCF<<qSalads<<endl;
            cin.ignore();
            cin.get();
            main();
        case 3:
            system("clear");
            cout<<"How many Beverages? ";
            cin>>qBeverages;
            cout<<"Total items: ";
            cin.ignore();
            cin.get();
            main();
        case 4:
            system("clear");
            cout<<"Sales for the day: $ "<<sales<<endl;
            cout<<"Would you like to set Prices? (y/n)";
            cin>>y_n;
            if(y_n == "y"){
                system("clear");
                cout<<"Set Room prices: $";
                cin>>price; range_price[0] ={price};
                cout<<"Set Burger prices: $";
                cin>>price; range_price[1] ={price};
                cout<<"Set Hotdog prices: $";
                cin>>price; range_price[2] ={price};
                cout<<"Set Fry prices: $";
                cin>>price; range_price[3] ={price};
                cout<<"Set Chilli Chesse Dog prices: $";
                cin>>price; range_price[4] ={price};
                cout<<"Set Chilli Chesse Fry prices: $";
                cin>>price; range_price[5] ={price};
                cout<<"Set Salad prices: $";
                cin>>price; range_price[6] ={price};
                cout<<"Set Beverage prices: $";
                cin>>price; range_price[7] ={price};
            }
            main();
        case 5:
            exit(0);

    };
    



    return 0;
}
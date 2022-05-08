#include <iostream>
using namespace std;

// Class that defines the simple login and signup
class Login {
    // Important varibales for LOGIN
    public:
    string User;
    string Pass;
    string user;
    string pass;
    string Username[1];
    string Password[1];

    void signup() {

        // Storing username & password into respectful variables        
        cout<<"Enter New Username: ";
        cin>>User;
        cout<<"Enter New Password: ";
        cin>>Pass;
        login();

    };

    void login() {

        /* Another Variable for username & password just to check they are
         correct before having access to the Simple ATM */
        cout << "Enter Username: ";
        cin >> user;
        cout << "Enter Password: ";
        cin >> pass;

        // Created an array to store Username and Password
        string Username[]= {User};
        string Password[]= {Pass};

        // If statment just to check the Username is correct
        if(user == Username[0]){
            cout<<"Welcome to Simple ATM"<<endl;
        }
        else{
            // if not correct the program needs to end
            cout<<"Invaild"<<endl;
            exit(0);
            /* thinking of implamenting a check counter so that user can try to access
            the Simple ATM*/
        };
        
        cout<<"Hello "<<user<<endl;
    };
};

int main()
{   
    Login signup;
    signup.signup();
    double balance = 0;
    double deposit;
    int withdraw;
    int select;

    // A do loop for continually user input
    // I didnt want to write a Class or Function for a single menu
    do{    
    cout<<"*********Menu***********"<<endl;
    cout<<"* 1.Check Balance      *"<<endl;
    cout<<"* 2.Deposit            *"<<endl;
    cout<<"* 3.Withdraw           *"<<endl;
    cout<<"* 4.Exit               *"<<endl;
    cout<<"************************"<<endl;
    cout<<"Select: ";
    cin>> select;

    // To find user input
    switch(select){
        case 1: cout<<"Balance is $ " << balance <<endl; break;
        case 2: cout<<"Deposit $ ";
            cin>> deposit;
            balance += deposit; break;
        case 3: cout<<"Withdraw $ ";
            cin>> withdraw;
            if(withdraw <= balance){
                balance -= withdraw;
            }else{ 
                cout<<"invaild"<<endl;
            }break;
    };
    // End of Do loop where condition was met    
    }while(select != 4);

    // End of program
    return 0;
}
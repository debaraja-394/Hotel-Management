#include <iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
    // Quantity of items available
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodle = 0, Qshake = 0, Qchicken = 0;
    // Total quantity sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodle = 0, Sshake = 0, Schicken = 0;
    // Total quantity price
    int Prooms = 0, Ppasta = 0, Pburger = 0, Pnoodle = 0, Pshake = 0, Pchicken = 0;

    cout << "\tThe quantity of items available are:\n";
    cout << "Rooms available\n";
    cin >> Qrooms;
    cout << "Quantity of Pasta:\n";
    cin >> Qpasta;
    cout << "Quantity of Burger:\n";
    cin >> Qburger;
    cout << "Quantity of Noodle:\n";
    cin >> Qnoodle;
    cout << "Quantity of Shake:\n";
    cin >> Qshake;
    cout << "Quantity of Chicken:\n";
    cin >> Qchicken;
    m:
    cout << "\n\n\t\t Please select from the following options:\n";
    cout << "1.Rooms\n";
    cout << "2.Pasta\n";
    cout << "3.Burger\n";
    cout << "4.Noodle\n";
    cout << "5.Shake\n";
    cout << "6.Chicken\n";
    cout << "7.Information regarding sales and collection\n";
    cout << "8.Exit\n";

    cout << "\nPlease enter your choice:";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\nEnter the quantity of rooms you want:";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            Prooms=Prooms+quant*2400;

            cout << "\n\t\t" << quant << "room/rooms has/have been allocated to you!!";
        }
        else
        {
            cout << "\n\t\t" << Qrooms - Srooms << "are the remaining rooms.";
        }
        break;
    case 2:
        cout << "\nEnter the quantity of pasta you want:";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Ppasta=Ppasta+quant*40;

            cout << "\n\t\t" << quant << "pastas is the order!!";
        }
        else
        {
            cout << "\n\t\t" << Qpasta - Spasta << "pastas are remaining.";
        }
        break;
    case 3:
        cout << "\nEnter the quantity of burger you want:";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Pburger=Pburger+quant*45;

            cout << "\n\t\t" << quant << "burger is the order!!";
        }
        else
        {
            cout << "\n\t\t" << Qburger - Sburger << "burgers are remaining.";
        }
    case 4:
        cout << "\nEnter the quantity of noodles you want:";
        cin >> quant;
        if (Qnoodle - Snoodle >= quant)
        {
            Snoodle = Snoodle + quant;
            Pnoodle=Pnoodle+quant*30;

            cout << "\n\t\t" << quant << "noodles is the order!!";
        }
        else
        {
            cout << "\n\t\t" << Qnoodle - Snoodle << "noodles are remaining.";
        }
    case 5:
        cout << "\nEnter the quantity of shakes you want:";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Pshake=Pshake+quant*50;

            cout << "\n\t\t" << quant << "shakes is the order!!";
        }
        else
        {
            cout << "\n\t\t" << Qshake - Sshake << "shakes are remaining.";
        }
    case 6:
        cout << "\nEnter the quantity of chicken you want:";
        cin >> quant;
        if (Qchicken - Schicken >= quant)
        {
            Schicken = Schicken + quant;
            Pchicken=Pchicken+quant*120;

            cout << "\n\t\t" << quant << "chicken is the order!!";
        }
        else
        {
            cout << "\n\t\t" << Qchicken - Schicken << "chickens are remaining.";
        }
        break;

    case 7:
        cout<<"\t\n\nDetails of sales and collection:";

        cout<<"\nNumber of rooms we had:"<<Qrooms;
        cout<<"\nNumber of rooms we gave for rent:"<<Srooms;
        cout<<"\nRemaining rooms:"<<Qrooms-Srooms;
        cout<<"\nTotal collection from rooms:"<<Prooms;

        cout<<"\nNumber of pasta we had:"<<Qpasta;
        cout<<"\nNumber of pasta we sold:"<<Spasta;
        cout<<"\nRemaining pasta:"<<Qpasta-Spasta;
        cout<<"\nTotal collection from pasta:"<<Ppasta;

        cout<<"\nNumber of burger we had:"<<Qburger;
        cout<<"\nNumber of burger we sold:"<<Sburger;
        cout<<"\nRemaining burger:"<<Qburger-Sburger;
        cout<<"\nTotal collection from burger:"<<Pburger;

        cout<<"\nNumber of noodle we had:"<<Qnoodle;
        cout<<"\nNumber of noodle we sold:"<<Snoodle;
        cout<<"\nRemaining noodle:"<<Qnoodle-Snoodle;
        cout<<"\nTotal collection from noodle:"<<Pnoodle;

        cout<<"\nNumber of shake we had:"<<Qshake;
        cout<<"\nNumber of shake we sold:"<<Sshake;
        cout<<"\nRemaining shake:"<<Qshake-Sshake;
        cout<<"\nTotal collection from shake:"<<Pshake;

        cout<<"\nNumber of chicken we had:"<<Qchicken;
        cout<<"\nNumber of chicken we sold:"<<Schicken;
        cout<<"\nRemaining chicken:"<<Qchicken-Schicken;
        cout<<"\nTotal collection from chicken:"<<Pchicken;

    case 8:
        exit(0);
        break;
    default:
        cout<<"\nPlease select a number from the above mentioned!!";
        break;
    }
    goto m;
}
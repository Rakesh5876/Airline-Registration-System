#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


void mainMenu();

class Management{
     public:

        Management(){
            mainMenu();
        }
};

class Details{
    public:
        static string name, gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information(){
            cout<<"\nEnter the customer ID:";
            cin>>cId;
            cout<<"\nEnter the Name :";
            cin>>name;
            cout<<"\nEnter the Age :";
            cin>>age;
            cout<<"\nEnter the Adress :";
            cin>>add;
            cout<<"\nGender :";
            cin>>gender;
            cout<<"Your details are saved with us\n"<<endl;
        }

};

int Details::cId;
string Details::name;
string Details::gender;

class Registration{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights(){
            string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};

            for(int a=0;a<6;a++){
                cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
            }

            cout<<"\nWelcome to the Airlines!"<<endl;
            cout<<"Press the number of country of which you want to book the flight :";
            cin>>choice;

            switch(choice){
                case 1:{
                    cout<<"_______________Welcome to Dubai Emirates_______________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the Flights \n"<<endl;

                    cout<<"1. DUB - 498"<<endl;
                    cout<<"\t08-02-2025 8:00AM 10hrs Rs. 14000"<<endl;

                    cout<<"2. DUB - 658"<<endl;
                    cout<<"\t09-02-2025 4:00AM 12hrs Rs. 10000"<<endl;

                    cout<<"3. DUB - 508"<<endl;
                    cout<<"\t11-02-2025 11:00AM 11hrs Rs. 9000"<<endl;

                    cout<<"\nSelect the Flight you want to book :";
                    cin>>choice1;

                    if(choice1==1){
                        charges=14000;
                        cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=10000;
                        cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=9000;
                        cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shifting to the Previous Menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the Main Menu:"<<endl;
                    cin>>back;
                    if(back==1){
                        mainMenu();
                        break;
                    }
                    else{
                        mainMenu();
                        break;
                    }

                }

                case 2:{
                    cout<<"_______________Welcome to Canadian Airlines_______________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the Flights \n"<<endl;

                    cout<<"1. CA - 198"<<endl;
                    cout<<"\t09-02-2025 2:00PM 20hrs Rs. 34000"<<endl;

                    cout<<"2. CA - 158"<<endl;
                    cout<<"\t11-02-2025 6:00AM 23hrs Rs. 29000"<<endl;

                    cout<<"3. DUB - 208"<<endl;
                    cout<<"\t14-02-2025 12:00AM 21hrs Rs. 40000"<<endl;

                    cout<<"\nSelect the Flight you want to book :";
                    cin>>choice1;

                    if(choice1==1){
                        charges=34000;
                        cout<<"\nYou have successfully booked the flight DUB - 198"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=29000;
                        cout<<"\nYou have successfully booked the flight DUB - 158"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=40000;
                        cout<<"\nYou have successfully booked the flight DUB - 208"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shifting to the Previous Menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the Main Menu:"<<endl;
                    cin>>back;
                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }

                }

                case 3:{
                    cout<<"_______________Welcome to UK Airways_______________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the Flights \n"<<endl;

                    cout<<"1. UK - 398"<<endl;
                    cout<<"\t08-02-2025 10:00AM 14hrs Rs. 44000"<<endl;

                    cout<<"2. UK - 458"<<endl;
                    cout<<"\t09-02-2025 4:00AM 16hrs Rs. 50000"<<endl;

                    cout<<"\nSelect the Flight you want to book :";
                    cin>>choice1;

                    if(choice1==1){
                        charges=44000;
                        cout<<"\nYou have successfully booked the flight UK - 398"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=50000;
                        cout<<"\nYou have successfully booked the flight UK - 458"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shifting to the Previous Menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the Main Menu:"<<endl;
                    cin>>back;
                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }

                case 4:{
                    cout<<"_______________Welcome to US Airways_______________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the Flights \n"<<endl;

                    cout<<"1. US - 567"<<endl;
                    cout<<"\t10-02-2025 9:00AM 22hrs Rs. 37000"<<endl;

                    cout<<"2. US - 658"<<endl;
                    cout<<"\t09-02-2025 6:00AM 22hrs Rs. 39000"<<endl;

                    cout<<"3. US - 508"<<endl;
                    cout<<"\t11-02-2025 10:00AM 21hrs Rs. 42000"<<endl;

                    cout<<"\nSelect the Flight you want to book :";
                    cin>>choice1;

                    if(choice1==1){
                        charges=37000;
                        cout<<"\nYou have successfully booked the flight US - 567"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=39000;
                        cout<<"\nYou have successfully booked the flight US - 658"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=42000;
                        cout<<"\nYou have successfully booked the flight US - 508"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shifting to the Previous Menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the Main Menu:"<<endl;
                    cin>>back;
                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }

                case 5:{
                    cout<<"_______________Welcome to Australian Airlines_______________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the Flights \n"<<endl;

                    cout<<"1. AUS - 698"<<endl;
                    cout<<"\t13-02-2025 9:00AM 20hrs Rs. 44000"<<endl;

                    cout<<"2. AUS - 158"<<endl;
                    cout<<"\t14-02-2025 6:00AM 22hrs Rs. 34000"<<endl;

                    cout<<"3. AUS - 708"<<endl;
                    cout<<"\t14-02-2025 10:00AM 21hrs Rs. 42000"<<endl;

                    cout<<"\nSelect the Flight you want to book :";
                    cin>>choice1;

                    if(choice1==1){
                        charges=44000;
                        cout<<"\nYou have successfully booked the flight AUS - 567"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=34000;
                        cout<<"\nYou have successfully booked the flight AUS - 658"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=42000;
                        cout<<"\nYou have successfully booked the flight AUS - 508"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shifting to the Previous Menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the Main Menu:"<<endl;
                    cin>>back;
                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }

                case 6:{
                    cout<<"_______________Welcome to European Airways_______________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;

                    cout<<"Following are the Flights \n"<<endl;

                    cout<<"1. EU - 367"<<endl;
                    cout<<"\t10-02-2025 2:00AM 18hrs Rs. 36000"<<endl;

                    cout<<"2. EU - 958"<<endl;
                    cout<<"\t09-02-2025 6:00AM 19hrs Rs. 37000"<<endl;

                    cout<<"3. EU - 608"<<endl;
                    cout<<"\t11-02-2025 10:00AM 12hrs Rs. 31000"<<endl;

                    cout<<"\nSelect the Flight you want to book :";
                    cin>>choice1;

                    if(choice1==1){
                        charges=36000;
                        cout<<"\nYou have successfully booked the flight EU - 367"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=37000;
                        cout<<"\nYou have successfully booked the flight US - 958"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=31000;
                        cout<<"\nYou have successfully booked the flight US - 608"<<endl;
                        cout<<"You can go back to Menu and Take the Ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input , shifting to the Previous Menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the Main Menu:"<<endl;
                    cin>>back;
                    if(back==1){
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }
                }

                default :{
                    cout<<"Invalid input, Shifting you to the Main Menu !"<<endl;
                    mainMenu();
                    break;
                }
            }

        }

};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration, Details
{
    public:

        void Bill(){
            string destination="";
            ofstream outf("records.txt");
            {
                outf<<"_______________XYZ Airlines______________"<<endl;
                outf<<"_________________Ticket__________________"<<endl;
                outf<<"_________________________________________"<<endl;

                outf<<"Customer ID:"<<Details::cId<<endl;
                outf<<"Customer Name:"<<Details::name<<endl;
                outf<<"Customer Gender:"<<Details::gender<<endl;
                // outf<<"\tDescription"<<endl;

                if(Registration::choice==1){
                    destination="Dubai";
                }
                else if(Registration::choice==2){
                    destination="Canada";
                }
                else if(Registration::choice==3){
                    destination="UK";
                }
                else if(Registration::choice==4){
                    destination="USA";
                }
                else if(Registration::choice==5){
                    destination="Australia";
                }
                else if(Registration::choice==6){
                    destination="Europe";
                }

                outf<<"Destination\t\t"<<destination<<endl;
                outf<<"Flight cost :\t\t"<<Registration::charges<<endl;
            }
            outf.close();
        }
        void dispBill(){
            ifstream ifs("records.txt");
            if(!ifs){
                cout<<"File error!"<<endl;
            }
            while(ifs.getline(arr, 100)){
                cout<<arr<<endl;
            }
            ifs.close();
        }
};


void mainMenu(){
    int lchoice;
    int back;

    cout<<"\t\t\t*********XYZ Airlines**********\n"<<endl;
    cout<<"\t\t\t___________Main Menu___________"<<endl;

    cout<<"\t\t\t________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t|"<<endl;

    cout<<"\t\t Press 1 to add the Customer Details   \t|"<<endl;
    cout<<"\t\t Press 2 for Flight Registration       \t|"<<endl;
    cout<<"\t\t Press 3 for Ticket and charges        \t|"<<endl;
    cout<<"\t\t Press 4 to Exit                       \t|"<<endl;
    cout<<"\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t\t________________________________________|"<<endl;

    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch(lchoice){

        case 1:{
            cout<<"__________Customers___________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to Main Menu :";
            cin>>back;

            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
            break;
        }

        case 2:{
            cout<<"________Book a Flight using this system_________\n"<<endl;
            r.flights();
            break;
        }

        case 3:{
            cout<<"________GET YOUR TICKET________\n"<<endl;
            t.Bill();

            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket "<<endl;
            cin>>back;

            if(back==1){
                t.dispBill();
                cout<<"Press any key to go back to Main Menu :";
                cin>>back;
                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            else{
                mainMenu();
            }
            break;
        }

        case 4:{
            cout<<"\n\n\t__________Thank-You__________"<<endl;
            break;
        }

        default :{
            cout<<"Invalid input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }

    }

}

int main(){
    Management Mobj;
    return 0;
}
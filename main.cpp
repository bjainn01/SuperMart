// adding the libraries that i think i will use.

#include <iostream>
#include <utility>
#include <cmath>
#include <ctime>
#include <cstdlib> 
#include <thread>
#include <chrono>
using namespace std;

// Creating A Struct for Our Products, Having Various Attributes. 

struct productdetails{
    string name;
    int quantity;
    string model;
    string description;
    double rating;
    string flag;
    double price;
};
// setting up the main function.

int main(){
    
   
    int userinput;
    char playagain;

  do{
    srand(time(NULL));
    cout << "Welcome to the Brilliant SuperMart.\n";
    cout << "Please select the operation you would like to do!\n";
    cout << "1. Enter Admin Mode.\n";
    cout << "2. View Inventory.\n";
    cout << "3. Search through our inventory.\n";
    cout << "4. Sort through inventory.\n";
    cin >> userinput;

    switch(userinput){
        case 1: cout << "Entering Admin Mode, Please be patient..\n"; 
                int randumcountdown = [ rand() % 6 ] + 1;
                this_thread::sleep_for(chrono::seconds(randumcountdown));
                cout << "Succesfully entered Admin Mode!\n";


            break;
        default: cout << "Please enter the serial number corresponding to the valid operation!\n";
    }; 

    cout << "Do you want to head back to the main interface? [ enter 'n' to exit]\n";
    cin >> playagain;
  }while( playagain != 'n' && playagain != 'N');
}
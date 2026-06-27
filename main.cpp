// heard that bits/stdc++.h contains 'everything'.
#include <bits/stdc++.h>
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
// creating functions for our various features and passing the Inventory array by refference.
void viewinventory(productdetails inventory[]);
void searchinventory(productdetails inventory[]);
void sortinventory(productdetails inventory[]);


int main(){
    
    int menuinput;
    char playagain;
    // Inventory size if very rigid
    productdetails inventory[4];
    // Filling up the inventory
    inventory[0].name = "Wireless Mouse";
    inventory[0].quantity = 25;
    inventory[0].model = "WM-2024";
    inventory[0].price = 25.00;
    inventory[0].description = "Ergonomic wireless mouse with adjustable DPI";
    inventory[0].rating = 4.8;
    
    inventory[1].name = "Mechanical Keyboard";
    inventory[1].quantity = 15;
    inventory[1].model = "MK-X100";
    inventory[1].price = 80.00;
    inventory[1].description = "RGB backlit mechanical keyboard with blue switches";
    inventory[1].rating = 4.7;
    
    inventory[2].name = "USB-C Hub";
    inventory[2].quantity = 40;
    inventory[2].model = "UCH-7P";
    inventory[2].price = 40.00;
    inventory[2].description = "7-port USB-C hub with HDMI and Ethernet support";
    inventory[2].rating = 4.3;
    
    inventory[3].name = "Portable SSD";
    inventory[3].quantity = 8;
    inventory[3].model = "PSSD-1TB";
    inventory[3].price = 90.00;
    inventory[3].description = "1TB high-speed external solid-state drive";
    inventory[3].rating = 4.8;
    
// setting up LOW STOCK Label. 

    for(int i = 0; i < 4; i++){
        inventory[i].quantity < 10 ? inventory[i].flag = "LOW STOCK" : inventory[i].flag = "NONE";   
        
    }
    
// main Interface setup
    
do{ 
    cout << "Welcome to The Brilliant SuperMart!\n";
    cout << "Please select a valid operation from below.\n";
    cout << "========== SuperMart ==========\n";
    cout << "1. View our Brilliant Inventory.\n";
    cout << "2. Search through our Inventory.\n";
    cout << "3. Sort our inventory on basis of Products, Rating and Prices.\n";
    cin >> menuinput;
    cin.ignore();
    
    switch(menuinput){
        case 1: viewinventory(inventory);
            break;
        case 2: searchinventory(inventory);
            break;
        case 3: sortinventory(inventory);
            break;
        default: cout << "Pick a valid operation, twin.\n";
            break;
    };
    
    cout << "Do you want to head back to main menu? ( press 'n' to exit.)\n";
    cin >> playagain;
    cin.ignore();
    
}while(playagain != 'n');


    cout << "Thank you for visitng our Brilliant SuperMart!!\n";
    return 0;
}

// defining viewinventory function

void viewinventory(productdetails inventory[]){
    
    for(int i = 0; i < 4; i++){
        cout << "---------------------------------------------\n";
        cout << "Name: " << inventory[i].name << endl;
        cout << "Quantity: " << inventory[i].quantity << endl;
        cout << "Model: " << inventory[i].model << endl;
        cout << "Description: " << inventory[i].description << endl;
        cout << "Rating: " << inventory[i].rating << endl;
        cout << "Flags: " << inventory[i].flag << endl;
        cout << "Price: " << inventory[i].price << endl;
        cout << endl;       
    };
}

// defining searchinventory function

void searchinventory(productdetails inventory[]){
    
    string enquiery;
    cout << "Please Enter The Name of Product You're Searching for: \n";
    getline(cin, enquiery);
    
    bool found = false;
    
    
    for(int i = 0; i < 4; i++){
     if(inventory[i].name == enquiery){
        cout << "---------------------------------------------\n";
        cout << "Name: " << inventory[i].name << endl;
        cout << "Quantity: " << inventory[i].quantity << endl;
        cout << "Model: " << inventory[i].model << endl;
        cout << "Description: " << inventory[i].description << endl;
        cout << "Rating: " << inventory[i].rating << endl;
        cout << "Flags: " << inventory[i].flag << endl;
        cout << endl; 
        
        found = true;
        break;
     }
     
    }
    if(!found){
        cout << "Could not find a product named " << enquiery << ".\n";
    }
}

// defining sort inventory function

void sortinventory(productdetails inventory[]){ 
    int userinput2;
    cout << "On what basis would you like to sort our inventory on? please enter 1 for QUANTITY, 2 for RATING, 3 for PRICE: \n";             
    cin >> userinput2;
    
    switch(userinput2){
        case 1: 
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3 - i; j++){
                        if (inventory[j].quantity > inventory[j + 1].quantity){
                            productdetails temp = inventory[j];
                            inventory[j] = inventory[j + 1];
                            inventory[j + 1] = temp;
                
                    }
                }
    
                } 
            
                viewinventory(inventory);
            break;
        case 2:
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3 - i; j++){
                        if (inventory[j].rating > inventory[j + 1].rating){
                            productdetails temp = inventory[j];
                            inventory[j] = inventory[j + 1];
                            inventory[j + 1] = temp;
                
                    }
                }
    
                } 
            
                viewinventory(inventory);
            break;
        case 3:
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3 - i; j++){
                        if (inventory[j].price > inventory[j + 1].price){
                            productdetails temp = inventory[j];
                            inventory[j] = inventory[j + 1];
                            inventory[j + 1] = temp;

                    }
                }

                } 

                viewinventory(inventory);
            break;
        default: cout << "Enter a Valid option please.";
            break;   
};
}
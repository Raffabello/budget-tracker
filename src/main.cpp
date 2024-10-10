#include <iostream>
#include <string>

using namespace std;

class account {
    
    private:
        float balance;
    public:
        void getBalance(){
            cout << balance;
        }

        void deposit(){
            float money;

            cout << "Enter the amount of money:";
            cin >> money;
            balance += money;
        }

        void accountCreation() {
            string tmpName;
            string tmpPin;

            count << "Enter your name:" << endl;
            cin >> tmpName;
            while(tmpName.lenght == 0) {
                cout << "Your name cannot be empty, re-enter your name:" << endl;
                cin >> tmpName;
            }
            cout << "Enter a pin to protect your budged:" << endl;
            cin >> tmpPin;
            if(tmpPin.lenght > 5) {
                cout << "Pin is too long" << endl;
            }

            Person(tmpName,tmpPin);
        }
};

class Person {
    public:
        string name;
        int pin;
        
        Person(string n) : name(n) {};
};

void displayMenu(){
    for(int i = 0; i < 10; i++){cout << "*";}
    cout << "\n";
    cout << "Menu:\n" << "quit - close the program\nmenu - display menu\ncreate - create budget account" << endl;
    for(int i = 0; i < 10; i++){cout << "*";}
    cout << "\n";
}

void budgetInit(){

    string userInput;
    /*If user enters
        "quit" -> program ends
    */
    displayMenu();
    while(userInput != "quit"){
        cin >> userInput;
        if(userInput == "quit"){
            cout << "Thank you for using budget tracker" << endl;
        }
        else if(userInput == "menu"){
            displayMenu();
        }
        else{
            cout << "This command is not recognized, do you want to see the menu?()" << endl;
        }
    }

}

int main(void){


    return 0;
}
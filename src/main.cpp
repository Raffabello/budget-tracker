#include <iostream>

using namespace std;

class account {
    
    private:
        float balance;
        string holder;
    public:

        account(string name) : holder(name) {};
        

        void getBalance(){
            cout << balance;
        }

        void deposit(){
            float money;

            cout << "Enter the amount of money:";
            cin >> money;
            balance += money;
        }
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
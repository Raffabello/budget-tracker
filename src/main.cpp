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

int main(void){


    return 0;
}
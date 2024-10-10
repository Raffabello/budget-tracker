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
};

class Person {
    public:
        string name;
        int pin;
        
        //Person(string n) : name(n) {};
};

int main(void){


    return 0;
}
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

        void addMoney(){
            float money;

            cout << "Enter the amount of money:";
            cin >> money;
            balance += money;
        }
};

int main(void){

    return 0;
}
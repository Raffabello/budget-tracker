#include <iostream>

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

int main(void){


    return 0;
}
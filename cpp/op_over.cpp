#include <iostream>

using namespace std;

class Accounts {
private:
    int sum;
public:
    Accounts (int val): sum(val) {

    }

    int getSum() {
        return sum;
    }
    int operator + (Accounts &accObj) {
        return sum + accObj.getSum();
    }
};

int main () {
    Accounts acc1(100), acc2(200);
    int sum = acc1 + acc2;
    cout << "sum = " << sum;
    return 0;
}
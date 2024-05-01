#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vecOfEls;
    for(int i=0; i< 10; ++i) {
        vecOfEls.push_back(i);
    }
    cout << vecOfEls.size() <<endl;
    vecOfEls.resize(7);
    cout << vecOfEls.size() <<endl;
    return 0;
}
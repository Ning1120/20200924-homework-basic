#include <iostream>
using namespace std;

int main() {
    int num, coin;
    int sum = 0;
    cout << "��Ƽƶq: ";
    cin >> num;
    int counter = num;
    while (counter > 0) {
        cout << "�� " << num - counter + 1 << " �����: ";
        cin >> coin;
        sum += coin;
        counter--;
    }
    cout << "�`���B: " << sum;
}

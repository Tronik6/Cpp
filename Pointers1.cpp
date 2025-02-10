#include <iostream>
using namespace std;

int main()
{
    int num = 3;
    cout << &num << endl;

    int *ptt = &num;
    cout << ptt << endl;
    cout << *ptt << endl;

    *ptt = 5;

    cout << num << endl;

    return 0;
}

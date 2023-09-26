#include <iostream>
using namespace std;
int main()
{
    int num = 2;
    while (num < 520)
    {
        --num;
        cout << num << endl;

        num = num * 2 + 3;
    }
}
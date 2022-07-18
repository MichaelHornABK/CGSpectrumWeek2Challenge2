#include <iostream>

using namespace std;

void NumberCubed(float num);

int main()
{
    cout << "Enter in a number to be cubed: ";

    float num;
    cin >> num;
    NumberCubed(num);
}

void NumberCubed(float num)
{
    float numCubed = num * num * num;
    cout << num << " cubed is " << numCubed;
}

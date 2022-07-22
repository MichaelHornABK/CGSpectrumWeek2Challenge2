#include <iostream>

using namespace std;

float NumberCubed(float num);

int main()
{
    //main function
    cout << "Enter in a number to be cubed: ";
    float num;
    cin >> num;
    float numCubed = NumberCubed(num);
    cout << "The number you entered cubed is: " << numCubed;
}

float NumberCubed(float num)
{
    return num * num * num;
}

#include <iostream>
#include <string>

using namespace std;

int maxOfThree(int a, int b, int c) {
    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;

    return max;

}

int main()
{
    int a, b, c;

    cout << "Enter value a , b , c : ";
    cin >> a >> b >> c;

    int max = maxOfThree(a, b, c);

    cout << "The maximum value is: " << max << endl;
    return 0;
}
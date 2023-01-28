#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    double num1, num2, num3;
    ofstream output;
    string filename;

    cout << "Enter the name of the file to write to: ";
    getline(cin, filename);
    output.open(filename);
    if (!output.fail())
    {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "Enter the third number: ";
        cin >> num3;

        output << num1 << "\n";
        output << num2 << "\n";
        output << num3 << "\n";
        output.close();
    }
    else
        cout << "Error. File failed to open."
             << "\n";
    return 0;
}

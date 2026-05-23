#include <iostream>
using namespace std;

// Function
void result()
{
    string name;
    int m1, m2, m3, total;
    float average;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter mark 1: ";
    cin >> m1;

    cout << "Enter mark 2: ";
    cin >> m2;

    cout << "Enter mark 3: ";
    cin >> m3;

    total = m1 + m2 + m3;
    average = total / 3.0;

    cout << "\nName: " << name << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    if (average >= 50)
        cout << "Passed\n";
    else
        cout << "Failed\n";
}

int main()
{
    char choice;

    do
    {
        result();

        cout << "\nEnter another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y');

    return 0;
}
#include <iostream>
using namespace std;

// Function to calculate and display result
void studentResult()
{
    string name;          // variable for student name
    int marks[3];         // array for 3 subjects
    int total = 0;
    float average;

    // Input
    cout << "Enter student name: ";
    cin >> name;

    // Loop to enter 3 marks
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter mark for subject " << i + 1 << ": ";
        cin >> marks[i];

        total = total + marks[i]; // calculation
    }

    // Calculate average
    average = total / 3.0;

    // Output
    cout << "\nStudent Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average: " << average << endl;

    // Conditional statement
    if (average >= 50)
    {
        cout << "Status: Passed" << endl;
    }
    else
    {
        cout << "Status: Failed" << endl;
    }
}

int main()
{
    char choice;

    // Loop for multiple students
    do
    {
        studentResult();

        cout << "\nEnter another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
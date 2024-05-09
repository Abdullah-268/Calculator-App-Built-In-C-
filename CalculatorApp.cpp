#include <iostream>
#include <limits> // For numeric_limits

using namespace std;

int main() {
   
    // Main program loop
    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;

        int choice;
        cout << "Enter your choice (1-5): ";
        
        // Input validation to handle non-numeric input
        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number between 1 and 5: ";
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }

        switch (choice) {
            case 1: {
                // Addition
                int num_count;
                cout << "How many numbers do you want to add? ";
                cin >> num_count;
                double result = 0;
                for (int i = 0; i < num_count; ++i) {
                    double num;
                    cout << "Enter number: ";
                    while (!(cin >> num)) {
                        cout << "Invalid input. Please enter a valid number: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                    result += num;
                }
                cout << "Result: " << result << endl;
                break;
            }
            case 2: {
                // Subtraction
                int num_count;
                cout << "How many numbers do you want to subtract? ";
                cin >> num_count;
                cout << "Enter the first number: ";
                double result;
                cin >> result;
                for (int i = 1; i < num_count; ++i) {
                    double num;
                    cout << "Enter number: ";
                    while (!(cin >> num)) {
                        cout << "Invalid input. Please enter a valid number: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                    result -= num;
                }
                cout << "Result: " << result << endl;
                break;
            }
            case 3: {
                // Multiplication
                int num_count;
                cout << "How many numbers do you want to multiply? ";
                cin >> num_count;
                double result = 1;
                for (int i = 0; i < num_count; ++i) {
                    double num;
                    cout << "Enter number: ";
                    while (!(cin >> num)) {
                        cout << "Invalid input. Please enter a valid number: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                    result *= num;
                }
                cout << "Result: " << result << endl;
                break;
            }
            case 4: {
                // Division
                double numerator, denominator;
                cout << "Enter the numerator: ";
                cin >> numerator;
                cout << "Enter the denominator: ";
                while (!(cin >> denominator) || denominator == 0) {
                    if (cin.fail()) {
                        cout << "Invalid input. Please enter a valid number: ";
                        cin.clear();
                    } else {
                        cout << "Error: Division by zero is not allowed. Please enter a non-zero denominator: ";
                    }
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                double result = numerator / denominator;
                cout << "Result: " << result << endl;
                break;
            }
            case 5: {
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
            }
            default:
                cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <limits>

using namespace std;

// Function Prototypes
double calculateArea(const double radius);
double calculateArea(const double length, const double width);

double calculatePerimeter(const double radius);
double calculatePerimeter(const double length, const double width);

int main()
{
    int choice;

    do
    {
        cout << "\n===== Geometry Calculator =====\n";
        cout << "1. Area of a Circle\n";
        cout << "2. Perimeter of a Circle\n";
        cout << "3. Area of a Rectangle\n";
        cout << "4. Perimeter of a Rectangle\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        // Check if the user entered something that isn't a number
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number from 1 to 5.\n";

            continue;
        }

        switch (choice)
        {
            case 1:
            {
                double radius;

                cout << "Enter the radius: ";
                cin >> radius;

                if (cin.fail() || radius <= 0)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "Invalid radius. Please enter a positive number.\n";
                }
                else
                {
                    cout << "Area of circle: "
                         << calculateArea(radius) << endl;
                }

                break;
            }

            case 2:
            {
                double radius;

                cout << "Enter the radius: ";
                cin >> radius;

                if (cin.fail() || radius <= 0)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "Invalid radius. Please enter a positive number.\n";
                }
                else
                {
                    cout << "Perimeter of circle: "
                         << calculatePerimeter(radius) << endl;
                }

                break;
            }

            case 3:
            {
                double length;
                double width;

                cout << "Enter the length: ";
                cin >> length;

                cout << "Enter the width: ";
                cin >> width;

                if (cin.fail() || length <= 0 || width <= 0)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "Invalid dimensions. Both values must be positive.\n";
                }
                else
                {
                    cout << "Area of rectangle: "
                         << calculateArea(length, width) << endl;
                }

                break;
            }

            case 4:
            {
                double length;
                double width;

                cout << "Enter the length: ";
                cin >> length;

                cout << "Enter the width: ";
                cin >> width;

                if (cin.fail() || length <= 0 || width <= 0)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "Invalid dimensions. Both values must be positive.\n";
                }
                else
                {
                    cout << "Perimeter of rectangle: "
                         << calculatePerimeter(length, width) << endl;
                }

                break;
            }

            case 5:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please enter 1 through 5.\n";
        }

    } while (choice != 5);

    return 0;
}


// =============================
// Function Definitions
// =============================

double calculateArea(const double radius)
{
    const double PI = 3.14159;

    return PI * radius * radius;
}


double calculateArea(const double length, const double width)
{
    return length * width;
}


double calculatePerimeter(const double radius)
{
    const double PI = 3.14159;

    return 2 * PI * radius;
}


double calculatePerimeter(const double length, const double width)
{
    return 2 * (length + width);
}
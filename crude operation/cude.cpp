#include <iostream>
using namespace std;

int main()
{
    int size, choice;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0 || size > 100)
    { // Restrict size for safety
        cout << "Invalid size! Please enter a size between 1 and 100." << endl;
        return 1;
    }

    int arr[100]; // Fixed-size array

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\nArray Operations Menu:\n";
        cout << "1. Display Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Update Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

//*****************************************************************************/

        switch (choice)
        {
        case 1:
        { // Display Array
            cout << "\nArray Elements: ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        }

        case 2:
        { // Insert Element
            if (size == 100)
            {
                cout << "Array is full. Cannot insert more elements." << endl;
                break;
            }

            int element, position;
            cout << "Enter the element to be inserted: ";
            cin >> element;
            cout << "Enter the position to insert the element (1-based): ";
            cin >> position;

            if (position < 1 || position > size + 1)
            {
                cout << "Invalid position. Please enter a position within the array range." << endl;
            }
            else
            {
                for (int i = size; i >= position; i--)
                {
                    arr[i] = arr[i - 1];
                }
                arr[position - 1] = element;
                size++; // Increase the size
                cout << "Element inserted successfully." << endl;
            }
            break;
        }

        case 3:
        { // Delete Element
            int position;
            cout << "Enter the position to delete the element (1-based): ";
            cin >> position;

            if (position < 1 || position > size)
            {
                cout << "Invalid position. Please enter a position within the array range." << endl;
            }
            else
            {
                for (int i = position - 1; i < size - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                size--; // Decrease the size
                cout << "Element deleted successfully." << endl;
            }
            break;
        }

        case 4:
        { // Update Element
            int position, newValue;
            cout << "Enter the position to update (1-based): ";
            cin >> position;

            if (position < 1 || position > size)
            {
                cout << "Invalid position. Please enter a position within the array range." << endl;
            }
            else
            {
                cout << "Enter the new value: ";
                cin >> newValue;
                arr[position - 1] = newValue;
                cout << "Element updated successfully." << endl;
            }
            break;
        }

        case 5: // Exit
            cout << "Exiting the program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to display the seating chart
void displaySeatingChart(char seating[13][6]) {
    cout << "    A   B   C   D   E   F" << endl;
    for (int i = 0; i < 13; i++) {
        cout << "Row " << setw(2) << i + 1 << " ";
        for (int j = 0; j < 6; j++) {
            cout << setw(2) << seating[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to convert column character to index
int getColumnIndex(char col) {
    return toupper(col) - 'A';
}

int main() {
    // Initialize the seating chart
    char seating[13][6];
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 6; j++) {
            seating[i][j] = '*';
        }
    }

    string ticketType;
    int row;
    char column;
    char choice;

    do {
        // Display the seating chart
        displaySeatingChart(seating);

        // Ask user for ticket type
        cout << "\nEnter ticket type (first, business, economy): ";
        cin >> ticketType;

        // Validate ticket type
        if (ticketType == "first") {
            cout << "Rows available: 1-2" << endl;
        } else if (ticketType == "business") {
            cout << "Rows available: 3-7" << endl;
        } else if (ticketType == "economy") {
            cout << "Rows available: 8-13" << endl;
        } else {
            cout << "Invalid ticket type!" << endl;
            continue;
        }

        // Ask user for seat choice
        cout << "Enter desired row and column (e.g., 5C): ";
        cin >> row >> column;

        // Validate row and column
        if (row < 1 || row > 13 || getColumnIndex(column) < 0 || getColumnIndex(column) > 5) {
            cout << "Invalid seat choice!" << endl;
            continue;
        }

        // Check if the seat is within the allowed range for the ticket type
        if ((ticketType == "first" && (row < 1 || row > 2)) ||
            (ticketType == "business" && (row < 3 || row > 7)) ||
            (ticketType == "economy" && (row < 8 || row > 13))) {
            cout << "Seat not available for this ticket type!" << endl;
            continue;
        }

        // Check if the seat is already taken
        if (seating[row - 1][getColumnIndex(column)] == 'X') {
            cout << "Seat is already taken!" << endl;
        } else {
            // Assign the seat
            seating[row - 1][getColumnIndex(column)] = 'X';
            cout << "Seat assigned successfully!" << endl;
        }

        // Ask if the user wants to assign another seat
        cout << "Do you want to assign another seat? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // Display the final seating chart
    cout << "\nFinal Seating Chart:" << endl;
    displaySeatingChart(seating);
}
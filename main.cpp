#include "browser_history.h"
#include <iostream>
#include <limits>

using namespace std;

BrowserHistory::BrowserHistory()
    : head(nullptr), tail(nullptr), current(nullptr) {}

BrowserHistory::~BrowserHistory() {
    clearHistory();
}

int main() {
    BrowserHistory browser;
    int choice = 0;

    do {
        cout << "\n\n";
        cout << "========================================\n";
        cout << "       BROWSER HISTORY MANAGEMENT       \n";
        cout << "========================================\n";
        cout << "1. Visit New Page\n";
        cout << "2. Go Back\n";
        cout << "3. Go Forward\n";
        cout << "4. Display Browser History\n";
        cout << "5. Search History\n";
        cout << "6. Delete History Entry\n";
        cout << "7. Clear All History\n";
        cout << "8. Show Current Page\n";
        cout << "9. Exit\n";
        cout << "========================================\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "\nInvalid input! Enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case 1: browser.visitPage(); break;
            case 2: browser.goBack(); break;
            case 3: browser.goForward(); break;
            case 4: browser.displayHistory(); break;
            case 5: browser.searchHistory(); break;
            case 6: browser.deleteHistoryEntry(); break;
            case 7: browser.clearHistory(); break;
            case 8: browser.showCurrentPage(); break;
            case 9: cout << "\nThank you for using Browser History Management!\n"; break;
            default: cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 9);

    return 0;
}

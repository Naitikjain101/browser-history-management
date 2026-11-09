#include "browser_history.h"
#include <algorithm>
#include <cctype>
#include <iostream>

using namespace std;

bool BrowserHistory::containsIgnoreCase(string text, string key) {
    auto toLower = [](unsigned char ch) {
        return static_cast<char>(tolower(ch));
    };

    transform(text.begin(), text.end(), text.begin(), toLower);
    transform(key.begin(), key.end(), key.begin(), toLower);
    return text.find(key) != string::npos;
}

void BrowserHistory::displayHistory() const {
    if (head == nullptr) {
        cout << "\nBrowser history is empty!\n";
        return;
    }

    cout << "\n========== BROWSER HISTORY ==========\n";
    int index = 1;

    for (Node* temp = head; temp != nullptr; temp = temp->next) {
        cout << index++ << ". " << temp->url;
        if (temp == current)
            cout << "  <-- CURRENT PAGE";
        cout << '\n';
    }

    cout << "=====================================\n";
}

void BrowserHistory::searchHistory() const {
    if (head == nullptr) {
        cout << "\nNo history available to search!\n";
        return;
    }

    string key;
    cout << "\nEnter URL or keyword to search: ";
    getline(cin, key);

    if (key.empty()) {
        cout << "Search keyword cannot be empty!\n";
        return;
    }

    bool found = false;
    int index = 1;

    cout << "\nSearch results:\n";
    for (Node* temp = head; temp != nullptr; temp = temp->next, ++index) {
        if (containsIgnoreCase(temp->url, key)) {
            cout << index << ". " << temp->url;
            if (temp == current)
                cout << "  <-- CURRENT PAGE";
            cout << '\n';
            found = true;
        }
    }

    if (!found)
        cout << "No matching pages found!\n";
}

#include "browser_history.h"
#include <iostream>

using namespace std;

void BrowserHistory::goBack() {
    if (current == nullptr || current->prev == nullptr) {
        cout << "\nNo previous page available!\n";
        return;
    }

    current = current->prev;
    cout << "\nMoved back to: " << current->url << '\n';
}

void BrowserHistory::goForward() {
    if (current == nullptr || current->next == nullptr) {
        cout << "\nNo next page available!\n";
        return;
    }

    current = current->next;
    cout << "\nMoved forward to: " << current->url << '\n';
}

void BrowserHistory::showCurrentPage() const {
    if (current == nullptr)
        cout << "\nNo page is currently open.\n";
    else
        cout << "\nCurrent page: " << current->url << '\n';
}

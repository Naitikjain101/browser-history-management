#include "browser_history.h"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

void BrowserHistory::removeNode(Node* node) {
    if (node == nullptr)
        return;

    // If deleting the current page, select its previous page,
    // or its next page when there is no previous page.
    if (current == node)
        current = (node->prev != nullptr) ? node->prev : node->next;

    if (node->prev != nullptr)
        node->prev->next = node->next;
    else
        head = node->next;

    if (node->next != nullptr)
        node->next->prev = node->prev;
    else
        tail = node->prev;

    delete node;
}

void BrowserHistory::deleteHistoryEntry() {
    if (head == nullptr) {
        cout << "\nHistory is already empty!\n";
        return;
    }

    displayHistory();

    cout << "\nEnter entry number to delete: ";
    int position;

    if (!(cin >> position)) {
        cout << "Invalid input! Please enter a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (position < 1) {
        cout << "Invalid history position!\n";
        return;
    }

    Node* temp = head;
    for (int index = 1; temp != nullptr && index < position; ++index)
        temp = temp->next;

    if (temp == nullptr) {
        cout << "History entry not found!\n";
        return;
    }

    string deletedURL = temp->url;
    removeNode(temp);
    cout << "Deleted successfully: " << deletedURL << '\n';
}

void BrowserHistory::clearHistory() {
    Node* temp = head;

    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    head = tail = current = nullptr;
    cout << "\nAll browser history cleared successfully!\n";
}

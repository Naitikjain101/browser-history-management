#include "browser_history.h"
#include <iostream>
#include <limits>

using namespace std;

void BrowserHistory::visitPage() {
    string url;
    cout << "\nEnter website URL: ";
    getline(cin, url);

    if (url.empty()) {
        cout << "URL cannot be empty!\n";
        return;
    }

    // Visiting a new page after going back discards forward history.
    if (current != nullptr) {
        Node* temp = current->next;
        while (temp != nullptr) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        current->next = nullptr;
        tail = current;
    }

    Node* newNode = new Node(url);

    if (head == nullptr) {
        head = tail = current = newNode;
    } else {
        newNode->prev = current;
        current->next = newNode;
        tail = current = newNode;
    }

    cout << "Page visited successfully: " << url << '\n';
}

#pragma once
#include "node.h"
#include <string>

class BrowserHistory {
private:
    Node* head;
    Node* tail;
    Node* current;

    void removeNode(Node* node);
    static bool containsIgnoreCase(std::string text, std::string key);

public:
    BrowserHistory();
    ~BrowserHistory();

    BrowserHistory(const BrowserHistory&) = delete;
    BrowserHistory& operator=(const BrowserHistory&) = delete;

    // Module 1: Visit Page
    void visitPage();

    // Module 2: Back and Forward Navigation
    void goBack();
    void goForward();
    void showCurrentPage() const;

    // Module 3: History Display and Search
    void displayHistory() const;
    void searchHistory() const;

    // Module 4: History Deletion
    void deleteHistoryEntry();
    void clearHistory();
};

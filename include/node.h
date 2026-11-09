#pragma once
#include <string>

struct Node {
    std::string url;
    Node* prev;
    Node* next;

    explicit Node(const std::string& page)
        : url(page), prev(nullptr), next(nullptr) {}
};

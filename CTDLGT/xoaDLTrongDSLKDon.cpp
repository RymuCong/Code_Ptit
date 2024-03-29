#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void themPhanTu(Node*& first, int x) {
    Node* node = new Node();
    node->data = x;
    node->next = NULL;
    if (first == NULL) {
        first = node;
    } else {
        Node* temp = first;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = node;
    }
}

int xoaPhanTu(Node*& first, int x) {
    Node* temp = first;
    Node* prev = NULL;
    int count = 0;
    while (temp != NULL) {
        if (temp->data == x) {
            if (prev == NULL) {
                first = temp->next;
            } else {
                prev->next = temp->next;
            }
            delete temp;
            count++;
            if (prev == NULL) {
                temp = first;
            } else {
                temp = prev->next;
            }
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
    return count;
}

void inDanhSach(Node* first) {
    Node* temp = first;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* first = NULL;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        themPhanTu(first, x);
    }
    cin >> x;
    xoaPhanTu(first, x);
    inDanhSach(first);
    return 0;
}
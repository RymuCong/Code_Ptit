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

void locPhanTuTrung(Node*& first) {
    Node* ptr1, *ptr2, *dup;
    ptr1 = first;

    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;

        while (ptr2->next != NULL) {
            if (ptr1->data == ptr2->next->data) {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete(dup);
            } else {
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
    }
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
    locPhanTuTrung(first);
    inDanhSach(first);
    return 0;
}

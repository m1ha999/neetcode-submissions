#include <vector>
using namespace std;
//iteriram tako sto head je prvi cvor

class LinkedList {
public:
    LinkedList() {
        size = 0;
        head = nullptr;
        tail = nullptr;
    }

    int get(int index) {
        if (head == nullptr) {
            return -1;
        }

        int i = 0;
        Node *curr = head;
        while (i != index && curr != nullptr) {
            curr = curr->next;
            i++;
        }
        if (curr == nullptr) {
            return -1;
        }
        return curr->val;

    }

    void insertHead(int val) {
        Node *newnode = new Node();
        newnode->val = val;
        newnode->next = head;
        head = newnode;
        size++;
        if (newnode->next == nullptr) {
            tail = newnode;
        }
    }

    void insertTail(int val) {
        Node *newnode = new Node();
        newnode->val = val;
        newnode->next = nullptr;
        if (size == 0) {
            head = newnode;
            tail = newnode;
        }
        else {
            tail->next = newnode;
            tail = newnode;

        }
        size++;
    }

    bool remove(int index) {
        if (head == nullptr) {
            return false;
        }
        Node *curr = head;
        Node *prev = nullptr;
        int i = 0;
        while (curr != nullptr && i != index) {
            prev = curr;
            curr = curr->next;
            i++;
        }
        if (curr == nullptr) {
            return false;
        }
        if (prev == nullptr) {
            head = head->next;
            delete curr;
            if (head == nullptr) {
                tail = nullptr;
            }

            size--;
            return true;
        }

        prev->next = curr->next;
        if (curr->next == nullptr) {
            tail = prev;
        }

        delete curr;
        size--;
        return true;
    }

    vector<int> getValues() {
        Node *curr = head;
        vector<int> lista = {};
        while (curr != nullptr) {
            lista.push_back(curr->val);
            curr = curr->next;
        }
        return lista;
    }
private:
    int size;
    struct Node {
        int val;
        Node *next;
    };
    Node *head;
    Node *tail;

};

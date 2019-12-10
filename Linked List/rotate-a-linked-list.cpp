#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node *rotate(struct Node *head, int k);

Node *insert() {
    int n, i, value;
    struct Node *temp, *head = NULL;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> value;
        if (i == 0) {
            head = new Node(value);
            temp = head;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
    return head;
}

void printList(Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {

    int t, k;

    scanf("%d", &t);
    while (t--) {
        Node *head = insert(); // insert function to build linked list
        scanf("%d", &k);
        head = rotate(head, k); // rotate linked list anti-clockwise  by k nodes
        printList(head);        // print linked list after rotation
    }
    return (0);
}
/*This is a function problem.You only need to complete the function given below*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
/*  This function should rotate list counter-clockwise
    by k and return new head (if changed) */
Node* rotate(Node* head, int k) {
    // Your code here
    Node* temp1 = head;
    int totalNodes = 0;
    Node* countNodes = head;
    while(countNodes != nullptr) {
        countNodes = countNodes->next;
        totalNodes++;
    }
    //cout << totalNodes << endl;
    if(totalNodes <= k) {
        k = k % totalNodes;
    }
    if(k == 0) return head;
    else {
        int count = k - 1;
        while(count--) {
            temp1 = temp1->next;
        }
        Node* temp2 = temp1->next;
        temp1->next = nullptr;
        Node* newHead = temp2;
        while(temp2->next != nullptr) {
            temp2 = temp2->next;
        }
        temp2->next = head;
        return newHead;
    }
}
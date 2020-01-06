Node* reverseList(Node *head)
{
    Node *previous = nullptr;
    Node *current = head;
    Node *next;
    while(current != nullptr) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}

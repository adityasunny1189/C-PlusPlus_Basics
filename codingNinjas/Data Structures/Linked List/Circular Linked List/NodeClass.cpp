class Node {
    public:
        int data;
        Node *next;
        Node(int element) {
            this -> data = element;
            next = NULL;
        }
};
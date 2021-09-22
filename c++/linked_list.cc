#include<iostream>

struct Node {
        int data;
        Node* next;

        Node(int data) { 
            this->data = data;
            this->next = NULL;
        }
};

class LinkedList {
    private:
        Node* m_start_node;
    public:
        LinkedList(Node* firstNode) {
             this->m_start_node = firstNode; 
        }
        LinkedList(int i) {
             this->m_start_node = new Node(i); 
        }
        void push(Node* node) {
            Node* n = this->m_start_node;
            while(n->next != NULL) {
                n = n->next;
            }
            n->next = node;
        }
        void push(int i) {
            Node* n = this->m_start_node;
            while(n->next != NULL) {
                n = n->next;
            }
            n->next = new Node(i);
        }
        void print() {
            for(Node*n = m_start_node; n != NULL; n=n->next) {
                std::cout << n->data << std::endl;
            }
        }
        int length() {
            int length = 0;
            for(Node*n = m_start_node; n != NULL; n=n->next) {
                length++;
            }
            return length;
        }
        ~LinkedList() {
            Node* n = m_start_node;
            Node* temp_n = NULL;
            std::cout << "\n\ndeleting linked list" << std::endl;
            while(n != NULL) {
                temp_n = n->next;
                delete(n);
                n = temp_n;
                std::cout << "deleting linked list ref " << n << std::endl;
            }
            std::cout << "length of the linked list was " << length()  << std::endl;
        }
};


int main() {
    LinkedList linkedList = LinkedList(1);
    linkedList.push(1);
    linkedList.push(2);
    linkedList.push(3);
    linkedList.push(4);
    linkedList.push(5);
    linkedList.print();
    return 0;
}

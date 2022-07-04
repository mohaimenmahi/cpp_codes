#include <bits/stdc++.h>
using namespace std;

struct node {
    int roll;
    node *next;
};

node *root = NULL;

void append(int roll) {
    if(root == NULL) {
        root = new node();
        root->roll = roll;
        root->next = NULL;
    } else {
        node *current_node = root;
        while(current_node->next != NULL) {
            current_node =  current_node->next;
        }
        node *newNode = new node();
        newNode->roll = roll;
        newNode->next = NULL;

        current_node->next = newNode;
    }
}

void print() {
    node *current_node = root;
    while(current_node != NULL) {
        cout<<current_node->roll<<" " <<current_node->next<<endl;
        current_node = current_node->next;
    }
}

int main()
{
    append(1);
    append(2);
    append(6);
    print();
    return 0;
}


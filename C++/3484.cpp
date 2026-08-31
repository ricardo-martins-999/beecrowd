#include <bits/stdc++.h>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int v) : value(v), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value) {
    if (root == nullptr)
        return new Node(value);
    if (value < root->value)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}

void breadth_first_search(Node* root) {
    if (root == nullptr) return;

    queue<Node*> queue;
    queue.push(root);
    int level = 0;

    while (!queue.empty()) {
        int size = queue.size();
        int min_value = INT_MAX;

        for (int i = 0; i < size; i++) {
            Node* current = queue.front();
            queue.pop();

            min_value = min(min_value, current->value);

            if (current->left != nullptr)
                queue.push(current->left);
            if (current->right != nullptr)
                queue.push(current->right);
        }

        printf("%d %d\n", level++, min_value);
    }
}

void traverse_in_order(Node* root) {
    if (root != nullptr) {
        traverse_in_order(root->left);
        printf("%d ", root->value);
        traverse_in_order(root->right);
    }
}

void free_tree(Node* root) {
    if (root != nullptr) {
        free_tree(root->left);
        free_tree(root->right);
        delete root;
    }
}

int main() {
    Node* tree = nullptr;
    int number_students, value;

    scanf("%d", &number_students);

    for (int i = 0; i < number_students; i++) {
        scanf("%d", &value);
        tree = insert(tree, value);
    }

    breadth_first_search(tree);

    free_tree(tree);

    return 0;
}

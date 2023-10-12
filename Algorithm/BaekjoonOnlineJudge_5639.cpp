#include <iostream>

using namespace std;

struct binary_tree_node {
	binary_tree_node* left = nullptr;
	binary_tree_node* right = nullptr;
	int value;

	binary_tree_node(int value) : value{ value } {

	}
};

class binary_search_tree {
public:
	binary_tree_node* root = nullptr;

	void insert_node(binary_tree_node* root, binary_tree_node* node) {
		if (root == nullptr) {
			this->root = node;
		}
		else {
			if (node->value < root->value) {
				if (root->left == nullptr) {
					root->left = node;
				}
				else {
					insert_node(root->left, node);
				}
			}
			else if (node->value > root->value) {
				if (root->right == nullptr) {
					root->right = node;
				}
				else {
					insert_node(root->right, node);
				}
			}
		}
	}

	void postorder_traverse(binary_tree_node* node) {
		if (node != nullptr) {
			postorder_traverse(node->left);
			postorder_traverse(node->right);

			cout << node->value << '\n';
		}
	}
};

int main() {
	binary_search_tree tree;
	int key;

	while (cin >> key) {
		tree.insert_node(tree.root, new binary_tree_node(key));
	}

	tree.postorder_traverse(tree.root);
}
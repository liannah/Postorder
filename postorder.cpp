#include <iostream>
#include <string>
using namespace std;

int search(int arr[], int x, int n)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

void postorder(int inorder[], int preorder[], int length)
{

	int root = search(inorder, preorder[0], length);

	if (root != 0)
		postorder(inorder, preorder + 1, root);

	if (root != length - 1)
		postorder(inorder + root + 1, preorder + root + 1, length - root - 1);

	cout << preorder[0] << " ";

};

int main() {
	int in[] = { 2, 4, 1, 7, 5, 3, 6 };
	int pre[] = { 1, 2, 4, 3, 5, 7, 6};
	int n = sizeof(in) / sizeof(in[0]);
	cout << "Postorder traversal " << endl;
	postorder(in, pre, n);
	system("pause");
	return 0;
}



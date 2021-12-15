/*
You are given a binary tree rooted at 1. You have to find the mirror image of any node qi about node 1. If it doesn't exist then print -1. Consider the mirror to be a vertical plane at node 1.

Node 1 is considered to be a mirror image of itself.
Input:
First line contains the integer N and Q, denoting the number of nodes in the binary tree and the number of queries respectively.
Next N lines contains two integers denoting the left and right child of the i-th node respectively.
If the node doesn't have a left or right child, it is denoted by '-1'
Next Q lines contains a single integer q[i]
*/



#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

struct Node{
	int val;
	Node* left;
	Node* right;
	Node(int val)
	{
		this->val = val;
		left = NULL;
		right = NULL;
	}
};

/* void inorder(Node* root)
{
	if(root == NULL)
		return;
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);
} */

void findMirrorImage(Node* root,Node* newRoot,int query)
{
	
}

Node* copyTree(Node* root)
{
	if(root == NULL)
		return NULL;
	Node* newRoot = new Node(root->val);
	newRoot->left = copyTree(root->left);
	newRoot->right = copyTree(root->right);
	return newRoot;
}

int main() {

	// Your code here
	int n;
	int q;
	cin>>n>>q;
	vector<Node *> vec(n+1,NULL);
	struct Node* root = new Node(1);
	vec[1] = root;
	for(int i = 1;i<=n;i++)
	{
		int left,right;
		cin>>left>>right;
		if(left != -1 && right != -1)
		{
			struct Node* node1 = new Node(left);
			struct Node* node2 = new Node(right);
			vec[left] = node1;
			vec[right] = node2;
			vec[i]->left = node1;
			vec[i]->right = node2;
		}
		else if(left == -1 && right == -1) ;
		else
		{
			struct Node* node = new Node(0);
			if(left == -1)
			{
				node->val = right;
				vec[i]->right = node;
				vec[right] = node;
			}
			else
			{
				node->val = left;
				vec[i]->left = node;
				vec[left] = node;
			}
		}
	}
	//inorder(vec[1]);
	//cout<<endl;
	Node* newRoot = copyTree(root); 
	//inorder(newRoot);
	for(int i = 0;i<q;i++)
	{
		int query;
		cin>>query;
		findMirrorImage(root,newRoot,query);
	}
	return 0;
}
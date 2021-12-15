#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

//faulty

struct node{
	int data;
	node* left;
	node* right;
	node(int data)
	{
		this->data = data;
		left = nullptr;
		right = nullptr;
	}
};

void inorder(struct node* root)
{	
	if(!root)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}


int main() {

	// Your code here
	int n;
	cin>>n;
	vector<struct node*> vec(n+1);
	struct node root(1);
	vec[1] = &root;
	for(int i = 1;i<=n;i++)
	{
		int l,r;
		cin>>l>>r;
		if(l == -1 && r == -1)
		{
			vec[i]->left = nullptr;
			vec[i]->right = nullptr;
		}
		else if(l == -1)
		{
			vec[i]->left = nullptr;
			struct node rc(r);
			vec[i]->right = &rc;
			vec[r] = &rc;
		}
		else if(r == -1)
		{
			vec[i]->right = nullptr;
			struct node lc(l);
			vec[i]->left = &lc;
			vec[l] = &lc;
		}
		else
		{
			struct node lc(l);
			struct node rc(r);
			vec[i]->left = &lc;
			vec[i]->right = &rc;
			vec[l] = &lc;
			vec[r] = &rc;
		}
	}
	inorder(&root);
	return 0;
}

/*
void inorder(int l[],int r[],int NodeVal)
{
	if(l[NodeVal] != -1)
		inorder(l,r,l[NodeVal]);
	cout<<NodeVal<<" ";
	if(r[NodeVal] != -1)
		inorder(l,r,r[NodeVal]);
}

int main()
{
	int n;
	cin>>n;
	int l[n+1],r[n+1];
	l[0] = r[0] = 0;
	for(int i = 1;i<=n;i++)
	{
		cin>>l[i]>>r[i];
	}
	inorder(l,r,1);
	return 0;
}
*/
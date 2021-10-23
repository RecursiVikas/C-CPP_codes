#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};
 //3,4,2,4,1,2,5,6,5,7,6,3,1
void printll(node* head)
{
    node* temp = head;
    while(temp!=nullptr)
    { 
       cout<<temp->data<<" ";
       temp = temp->next;
    }    
    cout<<endl;
}

int main()
{
    node* head = new node(3);
    node* temp = head;
    temp->next = new node(4);
    temp = temp->next;
    temp->next = new node(2);
    temp = temp->next;
    temp->next = new node(4);
    temp = temp->next;
    temp->next = new node(1);
    temp = temp->next;
    temp->next = new node(2);
    temp = temp->next;
    temp->next = new node(5);
    temp = temp->next;
    temp->next = new node(6);
    temp = temp->next;
    temp->next = new node(5);
    temp = temp->next;
    temp->next = new node(7);
    temp = temp->next;
    temp->next = new node(6);
    temp = temp->next;
    temp->next = new node(3);
    temp = temp->next;
    temp->next = new node(1);
    temp = temp->next;
    printll(head);
    temp = head;
    vector<int> v1;
    while(temp != nullptr)
    {
        v1.push_back(temp->data);
        temp = temp->next;
    }
    /* for(int i : v1)
        cout<<i<<" ";
    cout<<endl; */
    int arr[10];
    for(int i : arr)
        i = 0;
    //cout<<arr[1]<<" "<<arr[5]<<endl;
    sort(v1.begin(),v1.end());
    int size = v1.size();
    int f,s;
    f = 0;
    s = 1;
    while(s<size)
    {
        if(v1[s]==v1[f])
        {
            s++;
        }
        else
        {
            v1[++f] = v1[s++];
        }
    }
    //cout<<f<<endl;
    /* for(int i : v1)
        cout<<i<<" "; 
    cout<<endl; */
    temp = head;
    node* prev = nullptr;
    for(int i = 0;i<f+1;i++)
    {
        temp->data = v1[i];
        prev = temp;
        temp = temp->next;
    }
    prev->next = nullptr;
    printll(head);
    return 0;
}
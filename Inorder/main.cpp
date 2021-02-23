#include <iostream>

using namespace std;
class node {
    public: int data;
    node *left; node*right;
    node(int d){data =d; left=NULL; right=NULL;}
};
node *buildtree()
{ int d;
cin>>d;
if(d==-1){return NULL;}
node*root= new node(d);
root->left=buildtree();
root->right=buildtree();
return root;
}
void printIN(node*root){
if(root==NULL) return;
cout<<root->data<<" ";
printIN(root->left);
printIN(root->right);}

int main()
{
    node *root=buildtree();
    printIN(root);
    cout<<endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long a;
	    long long india=0, eng=0;
	   
    for (int i = 0; i < 5; ++i) {
        cin>>a;
        if(a==1){
            india++;}
            else if(a==2){
            eng++;
            }
        }

    
    if(india>eng)
    cout<<"India"<<endl;
    else if (eng>india)
    cout<<"England"<<endl;
    else
    cout<<"Draw"<<endl;
	}
	return 0;
}



//     public:
//         int data;
//         Node *left,*right;
//         Node(int d){
//             data=d;
//             left=right=NULL;
//         }
// };
class Solution{
    
        }
     
  void levelOrder(Node * root){
    queue<Node *> q;
    Node* n = root;
   
    while(n != NULL){
        cout << n->data << ' ';
        
        if( n->left  != NULL ) q.push(n->left);
        if( n->right != NULL ) q.push(n->right);
        if( !q.empty() ) {
         n = q.front();
         q.pop();
        } else {
         n = NULL;
        }
    }
}
};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}

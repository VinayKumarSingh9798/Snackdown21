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

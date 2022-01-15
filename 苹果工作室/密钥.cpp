#include<iostream>

using namespace std;

int main(){
	string user[5] = {"wzh","gjr","user","jyd","lza"};
	string user2[2] = {"user0","user00"};
	string a;
	int b,c,d,e;
	cout << "enter your user name:";
	
	cin >> a;
	
	
	if ( a==user[0] || a == user[1] ||a == user[2] || a == user[3] || a == user[4] ){
		cout<<"gcy018";
		cin >> b;
	}
	else if(a == user2[0]){
		cout<<"pg818";
		cin >> c;
	}
	 else if(a == user2[1]){
		cout<<"unt00123";
		cin >> d;
	}
	else{
		cout<<"You aren't apples!";
		cin >> e;
	}
	
	
	return 0;
	
}

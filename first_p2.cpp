#include <iostream>
using namespace std;

int main() {
	#ifndef CP
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for getting input from input.txt
		freopen("output.txt", "w", stdout);
	#endif

	
	string name;

	cout<<"May I know yor name ?"<<endl;
	// cin>>name;
	getline(cin,name);
	cout<<"Hello "<<name<<" Nice to meet you !!";

	return 0;

}
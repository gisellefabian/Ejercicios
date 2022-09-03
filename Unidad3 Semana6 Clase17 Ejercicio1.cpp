#include <iostream>
using namespace std;

int main() {
	char charArr[] = {'e', 'l', 'e', 'm', 'e', 'n', 't', 'o', 'c', 'h', 'a', 'r'};
	int letraM = 0;
	int letraT = 0;
	int letraH = 0;
	
	for (char ch: charArr) {
		if (ch == 'm')
		letraM++;
		else if(ch == 't')
		letraT++;
		else if(ch == 'h')
		letraH++;
	}
	cout <<"La letra 'm' se encuentra "<<letraM<<" veces."<<endl;
	cout <<"La letra 't' se encuentra "<<letraT<<" veces."<<endl;
	cout <<"La letra 'h' se encuentra "<<letraH<<" veces."<<endl;
}

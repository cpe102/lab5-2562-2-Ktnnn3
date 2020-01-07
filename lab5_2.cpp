#include<iostream>
using namespace std;
string mixText(string a,string b){
	int L1 = a.size();
	int L2 = b.size();
	int i = 0;
	string y ="";
	if(L1==L2){
	while(i < L1){
		y += a[i];
		y += b[i];
		i++;
		
	}
	return y;
	} else{
		return "E";
	}
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}

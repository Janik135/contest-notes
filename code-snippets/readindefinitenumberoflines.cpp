#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		istringstream input(s);
		do{
			string str;
			input >> str;
			// do something with integers
			if(str[0]>='0' && str[0]<='9'){
				double d;
				stringstream ss;
				ss << str, ss >> d;
			}
			else{
				// do something with strings
			}
		}while(input);
	}
	return 0;
}
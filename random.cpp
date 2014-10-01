#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){

string com;
int num;
char letter;

while (1){
	com="";
	while(com=="" || com.at(0)=='#'){//ignore commented and empty lines
		getline(cin,com);
	}
	
	if(com.substr(0,7)=="genmove"){ //if a move is asked
		letter=rand()%19+'A';
		num=rand()%19+1;
		cout<<"="<<letter<<num<<"\n\n";
	} //else just accept the command
	else if (com.substr(0,4)=="name"){ cout<< "=Geongeon\n\n";}
	else if (com.substr(0,4)=="list"){ cout<< "=name play genmove\n\n";}

	else{cout<<"=\n\n";}
	
}

return 0;
}
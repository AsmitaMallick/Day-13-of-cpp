#include<iostream>
using namespace std;

int sum(int a, int b){
	return a+b;
}
int sum(int a, int b, int c){
	return a+b+c;
}
int main(){
	cout<<"the sum of 6 and 6 is "<<sum(6,6)<<endl;
	cout<<"the sum of 6,6 and 6 is "<<sum(6,6,6)<<endl;
	return 0;
	
}

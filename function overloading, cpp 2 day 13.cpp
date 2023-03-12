#include<iostream>
using namespace std;
//calculate volume of a cylinder
int volume(double r, int h){
return (3.14*r*r*h);
}
//calculate the volume of a cube
int volume(int a){
	return a*a*a;
}
//rectangle
int volume(int l, int b, int h){
	return l*b*h;
}
int main(){
	cout<<"the volume of cylinder "<<volume(1,2)<<endl;
	cout<<"the volume of cube "<<volume(1,2,2)<<endl;
	cout<<"the volume of rectangle "<<volume(3,6,8)<<endl;
	
}

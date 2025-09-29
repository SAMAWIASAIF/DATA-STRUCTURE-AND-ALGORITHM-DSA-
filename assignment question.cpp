#include <iostream>
using namespace std;
voidswap(int* i,int* r){
	int* p;
	p=i;
	i=r;
	r=p;
}
int main(){
	int a=3;
	int b=5;
	swap(&a,&b);
	cout<<a<<" "<<b;
}

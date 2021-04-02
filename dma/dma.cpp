#include<iostream>
using namespace std;
int main(){

	// primitive data types -->dma 
	// int x; sma
	// x=10;

	 int *ptr=new int;
	 *ptr=10;


	 cout<<*ptr<<endl;

	 // float f;
	 // f=70.89

	 float *fptr=new float;
	 *fptr=70.89;


	 cout<<*fptr<<endl;


	double *dptr=new double;
	 *dptr=800.89;


	 cout<<*dptr<<endl;


	 delete ptr;
	 ptr=0;


	 delete fptr;
	 fptr=0;
	 delete dptr;
	 dptr=NULL;

	 









	return 0;
}
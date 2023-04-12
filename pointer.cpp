#include <iostream>
using namespace std;

int main (){
//	int x=10;
//	int* ptr = &x;
//	cout<<"Alamat memori dari pointer ptr= "<< &ptr;
//	cout<<"\nNilai :"<<*ptr;
	
	int arr[3] = {10,20,30};
	int* ptr = arr;
	
	for(int i=0; i<3 ; i++){
		cout<<" val of arr ["<<i<<"] = "<< *ptr<<endl;
	}
}

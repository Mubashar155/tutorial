#include <iostream>
using namespace std;

int main(){
	// "ARITHMETIC OPERATOR"	

		int a=4;
int	b=4;
cout<<"the sum ="<<a+b<<endl;
cout<<"the subtract ="<<a-b<<endl;
cout<<"the multiply ="<<a*b<<endl;
cout<<"the divide ="<<a/b<<endl;
cout<<"the modulus ="<<a%b<<endl;


     // "RELATIONAL OPERATOR"	
		int a=4;
int	b=4;
cout<<(a<b)<<endl;
cout<<(a>b)<<endl;
cout<<(a&&b)<<endl;
cout<<(a||b)<<endl;
	

		
	
   // "LOGICAL OPERATOR"
   	
	cout<<((4<2)&&(5<7))<<endl;
           cout<<((5<2)||(5<7))<<endl;
           
    cout<<!((5<2)||(5<7))<<endl;

	//"INCREMENT AND DECREMENT OPERATOR"
	
	int a=8;
cout<<a++<<endl;
cout<<a<<endl;
cout<<++a<<endl;
cout<<a<<endl;
	
//	"THE SIZEOF data types"
	cout<<"the size of char is " << sizeof (char)<<"bytes"<<endl;
	cout<<"the size of short is " <<sizeof (short)<<"bytes"<<endl;
	cout<<"the size of int is" <<sizeof (int)<<"bytes"<<endl;
	cout<<"the size of long is" <<sizeof (long)<<"bytes"<<endl;
	
	
	
return 0;	
	
}

#include <iostream>
using namespace std;

int main(){
	
int a, b;
printf("enter the value of a");
scanf("%d" ,&a);
printf("enter the value of b");
scanf("%d", &b);

  // "ARITHMETIC OPERATOR"	
printf("a+b =%d/n" ,a+b);

printf("a*b =%d/n" , a*b)	;
	printf("a-b =%d/n", a-b);
	printf("a/b =%d/n" ,a/b);
	printf("a%b =%d/n",a%b);
	
     // "RELATIONAL OPERATOR"	
	
	int a,b;
	a=6;
	b=7;
	// Equal to
printf("a+b =%d/n" ,a==b);
//Not equal to
printf("a*b =%d/n" , a!=b)	;
   //less than
	printf("a-b =%d/n", a<b);
	//greater than
	printf("a/b =%d/n" ,a>b);
	//greater than or equal to
	printf("a%b =%d/n",a>=b);
		
	
   // "LOGICAL OPERATOR"	
	
	int a,b;
	a=8;
	b=5;
	printf("a+b =%d/n" ,a&&b);
	printf("a||b =?%d/n" ,a||b);
	printf("a+b %d/n",!b);
	//"INCREMENT AND DECREMENT OPERATOR"
	
	int a=8;
	printf ("a =%d/n",a);
	printf("a =%d/n",++a);
	
	int b=7;
	printf("b =%d/n",a);
	
	printf("b =%d/n"a++);
	
//	"THE SIZEOF data types"
	cout<<"the size of char is " << sizeof (char)<<"bytes"<<endl;
	cout<<"the size of short is " <<sizeof (short)<<"bytes"<<endl;
	cout<<"the size of int is" <<sizeof (int)<<"bytes"<<endl;
	cout<<"the size of long is" <<sizeof (long)<<"bytes"<<endl;
	
	
	
return 0;	
	
}

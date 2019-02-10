//making stack using arrays
#include<iostream>
using namespace std;
class stackarr{
	public:
	int n;
	int a[100];
	int b[100];
stackarr(int x){
	n =x;
	a[n];
	b[n];
	//Initialise them both to zero as default
	for(int i=0;i<n;i++){
		a[i] = 0;
	}
	for(int i=0;i<n;i++){
		b[i] = 0;
	}
}

//using the push function
void push(int value){
	//if the stack is empty
	if(n==0){cout << "empty stack" << endl; return;}

	//transfer of elements from array a to array b
	for(int i=0;i<n;i++){
		b[i] = a[i];
	}

	//filling the pos1 of array a and bring all the other values back
	a[0] = value;
	for(int i=0;i<n-1;i++){
		a[i+1] = b[i];
	}
}

//Pop and bubble sort
void pop(){
	//checking if the stack is empty
	if(n==0){cout << "Stack is empty" << endl; return;}

	//transfer of elements from array a to array b
	for(int i=0;i<n;i++){
		b[i] = a[i];
	}

	//transfer the values 
	for(int i=0;i<n-1;i++){
		a[i] = b[i+1];
	}
	//deleting pos1 value of b and update last element of array a to zero
	b[0]=0;
	a[n-1]=0;
}

//no. of elements in the stack
void size(){
	cout << "This stack can store upto " << n << " elements." << endl;
}
//ckecking if the stack is empty
void isEmpty(){
	if(n==0){cout << "This stack is empty."<<endl;}
	else {
	cout << "This stack can never be empty as it will contain zero if you don't give any input"<<endl;
	}
}
//displaying the top most element of the stack
void top(){
	cout << "The top is " << a[0] << endl;
}
//displaying the elements of the stack
void disp(){
	for(int i=0;i<n;i++){
	cout << a[i] << "->";
	}
	cout << "\b\b  " << endl;
}

};

int main(){
	int n;
	cout << "enter the length of the array" << endl;
	cin >> n;	
	stackarr s1(n);

	for(int i=1;i<=n;i++){
	s1.push(i);
	}
	s1.disp();
	s1.pop();
	s1.pop();
	s1.disp();
	s1.isEmpty();
	s1.top();
	s1.size();
	
return 0;
}

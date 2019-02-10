//making queue using two stacks
#include"Stack using LL.cpp"

class Qbyst{
	public:
	Node* front;
	Node* end;
	stack s1;
	stack s2;

Qbyst(){
	end=s1.top;
}


//Enqueue
void enqueue(int value){
	//using push
	s1.push(value);
}

//dequeue-ing the quque
void dequeue(){
	//checking if the queue is empty
	if(s1.top==NULL){cout << "You're deleting way too much! Stop.\n";
	return;	
	}

	else{
		//transfering the data from stack 2 
		while(s1.top!=NULL){
			s2.push(s1.top->data);
			s1.pop();
		}
		//pop 1 element from s2 and transfer everything back
		s2.pop();
		while(s2.top!=NULL){
			s1.push(s2.top->data);
			s2.pop();
		}
	}
}
void size(){
	s1.size();
}

bool isEmpty(){
	s1.isEmpty();
}
//the topmost element
void top(){
	//use the stack 1 top
	s1.topDisplay();
}
//displaying the elements of the queue
void display(){
	s1.display();
}

};

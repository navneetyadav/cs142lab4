//making stack using 2 queues
#include"queue using LL.cpp"

class stbyq{
	public:
	Node* top;
	queue q1;
	queue q2;
	//construct
	stbyq(){
		top=q1.end;
	}
//using the push function
void push(int value){
	//adding the elements to the queue using enqueue funtion
	q1.enqueue(value);
}

//pop function (popping the elements)
void pop(){
	//checking if the queue is empty
	if(q1.end==NULL){
		cout<< "empty queue << endl;
		return;
	}
	else{
		//take all the elements to q2(except last element of q1)
		while(q1.end->next!=NULL){
			q2.enqueue(q1.front->data);
			q1.dequeue();
		}
		//deleting the last element of the queue using dequeue
		q1.dequeue();
		//taking eberyting to q2
		while(q2.end!=NULL){
			q1.enqueue(q2.front->data);
			q2.dequeue();
		}
	}
}

//if the queue is empty
bool isEmpty(){
	q1.isEmpty();
}

//no. of elements in the stack
void size(){
	q1.size();
}

//stack display  TOP elemnys
void topdisdp(){
	cout << "The top is " << q1.end->data << endl;
}

// displaying all the elements
void display(){
	q1.display();
}

};

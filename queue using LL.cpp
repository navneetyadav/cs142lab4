#include"LL.cpp"

class queue{
	public:
	Node* front;
	Node* end;
	LinkedList l1;
	
	//constructor
	queue(){
		end=l1.head;
		front=l1.tail;
	}

	//adding from the end
	void enqueue(int value){
		//using insertAt from ll
		l1.insertAt(1,value);
		//updating front and the end
		end=l1.head;
		front=l1.tail;

	}

	//deleting the element from the end(as it is a queue)
	void dequeue(){
		l1.del();
		//swapping the values
		end=l1.head;
		front=l1.tail;
	}

	//checking if the clue os empty 
	bool isEmpty(){
		if(end == NULL){return true;}
		return false;
	}

	//counting the elements of the queue
	void size(){
		l1.countItems();
	}

	//displaying the elements of the queue
	void display(){
		l1.display();
	}

	//showing the elments at the end
	void enddisp(){
		cout << "The head is " <<l1.head->data << endl;
	}

};

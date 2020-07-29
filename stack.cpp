#include "iostream"
using namespace std;


class stack{	
	protected:
		int *arr;
		int top;
		int size;
	public:
		stack(int n){
		// intialize the stack with given size
		arr = new int [n];
		size = n;
		top = -1;
		};
		//check if stack is empty
		bool is_empty(){
			if (top==-1){
				return true;
			}
			else{
				return false;
			}
		}
		
		//check if stack is full
		bool is_full(){
			if(top+1==size){
				return true;
			}
			else{
				return false;
			}
		}
		
		//pop an element out
		int pop(){
			int tmp = arr[top];
			top--;
			return tmp;
		}
		
		//push an element
		void push(int el){
			if(is_full()){
				cout<<"error stack full\n";			
			}
			else{
				top++;
				arr[top]=el;
			}
		}
		
		//display all elements in stack
		void display(){
			for(int i=0;i<=top;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			cout<<"display";
		}

		




};
int main(){
	stack stk(10);
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.display();
}

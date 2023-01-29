#include <bits/stdc++.h>
using namespace std ;

struct stack_imp{
    int arr_stack[100];
	int top_ref=-1;
//==============================================================================
void push(int value ){
     if(top_ref<=99){
    top_ref++;
    arr_stack[top_ref]= value;
}else { cout <<" the stack is full ";}
}
//==============================================================================
void pop(){
if (isempty() == false){
top_ref--;
}else {
cout<<"not found num in satck ";
}
}
//==============================================================================
void top(){
if (isempty() == false){
cout<< arr_stack[top_ref];
}else {
cout<<"not found num in satck to print ";
}
}
//==============================================================================
bool isempty(){
if (top_ref == -1 ){
    return true ;
}else {
return false ;
}}

};
//==============================================================================
int main(){
	stack_imp s ;
	cout<<s.isempty()<<endl;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);


	while(s.isempty() == false ){
       s.top();
       cout<<endl;
       s.pop();
	}
s.push(200);
s.top();

}


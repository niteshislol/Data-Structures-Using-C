// #THESE IS TEMPLATE CLASS
// Generic Class 

 #include<iostream>
using namespace std;
template<class T>
 class Arithmetic{
private:
	T a;
	T b;
public:
	Arithmetic(T a , T b);
	T add();
	T sub();
};
template<class T>
Arithmetic<T>::Arithmetic(T a, T b){
this->a=a;
this->b=b;
}
template<class T>
T Arithmetic<T>::add(){
T c;
c = a+b;
return c;
}
template<class T>
T Arithmetic<T>::sub(){
T c;
c=a-b;
}
int main(){

Arithmetic <int> Arr(10,20);
Arithmetic <float> Arr1(10.6,13.55555);

cout<<Arr.add()<<endl; 
cout<<Arr.sub()<<endl;
cout<<Arr1.add()<<endl;
cout<<Arr1.sub()<<endl;
}
#include <iostream>
#include <string>
using namespace std;
class IntegerI{
private:
	int i;
public:
	IntegerI(int i){
		this->i=i;
	}
	void printNum(){
		cout<<"i = "<<i<<"\n";
	}
};
class IntegerJ:public IntegerI{
private:
	int j;
public:
	IntegerJ(int i,int j):IntegerI(i){
		this->j=j;
	}
	void printNum(){
		IntegerI::printNum();
		cout<<"j = "<<j<<"\n";
	}
};
int main() {
	IntegerJ integerJ(5,6);
	integerJ.printNum();
	system("pause");
	return 0;
}

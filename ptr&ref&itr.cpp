#include<vector>
#include<iostream>
#include<string>
#include<sstream>
//#include<system>
using namespace std;
class A{
	public:
	A(){
		num = 1;
		strcpy(str,"12");
	}
	public:
		int num;
		char str[3];
};
void main(){
	/*stringstream ss;
	char a[10];
	bool b2 = true;
	sprintf(a,"%d%c",b2,'a');
	ss.str(a);
	bool b1;
	int intA;
	ss>>b1>>intA;
	cout<<"bool b1------------>"<<boolalpha<<b1<<endl;*/
	/*bool IsA = false;
	cout<<IsA<<endl;
	cout<<IsA<<endl;
	cout<<IsA<<endl;
	cout<<IsA<<endl;
	cout<<IsA<<endl;
	/* a[2];
	sprintf("%d",IsA);
	cout<<a<<endl;
	cout<<a<<endl;
	cout<<a<<endl;
	cout<<a<<endl;
	cout<<a<<endl;
	cout<<a<<endl;*/
	//itA--;
	
	vector<A> vcA;
	vector<A>::iterator itA;
	A a1;
	a1.num = 1;
	vcA.push_back(a1);
	A a2;
	a2.num = 2;
	A a3;
	a3.num = 3;
	vcA.push_back(a3);
	A a4;
	a4.num = 4;
	vcA.push_back(a4);
	A *a5;
	cout<<"begin--->" <<(vcA.begin() + 1)->num<<endl;
	cout<<"front--->" <<vcA.front().num<<endl;
	
	cout<<"end--->" << vcA.end()->num<<endl;
	cout<<"(end-1)--->" << (vcA.end()-1)->num<<endl;
	
	itA = vcA.begin();
	
	cout<<"*itA--->" <<(*itA).num<<endl;
	cout<<"back--->" <<vcA.back().num<<endl;
	cout<<"back--->" <<vcA.back().num<<endl;
	a5 = &vcA.back();
	a5->num = 5;
	
	cout<< "location vcA.back-->"<<&(vcA.back())<<endl;
	cout<< "value a5--->"<<a5<<endl;

	cout<<"a5--->" <<a5->num<<endl;
	cout<<"back--->" <<vcA.back().num<<endl;
	//pause();

	cout<<"look!";
}

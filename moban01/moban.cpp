#include <iostream>
using namespace std;
#include "p01.hpp"





class Person
{
public:
	Person() {};
	Person(string name,int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};



void test01()
{
	//addarry<int>arr1(12);
	//arr1.push_arry(5);
	////cout << arr1.get_size() <<endl;
	////arr1.pop_arry();
	////cout << arr1.get_size() << endl;     检验尾插尾部删去
	//cout << arr1[0] << endl;
	addarry<Person>p1(4);
	Person p2("liu", 10);
	p1.push_arry(p2);
	cout << p1[0].m_name << endl;






}
int main()
{
	test01();
	system("pause");
	return 0;
}
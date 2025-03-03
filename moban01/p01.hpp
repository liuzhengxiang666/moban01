#pragma once
#include<iostream>
using namespace std;
#include <string>


template<class T>
class addarry 
{
public:
	addarry(int capacity)
	{
		
		this->m_capacity = capacity;
		m_arryptr = new T[m_capacity];
		this->m_size = 0;
		//cout << "构造函数调用" << endl;

	}
	addarry(const addarry& copy01)//拷贝
	{
		m_arryptr = new T[copy01.m_capacity];
		m_capacity = copy01.m_capacity;
		m_size = copy01.m_size;
		for (int i = 0; i < m_size; i++)
		{
			m_arryptr[i] = copy01.m_arryptr[i];
		}
		//cout << "拷贝函数调用" << endl;
	}
	~addarry()
	{
		//cout << "析构函数调用" << endl;
		if (m_arryptr != nullptr) {
			delete[] m_arryptr;  // 仅需一次释放数组
			m_arryptr = nullptr;
		}
	}

	addarry& operator=(const addarry&copy01)//  p.operate=(p1)    p(p1)
	{
		if (this == &copy01) return *this;
		if (m_arryptr != nullptr)
		{
			delete[] m_arryptr;
			m_arryptr = nullptr;
			this->m_capacity = 0;
			this->m_size = 0;
		}
		this->m_capacity = copy01.m_capacity;
		this->m_size = copy01.m_size;
		m_arryptr = new T[copy01.m_capacity];

		for (int i = 0; i < m_size; i++)
		{
			m_arryptr[i] = copy01.m_arryptr[i];
		}
		//cout << "运算符重构函数调用" << endl;
		return *this;




	}

	void push_arry(const T& other)//尾插
	{
		if (m_capacity == m_size)//判断是否满
		{
			cout << "数组已满" << endl;
			return ;
		}
		m_arryptr[m_size] = other;
		m_size++;

	}//尾插
	void pop_arry()
	{
		if ( m_size==0)//判断是否满
		{
			cout << "数组本来就为空" << endl;
			return ;
		}
		m_size--;

	}//尾删
	//用下标访问空间   问一下***
	T& operator[](int index)   
	{
		return m_arryptr[index];
	}//这里问一下ai
	int get_capacity()
	{
		return this->m_capacity;
	}
	int get_size()
	{
		return this->m_size;
	}
private:
	T* m_arryptr;//指向堆区的指针
	int m_capacity;//总共可以拥有多少个数组
	int m_size;//总共多少个数组
};

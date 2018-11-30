#include <iostream>
#include <deque>
#include <list>
using namespace std;

template<class T, class Container = list<T>>    //�������ͣ�������
class Stack
{
public:
	void Push(const T& data)
	{
		_con.push_back(data);
	}
	void Pop()
	{
		_con.pop_back();
	}
	bool Empty()
	{
		return _con.empty();
	}
	size_t Size()
	{
		return _con.size();
	}
	const T& Top()
	{
		return _con.back();
	}
private:
	Container _con;             //_con��һ��deque����
};
int main()
{
	Stack<int> s1;
	s1.Push(1);
	s1.Push(2);
	s1.Push(3);
	s1.Push(4);
	while (!s1.Empty())
	{
		cout << s1.Top() << " ";
		s1.Pop();
		cout << endl;
	}
	return 0;
}
#include <iostream>

class Stack
{
private:
    int m_array[10];
    int m_length;

public:

    void reset()
	{
		m_length = 0;
		for (int i = 0; i < 10; ++i)
			m_array[i] = 0;
	}

    bool push(int value)
	{
		if (m_length == 10)
			return false;

		m_array[m_length++] = value;
		return true;
	}

	int pop()
	{
		if (m_length == 0)
			return -1;

        return m_array[--m_length];
	}

	void print()
	{
	    std::cout << "( ";
	    for (int i = 0; i < m_length; ++i)
			std::cout << m_array[i] << " ";
	    std::cout << ")\n";
	}
};

int main()
{
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

	return 0;
}

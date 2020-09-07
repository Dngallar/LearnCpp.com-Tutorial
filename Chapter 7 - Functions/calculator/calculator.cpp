#include <iostream>

typedef int (*arithmeticFcn)(int, int);

struct arithmeticStruct
{
    char op;
    arithmeticFcn fcn;
};

int add(int x, int y)
{
    return x+y;
}

int subtract(int x, int y)
{
    return x-y;
}

int multiply(int x, int y)
{
    return x*y;
}

int divide(int x, int y)
{
    return x/y;
}

static arithmeticStruct arithmeticArray[]
{
	{ '+', add },
	{ '-', subtract },
	{ '*', multiply },
	{ '/', divide }
};

arithmeticFcn getArithmeticFcn(char op)
{
	for (auto arith : arithmeticArray)
	{
		if (arith.op == op)
			return arith.fcn;
	}

	return add;
}

int getInteger()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    return x;
}

char getOperation()
{
    char op;

    do
    {
        std::cout << "Enter an operation ('+', '-', '*', '/'): ";
        std::cin >> op;
    }
    while (op!='+' && op!='-' && op!='*' && op!='/');

    return op;
}

int main()
{
    int x = getInteger();
    char op = getOperation();
    int y = getInteger();
    arithmeticFcn fcn = getArithmeticFcn(op);

    std::cout << "The result is " << fcn(x, y);

    return 0;
}

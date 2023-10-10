// executeCommand.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <Windows.h>
#include <iostream>

int main()
{
    std::cout << "executing...";
    system("ping 8.8.8.8 -n 5");
    system("curl ifconfig.io/ip");
    system("pause");
    return 0;
}

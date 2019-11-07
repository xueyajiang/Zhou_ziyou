#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	/* 本次课主要讲解：格式化输入scanf()和输出printf() */
/*	int age = 10;
	char name[] = "Russell";
	char abc[] = "I am %d years old.\r\n";
	printf(abc, age);
	printf("I am %s, %x years old.\r\n", name, age);
    
	printf("%d\n", 1);
	printf("%o\n", 8);
	printf("%x\n", 17);
	printf("%u\n", 12);
	printf("%c\n", 49);
	printf("%s\n", " 1ab11 ");
	printf("%f\n", 0.14);
	printf("%e\n", 0.1);
	printf("%lld\n", 21473648);
	*/
/*	int a = 10;
	char name[] = "Russell";
	printf("a =%d, a =%4d\n", a, a);
	printf("Hello, I am %s.\n", name);
	printf("Hello, I am %10s.\n", name);
	printf("Hello, I am %-10s.\n", name);
	printf("Hello, I am %10.4s.\n", name);
	printf("Hello, I am %-10.4s.\n", name);
	printf("Hello, I am %10.14s.\n", name);
	printf("Hello, I am %-10.14s.\n", name);
*/
/*
    float e = 2.718;
    printf("e=%f(%%f)\n", e);
    printf("e=%10.5f(%%10.5f)\n", e);
    printf("e=%-10.5f(%%-10.5f)\n", e);
    printf("e=%10.2f(%%10.2f)\n", e);
    printf("e=%-10.2f(%%-10.2f)\n", e);
    printf("e=%10.f(%%10.f)\n", e);
    printf("e=%-10.f(%%-10.f)\n", e);
    printf("e=%3.4f(%%3.4f)\n", e);
    printf("e=%.2f(%%.2f)\n", e);
    printf("e=%-.2f(%%-.2f)\n", e);
*/
  /*  int a;  
    int b;
    scanf("%d, %d", &a, &b);
    cout << a << " " << b;
    scanf("%d---%d", &a, &b);
    cout << a << " " << b;*/
    int a1, b1, c1;
    scanf("%d+%d+%d", &a1, &b1, &c1);
    printf("%d + %d + %d = %d\n", a1, b1, c1, a1 + b1 + c1);
   
	return 0;
}

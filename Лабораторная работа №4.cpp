#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<malloc.h>

class st
{
public:
	char name[100];
	int mass;
	int height;

	class message
	{
	public:
		char msg[100];//Вложенная структура
	}str;
public:
	void vv(st ones, st two, st three, st four, st five)
	{
		printf("\n%s", ones.name);
		printf("\n%s", two.name);
		printf("\n%s", three.name);
		printf("\n%s", four.name);
		printf("\n%s\n", five.name);
		printf("\nРост и вес студента с именем %s:%d     %d", ones.name, ones.height, ones.mass);
		printf("\nРост и вес студента с именем %s:%d     %d", two.name, two.height, two.mass);
		printf("\nРост и вес студента с именем %s:%d     %d", three.name, three.height, three.mass);
		printf("\nРост и вес студента с именем %s:%d     %d", four.name, four.height, four.mass);
		printf("\nРост и вес студента с именем %s:%d     %d", five.name, five.height, five.mass);
	}
public:
	void print()
	{
		printf("Введите имя первого студента:");
		gets_s(ones.name);
		printf("Введите имя второго студента:");
		gets_s(two.name);
		printf("Введите имя третьего студента:");
		gets_s(three.name);
		printf("Введите имя четвёртого студента:");
		gets_s(four.name);
		printf("Введите имя пятого студента:");
		gets_s(five.name);
	}
public:
	void pr()
	{
		printf("Введите рост и вес первого студента:");
		scanf("%d", &ones.height); while (getchar() != '\n');
		scanf("%d", &ones.mass); while (getchar() != '\n');
		printf("Введите рост и вес второго студента:");
		scanf("%d", &two.height); while (getchar() != '\n');
		scanf("%d", &two.mass); while (getchar() != '\n');
		printf("Введите рост и вес третьего студента:");
		scanf("%d", &three.height); while (getchar() != '\n');
		scanf("%d", &three.mass); while (getchar() != '\n');
		printf("Введите рост и вес четвёртого студента:");
		scanf("%d", &four.height); while (getchar() != '\n');
		scanf("%d", &four.mass); while (getchar() != '\n');
		printf("Введите рост и вес пятого студента:");
		scanf("%d", &five.height); while (getchar() != '\n');
		scanf("%d", &five.mass); while (getchar() != '\n');
	}
public:
	st doc(st* a)//Передача динамического параметра
	{
		a = (st*)malloc(sizeof(st));
		printf("\nВведите данные старосты\nВведите имя:");
		gets_s(a->name);
		printf("%s", a->name);
		printf("\nНапишите ей сообщение,касаемо успеваемости студентов\nВаше сообщение:");
		gets_s(a->str.msg);
		printf("%s", a->str.msg);

		return *a;
	}
}ones, two, three, four, five;
st* a = new st[5];
class teacher
{
	char named[100];
	char surname[100];
	char n[100];
	void scan()
	{
		printf("Введите свои имя и фамилию:\n");
		gets_s(named);
		gets_s(surname);
		printf("%s", named);
		printf("%s", surname);

	}
	void print()
	{
		printf("Введите имя студента, дабы посмотреть его данные:");
		gets_s(n);
		if (ones.name == n || two.name == n || three.name == n || four.name == n || five.name == n)
			printf("По вашему запросу найден результат:");
		else printf("По вашему запросу ничего не найдено");
		if (ones.name == n)
			printf("\nРост и вес студента с именем %s:%d     %d", ones.name, ones.height, ones.mass);
		else if (two.name == n)
			printf("\nРост и вес студента с именем %s:%d     %d", two.name, two.height, two.mass);
		else if (three.name == n)
			printf("\nРост и вес студента с именем %s:%d     %d", three.name, three.height, three.mass);
		else if (four.name == n)
			printf("\nРост и вес студента с именем %s:%d     %d", four.name, four.height, four.mass);
		else if (five.name == n)
			printf("\nРост и вес студента с именем %s:%d     %d", five.name, five.height, five.mass);
	}

};








int main()
{

	SetConsoleCP(1251);
	setlocale(LC_ALL, "russian");
	ones.print();
	ones.pr();
	ones.vv(ones, two, three, four, five);
	ones.doc(a);
	delete a;


}
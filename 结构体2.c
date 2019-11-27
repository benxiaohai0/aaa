#include<stdio.h>
#include<string.h>

struct books
{
	char title[50];
	char author[50];
	char subject[50];
	int id;
};

int main()
{
	struct books book1;
	struct books book2;
	strcpy(book1.title,"cyuyan");
	strcpy(book1.author, "an");
	strcpy(book1.subject, "biancheng");
	book1.id=123456;
	strcpy(book2.title, "C语言");
	strcpy(book2.author, "顺");
	strcpy(book2.subject, "编程");
	book2.id = 789456;
	printf("%s\n%s\n%s\n%d\n", book1.title,book1.author, book1.subject, book1.id);
	printf("%s\n%s\n%s\n%d\n", book2.title, book2.author, book2.subject, book2.id);
	return 0;
}

#include <iostream.h>
#include <conio.h>
class person
{
char name[50];
int age;
public:
void getdata(void);
void display(void);
};
void person :: getdata(void)
{
cout << "Enter name: ";
cin >> name;
cout << "Enter age: ";
cin >> age;
}
void person :: display(void)
{
cout << "\nName: "<< name;
cout << "\nAge: " << age;
}
int main()
{
clrscr();
person p;
p.getdata();
p.display();
getch();
return 0;
}
#include <stdio.h>


struct 
{
    char *name;
    char *school;
    int class;

}student_1, student_2;

int main(){
int x = 5, *ptr_x = &x;
int y = 6, *ptr_y = &y;
char *statement = "This is a statement";


student_1.name = "Dilshad";
student_1.school = "MIS";
student_1.class = 10;

student_2.name = "Prasun";
student_2.school = "Golbal";
student_2.class = 9;


printf("%s \n", student_1.name);
printf("%s \n", student_2.name);
printf("%s \n", student_1.school);
printf("%s \n", student_2.school);


printf("%d \n", ptr_x);
printf("%d", ptr_y);
printf("%s", statement);


return 0;
}


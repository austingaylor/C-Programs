#include <stdio.h>

struct person 
{
  char first_name[20];
  char last_name[20];
  int age;
};

void print_person_info( struct person clone);
void sort_by_age(int n, struct person a[]);

int main(void)
{

  int i, n = 5; 

  struct person student[5] = 
{
  {"Bob", "Smith", 21}, 
  {"Jimmy", "John", 18},
  {"Amy", "Goldberg", 20},
  {"Dan", "Marlo", 17},
  {"Sally", "Sorrow", 16}
};

for(i = 0; i < n; i++)
  print_person_info(student[i]);

  sort_by_age(n, student);

  printf("----- AFTER SORTING ----------\n\n");

for(i = 0; i < n; i++)
  print_person_info(student[i]);

return 0;

}

void sort_by_age(int n, struct person a[])
{

struct person temp;
int i, j; 

for(i = 0; i < n - 1; i++)
 { 
   for(j = i +  1; j < n; j++)
     {

	if(a[i].age > a[j].age)
   	{
  	  temp = a[i];
   	  a[i] = a[j];
   	  a[j] = temp; 		
   	}
     } 
 } 

}

void print_person_info(struct person clone)
{

printf("First Name = %s\n", clone.first_name);
printf("Last Name = %s\n", clone.last_name); 
printf("Age = %i\n", clone.age);
printf("-----------------------------------\n");
}

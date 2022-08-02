#include <stdio.h>
#include <stdlib.h>

//define structure
struct employee_details
{
    char last[20];
    char first[20];
    int employee_id;
    int last_4_SSN;
    char title[20];
} ;

struct employees
{
    struct employee_details employee1;
    struct employee_details employee2;
} test_dept;

int main(void)
{
    for(int i =0; i<2; i++)
    {
        struct employee_details *employee = &test_dept.employee1;
        if (i>0) employee = &test_dept.employee2;

        printf("Enter employee's first name: ");
        scanf("%s", &employee->first);

        printf("Enter employee's last name: ");
        scanf("%s", &employee->last);

        printf("Enter the employee's ID number: ");
		scanf("%d", &employee->employee_id);

        printf("Enter the last four digits of the employee's SSN: ");
		scanf("%d", &employee->last_4_SSN);

        printf("Enter the employee's job title (do not include the word \'Engineer\'): ");
		scanf("%s", &employee->title);

        printf("\n");
    }

    //print all the info we just stored for each employee
	for(int i = 0; i < 2; i++) {
		struct employee_details *employee = &test_dept.employee1;
		if(i > 0)
			employee = &test_dept.employee2;

		printf("\nEmployee information for %s %s: ", employee->first, employee->last);
		printf("\nID: %d", employee->employee_id);
		printf("\nSSN: %d", employee->last_4_SSN);
		printf("\nTitle: %s Engineer\n", employee->title);
	}

    return 0;

}

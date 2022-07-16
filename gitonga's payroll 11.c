/*GITONGA FACTORY PAYROLL
CREATED BY DAVID MARWA
ON JULY 14 2022
C89 COMPILER
*/
#include <stdio.h>

int main()
{int totalhoursworked = 40;
 int krapin,employmentNo,hoursworked,normalpay,overtimepay,taxpaid,netincome;
 char name[40];
 printf("welcome to Gitongas Factory\n");
 printf("Enter your Name:");
	scanf("%s", &name);

	printf("Enter your employee number: ");
	scanf("%d", &employmentNo);

	printf("Enter your KRA pin: ");
	scanf("%d", &krapin);

	printf(" Enter number of hours worked: ");
	scanf(" %d", &hoursworked);


	normalpay = 1000 * totalhoursworked;
	overtimepay = (hoursworked - totalhoursworked) * 1500;
	taxpaid = normalpay * 30/100;
	netincome = (normalpay - taxpaid) + overtimepay;

	printf("normalpay: %d\n", normalpay);
	printf("overtimepay: %d\n", overtimepay);
	printf("taxpaid: %d\n", taxpaid);
	printf("netincome: %d\n", netincome);

	return 0;
}



/*Author:Md Shoaib
  Purpose:A company decides to give bonus to all its employess on new year. A 5% bonus on salary is given to male workers and 10% bonus on salary is 
  given to female workers. Write a C program to enter the salary and gender of the employees. If the salary of the employees is less than 10000, then 
  the employee gets an extra 2% bonus on salary. Calculate the bonus that has to be given to the employee and display the salary that the employee will
  get? 
  Date:13/08/2019 */
#include <stdio.h>

int main()
{
    //Variable declaration
    float salary, bonus, lessSalary, addBonus;
    char gender;
    //Gender selection
    printf("Please enter M for male or F for Female:\n");
    scanf("%c", &gender);
    //Input salary from user
    printf("Please enter salary:\n");
    scanf("%f", &salary);
    //Assign salary to lessSalry for add again 2% salary
    lessSalary = salary;

    //Logic to give bonus to the employee by judgeing gender
    if (gender == 'M' || gender == 'm')
    {
        bonus = salary * 5 / 100;
        salary = salary + bonus;
        printf("Bonus = %0.2f\n", bonus);
    }
    else if (gender == 'F' || gender == 'f')
    {
        bonus = salary * 10 / 100;
        salary = salary + bonus;
        printf("Bonus = %0.2f\n", bonus);
    }

    //Give 2% extra if salary <10000
    if (lessSalary < 10000)
    {
        addBonus = lessSalary * 2 / 100;
        salary = salary + addBonus;
        printf("Add Bonus = %.2f\n", addBonus);
    }

    //Print to user
    printf("Salary = %0.2f\n", salary);

    return 0;
}


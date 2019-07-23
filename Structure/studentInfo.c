/*Author: Md Shoaib
  Purpose: Store Student information using structure data type
  Date: 11/07/2019 */
#include <stdio.h>
//Structure
struct studentInfo
{
  int id;
  int marks;
  char fav_char;
};
//Main program
int main()
{
  //structure variable declaration
  struct studentInfo shoaib, gulgar, sagnik;
  //assign values to our structure variables
  //id assign
  shoaib.id = 1;
  gulgar.id = 2;
  sagnik.id = 3;
  //marks assign
  shoaib.marks = 465;
  gulgar.marks = 475;
  sagnik.marks = 480;
  //fav_char assign
  shoaib.fav_char = 'S';
  gulgar.fav_char = 'M';
  sagnik.fav_char = 'B';
  //print shoaib info
  printf("Shoaib's id is = %d\nShoaib's mark is = %d\nShoaib's fav_char is %c\n\n", shoaib.id, shoaib.marks, shoaib.fav_char);
  //print gulgar info
  printf("gulgar's id is = %d\ngulgar's mark is = %d\ngulgar's fav_char is %c\n\n", gulgar.id, gulgar.marks, gulgar.fav_char);
  //print sagnik info
  printf("Sagnik's id is = %d\nSagnik's mark is = %d\nSagnik's fav_char is %c\n\n", sagnik.id, sagnik.marks, sagnik.fav_char);

  return 0;
}

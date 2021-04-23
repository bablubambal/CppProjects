#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>


using namespace std;
int add (int a, int b);
int sub (int a, int b);
int mul (int a, int b);
int division (int a, int b);
void sqr ();
void srt ();
void exiting ();

int
main ()
{
  //clrscr();
  int opr, firstNumber, secondNumber;
  do
    {
      cout <<
	"Select any operation from the C++ Calculator \n1 = Addition \n2 = Subtraction \n3 = Multiplication";
      cout <<
	"\n4 = Division \n5 = Square \n6 = Square Root\n7 = Exit \n Make your Selection: ";
      cin >> opr;
      switch (opr)
	{
	case 1:
	  cout << "Type a number: ";
	  cin >> firstNumber;
	  cout << "Type another number: ";
	  cin >> secondNumber;
	  add (firstNumber, secondNumber);
	  break;
	case 2:
	  cout << "Type a number: ";
	  cin >> firstNumber;
	  cout << "Type another number: ";
	  cin >> secondNumber;
	  sub (firstNumber, secondNumber);
	  break;
	case 3:
	  cout << "Type a number: ";
	  cin >> firstNumber;
	  cout << "Type another number: ";
	  cin >> secondNumber;
	  mul (firstNumber, secondNumber);
	  break;
	case 4:
	  cout << "Type a number: ";
	  cin >> firstNumber;
	  cout << "Type another number: ";
	  cin >> secondNumber;
	  division (firstNumber, secondNumber);
	  break;
	case 5:
	  sqr ();
	  break;
	case 6:
	  srt ();
	  break;
	case 7:
	  exit (0);
	  break;
	default:
	  cout << "!!!Make Correct Selection......";
	  break;
	}
      cout << "\n ......................................\n";



    }
  while (opr != 7);
  getch ();

  return 0;
}

int
add (int a, int b)
{
  cout << "The Sum is : " << a + b;

}

int
sub (int a, int b)
{
  cout << "The Subtraction is: " << a - b;

}

int
mul (int a, int b)
{
  cout << "The Multiplication is: " << a * b;

}

int
division (int a, int b)
{
  cout << "The Division is: " << (float) a / b;
}

void
sqr ()
{
  int num1;
  float sq;
  cout << "Enter a number to find out the square: ";
  cin >> num1;
  sq = num1 * num1;
  cout << "\n Square of " << num1 << " is : " << sq;

}

void
srt ()
{
  int num1;
  float sq;
  cout << "Enter a number to find out the Square Root ";
  cin >> num1;
  sq = sqrt (num1);
  cout << "Square root is : " << sq;
}

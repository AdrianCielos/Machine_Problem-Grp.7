#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
#include<math.h>

using namespace std;

int main()
{
	const double Pi = 3.1415;
	float a, b, c, A, B, C, semi, area, perim, hero, apot, k, l, xB = 0, yB = 0, xA, yA, xC, yC = 0, xAB, yAB, xAC, yAC, pb1, pb2, x, y;
	char choice;
	bool userquit = false;

	do
	{
		cout << "PLEASE ENTER THE MEASUREMENTS OF THE TRIANGLE!\n";
		cout << "Enter side A: "; cin >> a;
		cout << "Enter side B: "; cin >> b;
		cout << "Enter side C: "; cin >> c;

		A = (acos(((b * b) + (c * c) - (a * a)) / (2 * b * c))) * (180 / Pi);
		B = (acos(((a * a) + (c * c) - (b * b)) / (2 * a * c))) * (180 / Pi);
		C = (acos(((a * a) + (b * b) - (c * c)) / (2 * a * b))) * (180 / Pi);

		cout << endl;
		cout << "The interior angles are: \n";
		cout << abs(A) << " Degrees\n";
		cout << abs(B) << " Degrees\n";
		cout << abs(C) << " Degrees\n";
		
		cout << endl;

			if ((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
			{
			cout << "The triangle type is Isosceles Triangle!\n";
			}
			else if (a == b && b == c) 
			{
			cout << "The triangle type is Equilateral Triangle!\n";
			}
			else 
			{
			cout << "The triangle type is Scalene Triangle!\n";
			}
		cout << endl;
		semi = (a + b + c) / 2;
		hero = semi * (semi - a) * (semi - b) * (semi - c);
		area = sqrt(hero);
		perim = a + b + c;

		cout << "The triangle's area is: " << area << " m^2.\n" << endl;
		cout << "The triangle's perimeter is: " << perim << " m.\n" << endl;

			if (A < 90 && B < 90 && C < 90) 
			{
			cout << "The triangle classification is Acute Triangle!\n";
			}
			else if (A == 90 || B == 90 || C == 90)
			{
				cout << "The triangle classification is Right Triangle!\n";
			}
			else if (A > 90 || B > 90 || C > 90) 
			{
			cout << "The triangle classification is Obtuse Triangle!\n";
			}
			
		cout << endl;
		
		apot = (area * 2) / perim;
			if (a == b && a == c) 
			{
			cout << "Apothem's length: " << apot << "." << endl;
			}
			else 
			{
			cout << "The apothem does not exist." << endl;
			}
			
			cout << endl;
			
		xC = a;
		k = cos(B * Pi / 180);
		xA = c * k;
		l = sin(C * Pi / 180);
		yA = b * l;
		cout << "The triangle's x and y coordinates: " << endl;
		cout << "(0,0)" << endl;
		cout << "(" << a << ",0)" << endl;
		cout << "(" << xA << "," << yA << ")" << endl;

		xAB = (xB + xA) / 2; yAB = (yB + yA) / 2;
		pb1 = -((xB - xA) / (yB - yA));
		xAC = (xA + xC) / 2; yAC = (yA + yC) / 2;
		pb2 = -((xC - xA) / (yC - yA));

		x = ((xAC * pb2) - (xAB * pb1)) / (pb2 - pb1);
		y = yAC + (pb2 * (x - xAC));

		cout << "\nCircumcenter's coordinates: " << x << " ," << y << ".";
		
		cout << endl;

		cout << "\nDo you want to continue? (Y/N): ";
		cin >> choice;
		
		cout << endl;
		
		switch (choice)
		{
		case 'y':
		case 'Y':
		{userquit = false; }
		break;
		case 'n':
		case 'N':
		{userquit = true; }
		break;
		default:
		{userquit = true; }
		}

	} while (!userquit);
	system("break");
	getch();
	return 0;
}

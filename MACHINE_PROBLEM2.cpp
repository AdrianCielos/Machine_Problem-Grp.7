#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	double rad, h, s, vol, lat, b, surf, l, w, sl, sw;
	char shape, sel;
	int pi = 3.14;
	bool userquit = false;

	do
	{
		cout << "GEOMETRIC CALCULATOR";
		cout << endl;
		cout << endl;
		cout << "Please Select Any Geometric Shape: [C]one, [P]yramid, or [S]phere";
		cout << endl;
		cin >> shape;
		cout << endl;
		
		switch (shape)
		{
		case 'C':
		case 'c':
	
			cout << "Please enter the value for your desired radius: "; cin >> rad;
			cout << endl;
			cout << "Please enter the value for your desired height: "; cin >> h;
			cout << endl;
			
			vol = 0.33 * pi * rad * rad * h;
			s = sqrt((rad * rad) + (h * h));
			lat = pi * rad * s;
			b = pi * rad * rad;
			surf = (pi * rad * s) + (pi * rad * rad);
			cout << "The VOLUME of the CONE is: " << vol;
			cout << endl;
			cout << "The LATERAL AREA of the CONE is: " << lat;
			cout << endl;
			cout << "The BASE AREA of the CONE is: " << b;
			cout << endl;
			cout << "The SURFACE AREA of the CONE is: " << surf;
			break;

		case 'P':
		case 'p':
			
			cout << "Please enter the value for your desired length: "; cin >> l;
			cout << endl;
			cout << "Please enter the value for your desired width: "; cin >> w;
			cout << endl;
			cout << "Please enter the value for your desired height: "; cin >> h;
			cout << endl;
			
			vol = (l * w * h) / 3;
			sl = sqrt((h * h) + (l / 2 * l / 2));
			sw = sqrt((h * h) + (w / 2 * w / 2));
			lat = l * sl + w * sw;
			surf = (l * w) + (2 * (0.5 * l * sl)) + (2 * (0.5 * w * sw));
			b = l * w;
			cout << "The VOLUME of the PYRAMID is: " << vol;
			cout << endl;
			cout << "The LATERAL AREA of the PYRAMID is: " << lat;
			cout << endl;
			cout << "The BASE AREA of the PYRAMID is: " << b;
			cout << endl;
			cout << "The SURFACE AREA of the PYRAMID is: " << surf;
			break;
	
		case 'S':
		case 's':
			
			
			cout << "Please enter the value for your desired radius: "; cin >> rad;
			cout << endl;

			surf = 4 * pi * rad * rad;
			vol = 4 / 3 * pi * rad * rad * rad;
			
			cout << "The VOLUME of the SPHERE is: " << vol;
			cout << endl;
			cout << "The SURFACE AREA of the SPHERE is: " << surf;
			break;
			
		default: 
			cout << "INVALID GEOMETRIC SHAPE!";
	 	}
		
		cout << endl;
		cout << endl;
		cout << "Do you still want to continue? [Y]es OR [N]o"; 
		cout << endl;
		cin >> sel;
		cout << endl;

		switch (sel)
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
			break;
			
		}
	} while (!userquit);
	system("pause");
	getch ();
	return 0;
}


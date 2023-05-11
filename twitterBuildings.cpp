#include<iostream>
#include<cmath>
using namespace std;
bool positive(int a) {
	if (a <= 0)
		return false;
	return true;

}
int main() {
	int  height, width;
	char choice;
	cout << "Enter your choice from following options:\n";
	cout << " To build rectangle press 1\n";
	cout << " To build triangle press 2\n";
	cin >> choice;
	while (choice != '3')
	{
		switch (choice) {
		case '1':
			cout << "please enter height of rectangle\n";
			cin >> height;
			while (!positive(height))
			{
				cout << "Height must be positive\nplease enter height of rectangle\n";
				cin >> height;
			}
			cout << "please enter width of rectangle\n";
			cin >> width;
			while (!positive(width))
			{
				cout << "width must be positive\nplease enter width of rectangle\n";
				cin >> width;
			}
			if (width == height || abs(width - height) > 5) {
				cout << "The area of the rectangle is: ";
				cout << height * width << endl;
			}

			else {
				cout << "The circumference of the rectangle is: ";
				cout << 2 * height + 2 * width << endl;
			}

			break;

		case '2':
			char letter;
			cout << "please enter height of triangle\n";
			cin >> height;
			while (!positive(height))
			{
				cout << "Height must be positive\nplease enter height of triangle\n";
				cin >> height;
			}
			cout << "please enter width of triangle\n";
			cin >> width;
			while (!positive(width))
			{
				cout << "width must be positive\nplease enter width of triangle\n";
				cin >> width;
			}

			cout << "To calculate circumference of triangle enter A \n";
			cout << "To print the triangle enter B \n";
			cin >> letter;
			if (letter == 'A')
			{
				float a;
				a = sqrt(pow(width / 2 + (width % 2) * .5, 2) + pow((height), 2));
				cout << "The circumference of the triangle is: ";
				cout << 2 * a + width << endl;
			}
				
			if(letter=='B')
			{
				if (width % 2 == 0)
					cout << "We are unable to print the trianlgle\n";
				else
					if (width > height * 2)
						cout << "We are unable to print the trianlgle\n";
					else
						if (width == 1)
							for (int i = 0; i < height; i++)
								cout << "*\n";
				   else {
					    int newHeight = height - 2;
						int group = (width - 2) / 2;
						int rowPerGroup = newHeight / group;
						int check = newHeight % group;

						//first row of stars
						//spaces
						for (int j = 0; j < group + 2; j++) {
							cout << " ";
						}
					    cout << "*\n";

					    //checks if the number of rows doesnt divide by the group
					    if (check > 0)
						for (int j = 0; j < check; j++) {

							// print spaces to center the row
							for (int m = 2; m < group + 3; m++) {
								cout << " ";
							}

							// print stars for the current row
							for (int n = 2; n < 2 + 3; ++n) {


								cout << "*";
							}
							cout << endl;
						}

					    //prints the middle blocks of rows
					    for (int k = 0; k < group; k++) {
					    	for (int j = 0; j < rowPerGroup; j++) {

							// print spaces to center the row
							for (int m = 2; m < group - k + 3; m++) {
								cout << " ";
							}

							// print stars for the current row
							for (int n = 2; n < 2 * k + 5; ++n) {


								cout << "*";
							}

							// move to the next row
							cout << endl;


					    	}
				    	}


					//last row of stars
					cout << " ";
					for (int k = 0; k < width; ++k) {


						cout << "*";
					}
					cout << endl;

				}
			
				
				break;

			}
			if (letter != 'A' && letter != 'B')
				cout << " ERROR your choice is invalid\n";
			break;
			

		default: cout << "ERROR! The number you have entered is not an option" << endl; break;

		}
		
		cout << "Enter your choice from following options:\n";
		cout << " To build rectangle press 1\n";
		cout << " To build triangle press 2\n";
		cin >> choice;
	}

	return 0;
}
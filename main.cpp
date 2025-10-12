

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int choice = 0;

	while (choice != 5)
	{
		// The menu 
		cout << "====================\n";
		cout << "Simple calculator\n";
		cout << "====================\n";
		cout << "1. Add 2 numbers\n";
		cout << "2. Substract 2 numbers\n";
		cout << "3. Multiply 2 numbers\n";
		cout << "4. Divide 2 numbers\n";
		cout << "5. Exit\n";
		cout << "Choose an option by typing 1-5.\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Write 2 numbers you want to add (use space between)\n";
			double tal1;
			double tal2;
			cin >> tal1 >> tal2;
			cout << tal1 << " + " << tal2 << " = " << tal1 + tal2 << endl;
			break;
		
		case 2:
			cout << "Write 2 numbers you want to subtract (use space between)\n";
			double tal11;
			double tal22;
			cin >> tal11 >> tal22;
			cout << tal11 << " - " << tal22 << " = " << tal11 - tal22 << endl;
			break;

		case 3:
			cout << "Write 2 numbers you wanto to multiply (use space between)\n";
			double tal111;
			double tal222;
			cin >> tal111 >> tal222;
			cout << tal111 << " * " << tal222 << " = " << tal111 * tal222 << endl;
			break;

		case 4:
			cout << "Write 2 numbers you want to divide (use space between)\n";
			double tal1111;
			double tal2222;
			cin >> tal1111 >> tal2222;
			cout << tal1111 << " / " << tal2222 << " = " << tal1111 / tal2222 << endl;
			break;

		}
	}
}

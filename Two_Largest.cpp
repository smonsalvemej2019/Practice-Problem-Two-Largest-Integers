
//This program will ask the user to input a list of numbers of any size and it will find the two largest values in that list in one loop

//prototype for the function getlargest

void getlargest(vector &list);

int main() {

//main loop to prevent the program from exiting instanly
int exit = 1;
while (exit != 0)
{
	//declaration of the vector and the input variable
	vector<int> list;
	int in;

	//Vector initialization
	cout << "\nThis program will find the largest integer in a list" << endl;
	cout << "enter 0 if you want to exit the loop" << endl;
	while (1)
	{
		cout << "Please enter a number then press enter: ";
		cin >> in;
		if (in == 0)
			break;

		list.push_back(in);


	}

	//if else statement checks if the list is empty
	if (list.empty())
	{
		cout << "Your list is empty" << endl;
	}
	else
	{
		cout << "\nyour lis of numbers is: ";

		for (int i = 0; i < list.size(); i++)
		{
			cout << list[i] << " , ";
			
		}
		getlargest(list);
	}

	//condition to exit the main while loop
	cout << "press 0 to exit the loop" << endl;
	cin >> exit;
}
}

//Function definition of get largest

void getlargest(vector &list) {

int large1 = 0;
int large2 = 0;

for (int i = 0; i < list.size(); i++) {

	if (list[i] > large1) {

		large2 = large1;
		large1 = list[i];
	}
	else if (list[i] > large2)
		large2 = list[i];
}
cout << "\n\nLargest numbers are: " << large1 << " and " << large2 << endl;
}

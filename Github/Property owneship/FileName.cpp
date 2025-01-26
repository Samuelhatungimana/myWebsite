#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Owner {

private:
	string firstName;
	string lastName;
	int age;
	string id;
	string adress;
	string birthPlace;
public:
	Owner() {
		firstName = "";
		lastName = " ";
		age = 0;
		id = "";
		adress = "";
		birthPlace = "";

	}

	void setData(string first, string last, int Age, string ID, string Adress ,string BirthPlace) {
		firstName = first;
		lastName = last;
		age = Age;
		id = ID;
		adress = Adress;
		birthPlace = BirthPlace;
		
	}
	string getFirstName() { return firstName; }
	string getLastName() { return lastName; }
	int getAge() { return age; }
	string getId() { return id; }
	string getAdress() { return adress; }
	string getBirthPlace() { return birthPlace; }

	void printData() {
		cout << "Full name: " << getFirstName() << " " << getLastName() << endl;
		cout << " Birth place: " << getBirthPlace() << endl;
		cout << "Your Age: " << getAge() << " " << "years old" << endl;
		cout << " Address :" << getAdress() << endl;
		cout << "Identification: " << getId() << endl;
	}

};
class LandProperty : public Owner {

private:
	string Datepurchased;
	double AreaSize;
	string AreaLocation;
	double amountpaid;

public:
	LandProperty() {
		Datepurchased = "";
		AreaSize = 0;
		AreaLocation = "";
		amountpaid = 0;
	}
	void addDetails(string date, double size, string location, double paidAmount) {
		Datepurchased = date;
		AreaSize = size;
		AreaLocation = location;
		amountpaid = paidAmount;

	}
	string getpurchasedDate() { return Datepurchased; }
	double getSize() { return AreaSize; }
	string getLocation() { return AreaLocation; }
	double getAmountPaid() { return amountpaid; }

	void PrintLandDetails() {

		cout << " Date purchased: " << getpurchasedDate() << endl;
		cout << " Size of the land: " << getSize() << " hectares" << endl;
		cout << " The Location: " << getLocation() << endl;
		cout << " How much paid: $" << getAmountPaid() << endl;

	}



};
class House : public Owner {
private:
	string Datepurchased;
	int numRooms;
	string AreaLocation;
	double amountpaid;

public:
	House() {
		Datepurchased = "";
		numRooms = 0;
		AreaLocation = "";
		amountpaid = 0;
	}
	void addDetails(string date,int number, string location, double paidAmount) {
		Datepurchased = date;
		numRooms = number;
		AreaLocation = location;
		amountpaid = paidAmount;

	}
	string getpurchasedDate() { return Datepurchased; }
	double getNumber() { return numRooms; }
	string getLocation() { return AreaLocation; }
	double getAmountPaid() { return amountpaid; }

	void PrinthouseDetails() {

		cout << " Date purchased: " << getpurchasedDate() << endl;
		cout << " Number of rooms in the house: " << getNumber()<< endl;
		cout << " The Location: " << getLocation() << endl;
		cout << " How much paid: $" << getAmountPaid() << endl;

	}

};

void Menu() {
	cout << "1: Register your properties" << endl;
	cout << "2: Add your new properties" << endl;
	cout << "3: Sell the properties" << endl;
	cout << "4: Update your profile" << endl;
	cout << "5: Exit the menu" << endl;
}
int main() {
	char choice;
	int Option;
	vector<Owner*> Records;
	string fName;
	string lname;
	int Age;
	string Id;
	string address;
	string birthplace;


	do {
		cout << "*** Display the menu *** " << endl;
		cout << " A: To perform on the Land property" << endl;
		cout << " B: To perform on the House property" << endl;
		cout << " C: To Exit the program" << endl;
		cout << endl;

		cout << " Enter the choice:";
		cin >> choice;
		cout << endl;

		switch (choice) {

		case 'A': {

			do {
				Menu();

				cout << "\n Enter the option:";
				cin >> Option;
				switch (Option) {
				case 1:
					string datePurchased;
					double AreaSize;
					string Location;
					double Amount;
					cout << "Input first name: ";
					cin >> fName;
					cout << "Input last name: ";
					cin >> lname;
					cout << "Input your age: ";
					cin >> Age;
					cout << "Input your Id: ";
					cin >> Id;
					cout << "Input the address: ";
					cin >> address;
					cout << "Input the place of birth: ";
					cin >> birthplace;
					cout << "Date of purchase: ";
					cin >> datePurchased;
					cout << "Size of the land: ";
					cin >> AreaSize;
					cout << "Input the location: ";
					cin >> Location;
					cout << "How much did you pay for the land: ";
					cin >> Amount;

					LandProperty* Land = new LandProperty();
					Land->setData(fName, lname, Age, Id, address, birthplace);
					Land->addDetails(datePurchased, AreaSize, Location, Amount);
					Records.push_back(Land);

					break;







				}








			} while (Option != 1);
		}



		}




	} while (choice != 'c');




}
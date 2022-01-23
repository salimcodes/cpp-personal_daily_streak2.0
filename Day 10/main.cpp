#include <iostream>

using namespace std;

struct Chg
{
	char chemical_engineering[50];
	char pet_and_gas_engineering[50];
};

struct Elect
{
	char electrical_and_electronics_engineering[50];
	char computer_engineering[50];
};

struct BGS_in_engr
{
	char biomedical_engineering[50];
	char civil_engineering[50];
	char met_and_mat_engineering[50];
	char surveying_and_geoinformatics_engineering[50];
	char systems_engineering[50];
	Chg chg;
	Elect elect;
};
int main()
{
	
	BGS_in_engr BGS;
	cout << "Enter the best graduating student for Biomedical Engineering: " << endl;
	cin.getline(BGS.biomedical_engineering, 50);
	cout << "Enter the best graduating student for Civil Engineering: " << endl;
	cin.getline(BGS.civil_engineering, 50);
	cout << "Enter the best graduating student for Mettalugical and Materials Engineering: " << endl;
	cin.getline(BGS.met_and_mat_engineering, 50);
	cout << "Enter the best graduating student for Surveying and Geo-informatics Engineering: " << endl;
	cin.getline(BGS.surveying_and_geoinformatics_engineering, 50);
	cout << "Enter the best graduating student for Systems Engineering: " << endl;
	cin.getline(BGS.systems_engineering, 50);
	cout << "Enter the best graduating student for Chemical Engineering: " << endl;
	cin.getline(BGS.chg.chemical_engineering, 50);
	cout << "Enter the best graduating student for Petroleum and Gas Engineering: " << endl;
	cin.getline(BGS.chg.pet_and_gas_engineering, 50);
	cout << "Enter the best graduating student for Electrical and Electronics Engineering: " << endl;
	cin.getline(BGS.elect.electrical_and_electronics_engineering, 50);
	
	cout << "Enter the best graduating student for Computer Engineering: " << endl;
	cin.getline(BGS.elect.computer_engineering, 50);

	system("Pause");

	cout << "The best graduating student in Biomedical Engineering is: " << BGS.biomedical_engineering << endl;

	cout << "The best graduating student in Civil Engineering is: " << BGS.civil_engineering << endl;
	
	cout << "The best graduating student in Mettarlugical and Materials Engineering is: " << BGS.met_and_mat_engineering << endl;

	cout << "The best graduating student in Surveying and Geo-informatics Engineering is: " << BGS.surveying_and_geoinformatics_engineering << endl;

	cout << "The best graduating student in Systems Engineering is: " << BGS.systems_engineering << endl;

	cout << "The best graduating student in Chemical Engineering is: " << BGS.chg.chemical_engineering << endl;

	cout << "The best graduating student in Petroleum and Gas Engineering is: " << BGS.chg.pet_and_gas_engineering << endl;

	cout << "The best graduating student in Electrical and Electronics Engineering is: " << BGS.elect.electrical_and_electronics_engineering << endl;

	cout << "The best graduating student in Computer Engineering is: " << BGS.elect.computer_engineering << endl;

	system("Pause");
}
#include <iostream.h>
#include <conio.h>
#include <string.h>
struct Student
{
    int id;
    char name[50];
    int marks[5];
    int total;
    float average;
};

Student students[100];
int studentCount = 0;

void inputStudentData() {
    if (studentCount >= 100) {
	cout <<"Maximum student limit reached.\n";
	return;
    }

    cout <<"Enter student ID: ";
    cin >> students[studentCount].id;
    cout <<"Enter student name: ";
    cin.ignore();
    cin.getline(students[studentCount].name, 50);

    students[studentCount].total = 0;
    for (int i = 0; i < 5; i++) {
	cout <<"Enter marks for subject "<< i + 1 <<": ";
	cin >> students[studentCount].marks[i];
	students[studentCount].total += students[studentCount].marks[i];
    }
    students[studentCount].average = students[studentCount].total / 5.0;
    studentCount++;
}

void displayStudentData() {
    if (studentCount == 0) {
	cout <<"No student data available.\n";
	return;
    }

    for (int i = 0; i < studentCount; i++) {
	cout <<"\nID: "<< students[i].id
<<"\nName: "<< students[i].name
<<"\nTotal Marks: "<< students[i].total
<<"\nAverage Marks: "<< students[i].average << endl;
    }
}

void calculateHighestLowestMarks() {
    if (studentCount == 0) {
	cout <<"No student data available.\n";
	return;
    }

    int highest = students[0].total, lowest = students[0].total;
    int highestIndex = 0, lowestIndex = 0;

    for (int i = 1; i < studentCount; i++) {
	if (students[i].total > highest) {
	    highest = students[i].total;
	    highestIndex = i;
	}
	if (students[i].total < lowest) {
	    lowest = students[i].total;
	    lowestIndex = i;
	}
    }

    cout <<"\nHighest Marks: "<< highest <<" by "<< students[highestIndex].name;
    cout <<"\nLowest Marks: "<< lowest <<" by "<< students[lowestIndex].name << endl;
}

void searchStudentById() {
    int id;
    cout <<"Enter student ID to search: ";
    cin >> id;

    for (int i = 0; i < studentCount; i++) {
	if (students[i].id == id) {
	    cout <<"\nStudent Found:\n"
<<"ID: "<< students[i].id
<<"\nName: "<< students[i].name
<<"\nTotal Marks: "<< students[i].total
<<"\nAverage Marks: "<< students[i].average << endl;
	    return;
	}
    }
    cout <<"Student with ID "<< id <<" not found.\n";
}

void displayMenu() {
    cout <<"\nStudent Marks Management System\n";
    cout <<"1. Input Student Data\n";
    cout <<"2. Display All Student Data\n";
    cout <<"3. Calculate Highest and Lowest Marks\n";
    cout <<"4. Search Student by ID\n";
    cout <<"5. Exit\n";
}

int main() {
    int choice;
    do {
	displayMenu();
	cout <<"Enter your choice: ";
	cin >> choice;

	switch (choice) {
	    case 1:
		inputStudentData();
		break;
	    case 2:
		displayStudentData();
		break;
	    case 3:
		calculateHighestLowestMarks();
		break;
	    case 4:
		searchStudentById();
		break;
	    case 5:
		cout <<"Exiting program.\n";
		break;
	    default:
		cout <<"Invalid choice. Please try again.\n";
	}
	getch();
    } while (choice != 5);

    return 0;
}

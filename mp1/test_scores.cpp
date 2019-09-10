#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct Student
{
	string first_name;
  string last_name;
  int test_score;
  char grade;
};

const int MAX = 20;

int print_winner(Student champ)
{
	cout << "\n";
	cout << "And the winner is " << champ.first_name << " " << champ.last_name;
	cout << " with a test score of " << champ.test_score << " and a grade of " << champ.grade << ".\n";
	return 0;
}

Student find_highest_score(int total, Student students[])
{
	Student winner = {"","",0,'F'};

	for (int i = 0; i < total; i++)
	{
		if (students[i].test_score > winner.test_score)
			winner = students[i];
	}
	return winner;
}

int print_students(int total, Student students[])
{
	for (int i = 0; i < total; i++)
	{
		cout << students[i].last_name << ", " << students[i].first_name;
		cout << " " << students[i].test_score << " " << students[i].grade << "\n";
	}
	return 0;
}

char assign_grade(int test_score)
{
	if (test_score < 60) {
		return 'F';
	} else if (test_score < 70) {
		return 'D';
	} else if (test_score < 80) {
		return 'C';
	} else if (test_score < 90) {
		return 'B';
	} else if (test_score < 100) {
		return 'A';
	} else {
		return 'A';
	}
}

int read_file(Student student[])
{
	ifstream file;
	string first_name;
	string last_name;
  int test_score;
	int counter = 0;

	file.open("test_scores.txt");

	try {
		file >> first_name >> last_name >> test_score;
	}
	catch (...) {
		cout << "\nError in the input file.\n";
	}

	while (file && (counter < MAX))
	{
		student[counter].first_name = first_name;
		student[counter].last_name = last_name;
    student[counter].test_score = test_score;
		student[counter].grade = assign_grade(test_score);

		counter++;

		try {
			file >> first_name >> last_name >> test_score;
		}
		catch (...) {
			cout << "\nError in the input file.\n";
		}
	}

	file.close();
	return counter;
}

int main()
{
	int count;
	Student highest_score;

	Student student_array[MAX] = { {"","",0,'F'} };

	count = read_file(student_array);
	print_students(count, student_array);

	highest_score = find_highest_score(count, student_array);

	print_winner(highest_score);

  return 0;
}

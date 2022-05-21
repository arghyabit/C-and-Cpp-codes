#include <iostream>
using namespace std;

int main()
{
    int marksInMaths, marks_in_physics, marks_in_chemistry, total_in_three_subjects, total_in_math_and_physics;

    cout << "Enter the marks in Mathematics,Physics & in Computer Application ::";
    cin >> marksInMaths >> marks_in_physics >> marks_in_chemistry;

    total_in_three_subjects = marksInMaths + marks_in_physics + marks_in_chemistry;
    total_in_math_and_physics = marksInMaths + marks_in_physics;

    if (marksInMaths >= 65 && marks_in_physics >= 55 && marks_in_chemistry >= 50 && total_in_three_subjects >= 190 && total_in_math_and_physics >= 140) {
        cout << "The candidate is eligible to take admission";
    }
    else {
        cout << "The candidate is not eligible to take admission";
    }
}



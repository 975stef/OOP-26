#include <iostream>
#include "Student.h"
#include "GlobalFunctions.h"

int main() {
    Student s1, s2;

    s1.SetName("Pirtac");
    s1.SetMathGrade(9.5f);
    s1.SetEnglishGrade(7.0f);
    s1.SetHistoryGrade(8.0f);

    s2.SetName("Oprea");
    s2.SetMathGrade(8.0f);
    s2.SetEnglishGrade(9.0f);
    s2.SetHistoryGrade(7.0f);

    std::cout << "Comparare Nume: " << CompareName(s1, s2) << std::endl;
    std::cout << "Comparare Mate: " << CompareMath(s1, s2) << std::endl;
    std::cout << "Comparare English: " << CompareEnglish(s1, s2) << std::endl;
    std::cout << "Comparare History: " << CompareHistory(s1, s2) << std::endl;
    std::cout << "Comparare Medie: " << CompareAverage(s1, s2) << std::endl;

    return 0;
}
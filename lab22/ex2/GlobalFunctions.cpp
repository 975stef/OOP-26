#include "GlobalFunctions.h"
#include <cstring>

int CompareName(Student s1, Student s2) {
    int res = strcmp(s1.GetName(), s2.GetName());
    if (res == 0) return 0;
    return (res > 0) ? 1 : -1;
}

int CompareMath(Student s1, Student s2) {
    if (s1.GetMathGrade() == s2.GetMathGrade()) return 0;
    return (s1.GetMathGrade() > s2.GetMathGrade()) ? 1 : -1;
}

int CompareEnglish(Student s1, Student s2) {
    if (s1.GetEnglishGrade() == s2.GetEnglishGrade()) return 0;
    return (s1.GetEnglishGrade() > s2.GetEnglishGrade()) ? 1 : -1;
}

int CompareHistory(Student s1, Student s2) {
    if (s1.GetHistoryGrade() == s2.GetHistoryGrade()) return 0;
    return (s1.GetHistoryGrade() > s2.GetHistoryGrade()) ? 1 : -1;
}

int CompareAverage(Student s1, Student s2) {
    float a1 = s1.GetAverage();
    float a2 = s2.GetAverage();
    if (a1 == a2) return 0;
    return (a1 > a2) ? 1 : -1;
}
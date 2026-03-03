#include "Student.h"
#include <cstring>

void Student::SetName(const char* n) {
    strcpy(this->name, n);
}

const char* Student::GetName() {
    return this->name;
}

void Student::SetMathGrade(float g) {
    if (g >= 1.0f && g <= 10.0f) this->mathGrade = g;
}

float Student::GetMathGrade() {
    return this->mathGrade;
}

void Student::SetEnglishGrade(float g) {
    if (g >= 1.0f && g <= 10.0f) this->englishGrade = g;
}

float Student::GetEnglishGrade() {
    return this->englishGrade;
}

void Student::SetHistoryGrade(float g) {
    if (g >= 1.0f && g <= 10.0f) this->historyGrade = g;
}

float Student::GetHistoryGrade() {
    return this->historyGrade;
}

float Student::GetAverage() {
    return (this->mathGrade + this->englishGrade + this->historyGrade) / 3.0f;//pentru a nu rotunji
}
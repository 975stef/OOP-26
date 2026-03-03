#ifndef STUDENT_H
#define STUDENT_H

class Student {
    char name[100];
    float mathGrade;
    float englishGrade;
    float historyGrade;

public:
    void SetName(const char* n);
    const char* GetName();

    void SetMathGrade(float g);
    float GetMathGrade();

    void SetEnglishGrade(float g);
    float GetEnglishGrade();

    void SetHistoryGrade(float g);
    float GetHistoryGrade();

    float GetAverage();
};

#endif
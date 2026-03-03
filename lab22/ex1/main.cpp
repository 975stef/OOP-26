#include "NumberList.h"

int main() {
    NumberList list;
    list.Init();

    list.Add(10);
    list.Add(5);
    list.Add(8);
    list.Add(1);
    list.Add(7);

    list.Print();
    list.Sort();
    list.Print();

    return 0;
}
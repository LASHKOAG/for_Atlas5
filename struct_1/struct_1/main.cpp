#include <iostream>

using namespace std;

//int var_1 = 0;
//int var_2 = 0;
//char var_3 = 0;

struct Test{
    int var_1; //10 11 12 13
    int var_2;  //14 15 16 17
    char var_3; //18
};


struct StudentData{
    int class_number;
    int eng_level;
    int ld;
    Test avc;
};



int main()
{
    Test my_big_var;

    my_big_var.var_1;
    my_big_var.var_2 = 0;
    my_big_var.var_3 = 0;

cout << "sizeof(my_big_var) " << sizeof(my_big_var) << endl;
    StudentData asd;
    asd.class_number = 7;
    asd.eng_level = 5;
    asd.ld = 9999;


    StudentData ru;
    ru.class_number = 8;
    ru.eng_level = 0;
    ru.ld = 555;

    StudentData test_obj;

    test_obj.avc.var_2 = 5;


    return 0;
}

#include <iostream>
#include <stdio.h>


using namespace std;

//void get_health(int* _health){
//    printf("%p \n", _health);
//    *_health -= 20;
//    printf("%d \n", *_health);
//}

//int* _var = &var;

void change_variable(int* _var){
    printf("%p \n", _var);
    *_var -= 20;
    printf("%d \n", *_var);
}

//void get_health(int _health){
//    _health -= 20;
//}

void get_health(int *_health){
    *_health -= 20;
}

void get_exp(int *_exp){
    *_exp += 20;
}

void get_exp_weapon(int *_exp_weapon){
    *_exp_weapon += 30;
}

void get_like_counter(int *_like_counter){
    *_like_counter += 10;
}

void get_smart(int *_smart){
    *_smart -= 50;
}

void get_mood(int *_mood){
    *_mood += 20;
}
void get_arm_protection(int *_arm_protection){
    *_arm_protection -= 20;
}
void get_arm_protection_condition(int *_arm_protection_condition){
    *_arm_protection_condition -= 20;
}

void get_result_arr(int *_array, int _size, int _health, int _experience, int _experience_weapon, int _smart, int _mood){
    _array[0] = _health;
    _array[1] = _experience;
    _array[2] = _experience_weapon;
    _array[3] = _smart;
    _array[4] = _mood;
    _array[5] = 0;
    _array[6] = 0;

}

int arr_summ(int *_massiv, int _size){
    int result = 0;
    printf("arr_summ start %d\n", _massiv[0]);
    for (int i = 0; i < _size; ++i){
        printf("%d\n",_massiv[i]);
        result += _massiv[i];
    }
    return result;
}

struct Unit_game{
    int health;
    int experience;
    int experience_weapon;
    int like_counter;
    int smart;
    int mood;
    int armor_protection;
};


int main(){

    int variable = 105;
    printf("variable address: %p \n", &variable);

    //указатель
    int *ptr_variable = &variable;

    //printf("variable address: %p \n", ptr_variable);
    //printf("variable : %d \n", *ptr_variable);

    //как достучаться до значения переменной?
    *ptr_variable = 234;

    //вот так указатель скажет адрес
    //ptr_variable

    //вот так значение
    //*ptr_variable

    int test1 = 11;
    int *ptr_test1 = &test1;
    printf("%p\n", &test1);
    test1 = 20;
    printf("%d\n", test1);
    *ptr_test1 = 50;
    printf("%d\n", test1);


    int test2 = 200;
    int *ptr_test2 = &test2;

    printf("%d\n", test2);

    *ptr_test2 = 100;
    printf("%d\n", test2);


    int test3 = 300;
    int *ptr_test3 = &test3;

    printf("%d\n",test3);

    *ptr_test3 = 500;

    printf("%d\n",test3);

    //change_variable(&variable);

    //printf("variable : %d \n", variable);
    //printf("ptr_variable : %p \n", ptr_variable);


    //======== 1.гладиатор - Dottle ===========================
    int array_sum_Dottle[7];

//    void get_total_score(massiv, helth, exp, smart, mood){

//    }

    //dottle_health
    //dottle_experience
    //dottle_experience_weapon
    //dottle_like_counter
    //dottle_smart
    //dottle_mood
    //armor_protection
    //dottle_arm_hook_condition
    //dottle_arm_hook_damage;
    //muhad_health
    //muhad_experience
    //muhad_experience_weapon
    //muhad_like_counter
    //muhad_smart
    //muhad_miid
    //muhad_arm_protection
    //muhad_arm_hook_condition
    //muhad_arm_hook_damage

//=========================

    Unit_game dottle;

    dottle.health = 100;
    dottle.experience = 0;
    dottle.experience_weapon = 0;


    Unit_game muhad;

    muhad.health = 40;
    muhad.experience = -1;
    muhad.experience_weapon = -5;


    //здоровье игрока
    printf(" Unit_game %d\n", dottle.health);
    //get_health(dottle_health);
    get_health(&dottle.health);
    printf(" Unit_game %d\n", dottle.health);

    //опыт игрока
    int dottle_experience = 0;
    printf("%d\n",dottle_experience);
    get_exp(&dottle_experience);
    printf("%d\n",dottle_experience);


    //опыт владения оружием (неважно каким)
    int dottle_experience_weapon = 0;
    printf("%d\n",dottle_experience_weapon);
    get_exp_weapon(&dottle_experience_weapon);
    printf("%d\n",dottle_experience_weapon);

    //оценка зрителей
    int dottle_like_counter = 0;
    printf("%d\n",dottle_like_counter);
    get_like_counter(&dottle_like_counter);
    printf("%d\n",dottle_like_counter);

    int muhad_like_counter = -1000;
    printf("%d\n",muhad_like_counter);
    get_like_counter(&muhad_like_counter);
    printf("%d\n",muhad_like_counter);
    get_like_counter(&muhad_like_counter);
    printf("%d\n",muhad_like_counter);

    //ум (можно деградировать, если каждый раз выступать с одним и тем же игроком)
    int dottle_smart = 50;
    get_smart(&dottle_smart);
    printf("%d\n", dottle_smart);
    //личная харизма(оценка зрителей + 4)


    int dottle_mood = 0;
    get_mood(&dottle_mood);
    printf("%d\n", dottle_mood);


    //бронезащита (только отнимать значения)
    int armor_protection = 100;
    get_arm_protection(&armor_protection);
    printf("%d\n", armor_protection);

    
    //--- оружие
    //arm_hook
    //состояние оружия на данный момент (может быть и сломано)
    int dottle_arm_hook_condition = 100;
    get_arm_protection(&dottle_arm_hook_condition);
    printf("%d\n", dottle_arm_hook_condition);

    //урон, которое наносит оружие (урон оружия = состояние оружия * вес (значимость урона) урона)
    //    int dottle_arm_hook_damage = 80;

    //вес (значимость урона) урона
    //---> const
    float dottle_arm_hook_power = 0.8;

    //    float dottle_arm_hook_power = (float)dottle_arm_hook_damage/dottle_arm_hook_condition;
    //    printf("%f \n", dottle_arm_hook_power);

    //урон, которое наносит оружие (урон оружия = состояние оружия * вес (значимость урона) урона)
    int dottle_arm_hook_damage = dottle_arm_hook_condition*dottle_arm_hook_power;
    printf("%d \n", dottle_arm_hook_damage);

    int muhad_arm_hook_power = 100;

    get_health(&dottle.health);
    printf("%d \n", dottle.health);
    int muhad_health = 100;
    get_health(&muhad_health);
    printf("%d\n", muhad_health);

    int muhad_experience = -1;
    get_exp(&muhad_experience);
    printf("%d\n", muhad_experience);

    int muhad_experience_weapon = -1;
    get_exp_weapon(&muhad_experience_weapon);
    printf("%d\n",muhad_experience_weapon);

    int muhad_smart = -1;
    get_smart(&muhad_smart);
    printf("%d\n", muhad_smart);

    int muhad_mood = -1;
    get_mood(&muhad_mood);
    printf("muhad_mood %d\n", muhad_mood);

    int muhad_arm_protection = 100;
    get_arm_protection(&muhad_arm_protection);
    printf("%d\n", muhad_arm_protection);

    int muhad_arm_hook_condition = 100;
    get_arm_protection_condition(&muhad_arm_hook_condition);
    printf("%d\n", muhad_arm_hook_condition);

    int muhad_arm_hook_damage = muhad_arm_hook_condition*muhad_arm_hook_power;
    printf("%d\n", muhad_arm_hook_damage);


    const int arr_sum_muhad_size = 7;
    int arr_sum_muhad[arr_sum_muhad_size];

//    -->foo(init 0)

//   --> refact arr_sum

//   --> find max

    printf("arr_sum_muhad[3] %d: \n", arr_sum_muhad[3]);

    get_result_arr(&arr_sum_muhad[0], arr_sum_muhad_size, muhad_health, muhad_experience, muhad_experience_weapon, muhad_smart, muhad_mood);

    printf("arr_sum_muhad[3] %d: \n", arr_sum_muhad[3]);


    printf("arr_sum_muhad[6] %d: \n", arr_sum_muhad[8]);

    arr_summ(&arr_sum_muhad[0], arr_sum_muhad_size);

    printf("arr_sum_muhad[6] %d: \n", arr_sum_muhad[8]);

    int res = arr_summ(&arr_sum_muhad[0], arr_sum_muhad_size);
    printf("res %d: \n", res);

//    function(&massiv[0], size, muhad_smart, muhad_mood , ...){
//        [0] = muhad_smart
//        [1] = muhad_mood
//        [2]
//        ...
//        [6]
//    }

    return 0;
}

struct Intint{
    int i1;
    int i2;
};
Intint qwerty;

qwerty.i1 = 0;
//--------------

include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

#define MIN_FILES 100
#define MAX_FILES 1000

int cp_in_startup(){
    // system("cp exfile.exe C:/ProgramData/Microsoft/Windows/Start Menu/Programs/StartUp");
    return 0;
}

void create_files(int num_files, char *folder_name) {
    char file_name[100];
    FILE *fp;

    for (int i = 0; i < num_files; i++) {
        sprintf(file_name, "%s/file%d.txt", folder_name, i);
        fp = fopen(file_name, "w");

        fclose(fp);
    }
}

int main(int argc, char *argv[]) {
    int process_num;
    int num_folders;
    int num_files;
    char folder_name[100];

    srand(time(NULL));

    process_num = getpid();
    process_num *= 3;
    num_folders = process_num;￼
￼

    num_files = MIN_FILES + (rand() % (MAX_FILES - MIN_FILES + 1));

    for (int i = 0; i < num_folders; i++) {
        sprintf(folder_name, "folder%d", i * num_folders);
        mkdir(folder_name);

        create_files(num_files, folder_name);
    }

    //make function read file

    return 0;
}






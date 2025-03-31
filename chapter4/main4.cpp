#include <iostream>

void solve_problem_1();
void solve_problem_2();
void solve_problem_3();
void solve_problem_4();
void solve_problem_5();
void solve_problem_6();
void solve_problem_7();
void solve_problem_8();
void solve_problem_9();
void solve_problem_10();
void solve_problem_11();
void solve_problem_12();
void solve_problem_13();
void solve_problem_14();

int main() {
    int choice;

    while (true) {
        std::cout << "\n=== 문제 선택 (1~14), 종료하려면 0 입력 ===\n";
        std::cout << "문제 번호 입력: ";
        std::cin >> choice;

        switch (choice) {
            case 1: solve_problem_1(); break;
            case 2: solve_problem_2(); break;
            case 3: solve_problem_3(); break;
            case 4: solve_problem_4(); break;
            case 5: solve_problem_5(); break;
            case 6: solve_problem_6(); break;
            case 7: solve_problem_7(); break;
            case 8: solve_problem_8(); break;
            case 9: solve_problem_9(); break;
            case 10: solve_problem_10(); break;
            case 11: solve_problem_11(); break;
            case 12: solve_problem_12(); break;
            case 13: solve_problem_13(); break;
            case 14: solve_problem_14(); break;
            case 0: return 0;
            default: std::cout << "잘못된 번호입니다.\n"; break;
        }
    }

    return 0;
}

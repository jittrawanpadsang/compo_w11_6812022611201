#include <stdio.h>

// รับคะแนนจากผู้ใช้
void inputScores(float arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("  Math: ");
        scanf("%f", &arr[i][0]);
        printf("  Physics: ");
        scanf("%f", &arr[i][1]);
        printf("  Chemistry: ");
        scanf("%f", &arr[i][2]);
    }
}

// แสดงตารางคะแนนทั้งหมด
void printTable(float arr[3][3]) {
    printf("\nScore Table:\n");
    printf("Student   Math   Physics   Chemistry\n");
    for (int i = 0; i < 3; i++) {
        printf("%d       ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%6.2f   ", arr[i][j]);
        }
        printf("\n");
    }
}

// คำนวณและแสดงค่าเฉลี่ยของแต่ละวิชา
void printAverage(float arr[3][3]) {
    float sum;
    printf("\nAverage per subject:\n");
    for (int j = 0; j < 3; j++) {
        sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += arr[i][j];
        }
        float avg = sum / 3.0;
        if (j == 0)
            printf("Math: %.2f\n", avg);
        else if (j == 1)
            printf("Physics: %.2f\n", avg);
        else
            printf("Chemistry: %.2f\n", avg);
    }
}

int main() {
    float scores[3][3]; // 2D array เก็บคะแนนของ 3 คน 3 วิชา

    inputScores(scores);      // เรียกฟังก์ชันรับคะแนน
    printTable(scores);       // เรียกฟังก์ชันแสดงตารางคะแนน
    printAverage(scores);     // เรียกฟังก์ชันแสดงค่าเฉลี่ย
    return 0;
}

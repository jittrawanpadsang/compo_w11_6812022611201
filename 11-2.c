#include <stdio.h>

// ฟังก์ชันสำหรับคำนวณค่าเฉลี่ย รับพารามิเตอร์ 3 ตัว และ return ค่ากลับแบบ float
float average(int a, int b, int c) {
    return (a + b + c) / 3.0;  // หารด้วย 3.0 เพื่อให้ได้ผลลัพธ์แบบทศนิยม
}

int main() {
    int math, physics, chemistry;
    float avg;

    // รับคะแนนแต่ละวิชาจากผู้ใช้
    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    // เรียกใช้ฟังก์ชัน average เพื่อคำนวณค่าเฉลี่ย และเก็บไว้ในตัวแปร avg
    avg = average(math, physics, chemistry);

    // แสดงผลคะแนนแต่ละวิชา
    printf("\nMath = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);

    // แสดงผลค่าเฉลี่ย
    printf("Average = %.2f\n", avg);

    return 0;
}

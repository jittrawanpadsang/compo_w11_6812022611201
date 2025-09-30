#include <stdio.h>

// ฟังก์ชันชื่อ inputAndShow ไม่คืนค่า (void) รับพารามิเตอร์มา 3 ตัว คือคะแนนของแต่ละวิชา
void inputAndShow(int math, int physics, int chemistry) {
    // แสดงคะแนนที่รับเข้ามา
    printf("Scores: Math = %d, Physics = %d, Chemistry = %d\n", math, physics, chemistry);
}

int main() {
    int mathScore, physicsScore, chemistryScore;

    // รับค่าคะแนนจากผู้ใช้ทีละวิชา
    printf("Enter Math: ");
    scanf("%d", &mathScore);  // รับคะแนนวิชาคณิต

    printf("Enter Physics: ");
    scanf("%d", &physicsScore);  // รับคะแนนฟิสิกส์

    printf("Enter Chemistry: ");
    scanf("%d", &chemistryScore);  // รับคะแนนเคมี

    // เรียกใช้ฟังก์ชัน inputAndShow โดยส่งคะแนนทั้ง 3 วิชาเข้าไป
    inputAndShow(mathScore, physicsScore, chemistryScore);

    return 0; // จบโปรแกรม
}

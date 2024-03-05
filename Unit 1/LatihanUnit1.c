#include <stdio.h>

int main(){
    float waktu, jarak, kecepatan;

    printf("jarak : ");
    scanf("%f", &jarak);

    printf("waktu : ");
    scanf("%f", &waktu);

    printf("kecepatan : ");
    scanf("%f", &kecepatan);

    kecepatan = jarak / waktu;
    printf ("\nkecepatan = %f\n", kecepatan);

    jarak = kecepatan * waktu;
    printf ("jarak = %f\n", jarak);

    waktu = jarak / kecepatan;
    printf ("waktu = %f\n", waktu);

}
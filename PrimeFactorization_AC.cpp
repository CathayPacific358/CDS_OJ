#include<stdio.h>{
int calculateFactor(int num);

int main(void) {
    int num, k = 2;

    scanf("%d", &num);

    //To limit the input within the range
    while (num < 2 || num > 2147483647) {
        scanf("%d", &num);
    }

    //If the result after modulus operation with 2 is 0, then must not be a prime
    if (num % k == 0) {
        printf("%d = ", num);
        calculateFactor(num);
        return 0;
    }

        //If modulus with 2 is not 0, do further check
    else if(num % k != num){
        //To see whether have other number can let modulus operation equal to 0
        for (; k < num; k++) {
            //If yes, it is not a prime and will be calculate factors
            if (num % k == 0) {
                printf("%d = ", num);
                calculateFactor(num);
                return 0;
            }
        }
    }
    //If no it is a prime
    printf("%d is a prime number\n", num);
    return 0;

}


int calculateFactor(int num) {
    int j, i;

    i = 2;

    //Use short division to calculate
    /* Assign i to j, because i have to change,
     * but the "2" value is needed to be fixed.
     * If num / i = 1, then means it is the last number.
     * (e.g. for 420, last num would be 7 and i would also be 7, 7 / 7 = 1)
     * The loop will output common number as form of "num * ",
     * and output the last number as form of "num" */
    for (; num >= 2; i++) {
        for (j = i; num % j == 0;) {
            if (num / i != 1) {
                num = num / i;
                printf("%d * ", i);
            }
            else {//the last number should only print "num", but not "num *"
                num = num / i;
                printf("%d", i);
            }
        }

    }
}

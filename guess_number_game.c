#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    srand(time(0));

    secretNumber = rand() % 100 + 1;

    printf("Guess the Number game!\n");
    printf("1 dan 100 gacha bo\'gan sonlarni yozing.\n");

    while (1) {
        printf("Raqamni kiriting (chiqish uchun 0 ni bosing): ");
        scanf("%d", &guess);

        if (guess == 0) {
            printf("Siz 0 ni bosdingiz. By!\n");
            break;
        }

        attempts++;

        if (guess > secretNumber) {
            printf("Juda kotta!, boshqattan xarakat qiling\n");
        } else if (guess < secretNumber) {
            printf("Juda kichik!, boshqattan xarakat qiling\n");
        } else {
            printf("Congratulation! Siz %d raqamini to\'g\'ri topdiz %d-xarakatda.\n", secretNumber, attempts);
            break;
        }
    }

    return 0;
}

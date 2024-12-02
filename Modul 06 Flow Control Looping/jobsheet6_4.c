#include <stdio.h>

void PrintMenu(void);
void PrintAccount(void);
int  DepositAccount(int amount);
int  WithdrawAccount(int amount);

static int balance = 0;

int main()
{
    int keepRunning = 1;
    int choice      = 0;

    int err = 0;
    int toDeposit;
    int toWithdraw;

    while (keepRunning)
    {
        PrintMenu();
        printf("> ");
        scanf(" %d", &choice);

        switch (choice)
        {
            case 1:
                PrintAccount();
                break;
            case 2:
                printf("Masukkan jumlah setoran: ");
                scanf(" %d", &toDeposit);
                err = DepositAccount(toDeposit);
                if (!err)
                    printf("Setoran berhasil\n");
                else
                    printf("Setoran gagal, jumlah harus lebih dari Rp 0\n");
                break;
            case 3:
                printf("Masukkan jumlah penarikan: ");
                scanf(" %d", &toWithdraw);
                err = WithdrawAccount(toWithdraw);
                if (!err)
                    printf("Penarikan berhasil\n");
                else if (err == 2)
                    printf("Penarikan gagal, saldo kurang\n");
                else if (err == 1)
                    printf("Penarikan gagal, jumlah harus lebih dari Rp 0\n");
                break;
            case 4:
                keepRunning = 0;
                continue;
            default:
                break;
        }
    }

    return 0;
}

void PrintMenu(void)
{
    printf("ATM\n");
    printf(" 1) Cek Saldo\n");
    printf(" 2) Setoran\n");
    printf(" 3) Penarikan Tunai\n");
    printf(" 4) Exit\n");
}

void PrintAccount(void)
{
    printf("No Rek    : 0123\n");
    printf("Nama Akun : Hatori\n");
    printf("Saldo ATM : Rp %d\n", balance);
}

int DepositAccount(int amount)
{
    if (amount < 0)
        return 1;

    balance += amount;
    return 0;     // Success
}

int WithdrawAccount(int amount)
{
    if (amount <= 0)
        return 1;

    if (balance <= 50000)
        return 2;

    balance -= amount;

    return 0;     // Success
}

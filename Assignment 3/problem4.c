#include <stdio.h>

// Has Return + Parameter
int sum (int a, int b)
{
    return (a + b);
}

// Has Return + No parameter
int str_len_count (void)
{
    int count = 0;
    char str[100];
    scanf("%s", &str);

    for (; str[count] != '\0'; count++);

    return count;
}

// No Return + Parameter
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// No Return + No Parameter
void func (void)
{
    int n, key;
    scanf("%d %d", &n, &key);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d exist in this array!\n", key);
            return;
        }
    }
    printf("%d is not in this array!\n", key);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    // return + parameter
    int sum_a_b = sum(a, b);
    printf("%d + %d = %d\n", a, b, sum_a_b);

    // return + no parameter
    int str_len = str_len_count();
    printf("length : %d\n", str_len);

    // no return + parameter
    printf("(swap) %d %d --> ", a, b);
    swap(&a, &b);
    printf("%d %d\n", a, b);

    // no return + no parameter
    func ();

    return 0;
}
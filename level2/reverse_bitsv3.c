#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i;
    unsigned char arr[9];

	i = 0;
    arr[8] = '\0';
    while(octet)
    {
        arr[i] = octet % 2 + '0';
        octet = octet / 2;
        i++;
    }
    while(i >= 7)
    {
        arr[i] = '0';
        i++;
    }
	i = 0;
    while(arr[i])
        write(1, &arr[i++], 1);
}

int main()
{
    reverse_bits(25);
    return (0);
}
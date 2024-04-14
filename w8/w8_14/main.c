#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pl_PL.UTF-8");

    wchar_t buffer[20] = L"ółęć";
    wprintf(L"%s",buffer);
    wscanf(L"%s",buffer);
    wprintf(L"%s",buffer);
    return 0;
}

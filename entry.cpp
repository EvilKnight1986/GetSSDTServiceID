// 使用说明例子
#include "GetSSDTInformation.h"
#include <stdio.h>

int main(void)
{
    GetSSDTInformation ssdt ;
    char szServiceName[MAXBYTE] = {0} ;
    int  nServiceID = 0 ;
    int nCount = 0 ;
    if (TRUE == ssdt.FindFirst(szServiceName, nServiceID))
    {
        printf("FunName: %-50s ServiceID: %d\r\n", szServiceName, nServiceID) ;
        while (TRUE == ssdt.FindNext(szServiceName, nServiceID))
        {
            printf("FunName: %-50s ServiceID: %d\r\n", szServiceName, nServiceID) ;
            ++nCount ;
        }
    }
    printf("SSDT Service Function Count: %d\r\n", nCount) ;

    // 用完记得FindClose一下
    ssdt.FindClose() ;
    return 0 ;
}
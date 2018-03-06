/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	Loop
*/

#include <stdio.h>

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      //하한값
    upper = 300;    //상한값
    step = 20;      //증가단위값
    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);  //화씨를 섭씨로 계산
        printf("%3.0f %6.1f\n", fahr, celsius);  //결과값 출력
        fahr = fahr + step;  //증가
    }
}


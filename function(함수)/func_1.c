#include <stdio.h>
	
	/*
		함수(function) 기본 형태 4가지 

		1.void 함수이름 ()

		2.void 함수이름(매개변수)

		3.데이터 타입 함수이름()

		4.데이터 타입 함수이름(매개변수)

		--> 실제로는 2,4 번이 많이 사용된다.
	*/
	/* 매개변수: 외부에서 함수 내부로 정보를 전달하는 역할
	   (인자, 인수, 파라미터)라는 이름으로 쓰이기도 한다.*/

	void func1();//함수 프로토 타입
	/* 함수 정의를 main 아래에 하면 함수를 사용할수 없을때도 있다.
	   그럴때는 함수를 main위에 정의 하거나 함수 프로토 타입을 사용하면 된다.
	   --> 오류발생 함수가 정의 되지 않았습니다가 뜬다. */
	void func2(int num);
	int func3();
	int func4(int n1, int n2);

//메인 함수 - 진입점 (Entry Point)
int main() {

	printf("안녕하세요\n");
	func1(); //함수의 호출(call) 
	//함수는 정의 상태에서는 동작하지 않는다. 반드시 호출이 필요하다.
	//매개변수 개수와 매개변수의 타입이 맞아야한다.
	func2(1000);
	//호출시 매개변수가 있는 지 체크를 한다
	int n = 200;
	func2(n);
	//매개변수로는 상수(숫자),변수, 함수가 들어갈수 있다 --> 반드시 값이 있어야한다.
	int b = func3();
	printf("func3 결과값 : %d\n", b);
	
	int c = func4(100, 200);
	printf("func4 결과값 : %d\n", c);

}


//1.void 함수이름 () - void 데이터 타입이 없다
void func1() //함수의 정의 
{ 
	printf("func1 함수 : 안녕하세요\n");
}

//2.void 함수이름(매개변수) - 호출 할때 매개변수 전달 
void func2(int num) { //매개변수는 정보가 들어올때마다 값이 갱신된다.
	printf("매개변수 num : %d\n", num);
	num = num + 200;
	printf("매개변수 + 200 num : %d\n", num);
}

//3.데이터 타입 함수이름() - 반드시 return(반환)값 존재
//	함수 내부의 작업결과를 return
int func3() {
	//매개변수를 받지 않기때문에 변수를 선언
	int n1 = 100;
	int n2 = 200;
	int sum = n1 + n2;
	//printf("func3 결과값 : %d\n", sum); //--> 문제가 되지 않으냐 굳이 이렇게 할꺼 였으면 리턴 형태가 void 여도 상관 없다.
	return sum; 
	//return을 만나는 순간 함수는 종료되어 printf()가 실행되지 않는 다.
	//--> printf("func3 결과값 : \n", sum); return 위로 올려둔다.
}

//4.데이터 타입 함수이름(매개변수)
int func4(int n1, int n2) {

	int sum = n1 + n2;
	//return에는 반드시 값
	//return n1 + n2;
	return sum;
}

//void 때도 return을 쓸수 있으나 보통 바로 종료를 원할시에 사용됨

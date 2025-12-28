void foo()
{
    int x = 0;
}

int main()
{
    //x = 10; // error
}

// no linkage
// {} 안에서 만들어진 변수는 {}안에서만 접근 가능하다
// 같은 파일이라도 {} 밖에서는 접근 할 수 없다.
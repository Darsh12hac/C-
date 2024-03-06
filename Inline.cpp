inline int maxOfThree(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

//In main()

 int largest = maxOfThree(num1, num2, num3);

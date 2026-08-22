func checkDivisibility(n int) bool {
    sum := 0
    mult := 1
    temp := n

    for n > 0 {
        sum += n % 10
        mult *= n % 10
        n /= 10
    }

    return temp % (sum + mult) == 0
}
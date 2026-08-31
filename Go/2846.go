package main

import "fmt"

const MAXSIZE = 100100

var fibonacci []int
var fibonot []int

func main() {
	var n int
	fib()

	fmt.Scanf("%d", &n)
	fmt.Printf("%d\n", fibonot[n])
}

func fib() {
	fibonacci = make([]int, MAXSIZE)
	fibonot = make([]int, MAXSIZE)

	fibonacci[0] = 0
	fibonacci[1] = 1

	for i := 2; i < MAXSIZE; i++ {
		fibonacci[i] = fibonacci[i-1] + fibonacci[i-2]
	}

	k := 1
	j := 2

	for i := 1; i <= MAXSIZE; i++ {
		if fibonacci[j] != i {
			fibonot[k] = i
			k++
		} else {
			j++
		}
	}
}

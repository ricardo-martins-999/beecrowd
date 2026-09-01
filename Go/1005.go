package main

import "fmt"

const (
	weightA = 3.5
	weightB = 7.5
)

func main() {
	var A, B float64

	fmt.Scan(&A)
	fmt.Scan(&B)

	fmt.Printf("MEDIA = %.5f\n", (A*weightA+B*weightB)/(weightA+weightB))
}

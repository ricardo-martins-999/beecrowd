package main

import "fmt"

const PI = 3.14159

func main() {
	var radius float64

	fmt.Scanf("%f", &radius)

	var area float64 = PI * radius * radius

	fmt.Printf("A=%.4f\n", area)
}

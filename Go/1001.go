package main

import "fmt"

func main() {
	var valueA int32
	var valueB int32

	fmt.Scan(&valueA, &valueB)
	fmt.Printf("X = %d\n", valueA+valueB)
}

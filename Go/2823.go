package main

import "fmt"

func main() {
	var n int
	var answer float64

	fmt.Scanf("%d", &n)

	for i := 0; i < n; i++ {
		var cost, period int

		fmt.Scanf("%d %d", &cost, &period)

		answer += float64(cost) / float64(period)
	}

	if answer <= 1.0 {
		fmt.Println("OK")
	} else {
		fmt.Println("FAIL")
	}
}
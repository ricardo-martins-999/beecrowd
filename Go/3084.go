package main

import "fmt"

func main() {
	var hour, minute int

	for {
		if _, err := fmt.Scan(&hour, &minute); err != nil {
			break
		}

		fmt.Printf("%02d:%02d\n", hour/30, minute/6)
	}
}
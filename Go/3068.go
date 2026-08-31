package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewReaderSize(os.Stdin, 1<<20)
	out := bufio.NewWriterSize(os.Stdout, 1<<20)
	defer out.Flush()

	tests := 1

	for {
		x1 := nextInt(in)
		y1 := nextInt(in)
		x2 := nextInt(in)
		y2 := nextInt(in)

		if x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0 {
			break
		}

		n := nextInt(in)
		ans := 0

		for i := 0; i < n; i++ {
			x := nextInt(in)
			y := nextInt(in)

			if x >= x1 && x <= x2 &&
				y <= y1 && y >= y2 {
				ans++
			}
		}

		fmt.Fprintf(out, "Teste %d\n%d\n", tests, ans)

		tests++
	}
}

func nextInt(in *bufio.Reader) int {
	sign, value := 1, 0

	c, err := in.ReadByte()

	for (c < '0' || c > '9') && c != '-' {
		if err != nil {
			return 0
		}
		c, err = in.ReadByte()
	}

	if c == '-' {
		sign = -1
		c, _ = in.ReadByte()
	}

	for c >= '0' && c <= '9' {
		value = value*10 + int(c-'0')
		c, err = in.ReadByte()

		if err != nil {
			break
		}
	}

	return value * sign
}

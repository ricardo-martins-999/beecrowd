package main

import (
	"bufio"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	key, _ := reader.ReadString('\n')
	key = strings.TrimSpace(key)

	nString, _ := reader.ReadString('\n')
	n, _ := strconv.Atoi(strings.TrimSpace(nString))

	for i := 0; i < n; i++ {
		message, _ := reader.ReadString('\n')
		message = strings.TrimRight(message, "\r\n")

		words := strings.Split(message, " ")

		keyIndex := 0
		first := true

		for _, word := range words {
			if word == "" {
				continue
			}

			if !first {
				writer.WriteByte(' ')
			}
			first = false

			if isVowel(word[0]) {
				writer.WriteString(word)
				continue
			}

			for j := 0; j < len(word); j++ {
				letter := word[j] - 'a'
				keyLetter := key[keyIndex%len(key)] - 'a'

				encrypted := (letter + keyLetter) % 26

				writer.WriteByte(encrypted + 'a')
				keyIndex++
			}
		}

		writer.WriteByte('\n')
	}
}

func isVowel(letter byte) bool {
	return letter == 'a' ||
		letter == 'e' ||
		letter == 'i' ||
		letter == 'o' ||
		letter == 'u'
}

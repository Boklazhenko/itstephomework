package main

import (
	"fmt"
	"log"
)

func main() {
	fmt.Println("enter 'a b'")
	var a, b int
	_, err := fmt.Scanf("%d %d", &a, &b)
	if err != nil {
		log.Fatalln(err)
	}

	fmt.Printf("GCD = %d", getGreatestCommonDivisor(a, b))
}

func getGreatestCommonDivisor(a, b int) int {
	if b > a {
		a, b = b, a
	}

	if a%b == 0 {
		return b
	}

	return getGreatestCommonDivisor(b, a%b)
}

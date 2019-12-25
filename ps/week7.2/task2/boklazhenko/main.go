package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	rand.Seed(time.Now().UnixNano())
	secretNum := rand.Int() % 10000

	attempts := 0
	var userNum int

	for {
		fmt.Println("enter 4-digit number")
		_, err := fmt.Scanf("%d", &userNum)

		if err != nil || getDigitCount(userNum) != 4 {
			fmt.Printf("invalid input!")
			continue
		}

		attempts++

		if userNum == secretNum {
			break
		}

		fmt.Printf("oxes - %d; cows - %d\n", getOxesCount(userNum, secretNum), getCowsCount(userNum, secretNum))
	}

	fmt.Printf("Grac! %d attempts\n", attempts)
}

func getDigitCount(num int) int {
	if num/10 == 0 {
		return 1
	}

	return 1 + getDigitCount(num/10)
}

func getOxesCount(leftNum, rightNum int) int {
	leftDigitsExisting := make([]bool, 10)
	rightDigitsCount := make([]int, 10)

	for {
		d := leftNum % 10
		leftDigitsExisting[d] = true
		if leftNum/10 == 0 {
			break
		}
		leftNum /= 10
	}

	for {
		d := rightNum % 10
		rightDigitsCount[d]++
		if rightNum/10 == 0 {
			break
		}
		rightNum /= 10
	}

	var count int
	for i, exist := range leftDigitsExisting {
		if exist {
			count += rightDigitsCount[i]
		}
	}

	return count
}

func getCowsCount(leftNum, rightNum int) int {
	var res int
	if leftNum%10 == rightNum%10 {
		res = 1
	} else {
		res = 0
	}
	if leftNum/10 == 0 || rightNum/10 == 0 {
		return res
	}
	return res + getCowsCount(leftNum/10, rightNum/10)
}

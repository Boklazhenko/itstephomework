package main

import (
	"fmt"
	"log"
)

func main() {
	fmt.Println("enter horse coors {x y}")
	var x, y int
	_, err := fmt.Scanf("%d %d", &x, &y)
	if err != nil {
		log.Fatalln(err)
	}

	board, err := newBoard(Point{x, y})
	if err != nil {
		log.Fatalln(err)
	}

	log.Println("begin solving...")
	err = board.solve()

	if err != nil {
		log.Fatalln(err)
	}

	log.Println("solved!")

	fmt.Println("press: n - next; p - previous; q - quit")

	fmt.Println(board)

	for {
		var input string
		fmt.Scanf("%v", &input)
		switch input {
		case "n":
			if board.NextState != nil {
				board = board.NextState
			}
		case "p":
			if board.PreviousState != nil {
				board = board.PreviousState
			}
		case "q":
			return
		}
		fmt.Printf("\n%v\n", board)
	}
}

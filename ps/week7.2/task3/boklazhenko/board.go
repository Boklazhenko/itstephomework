package main

import (
	"bytes"
	"fmt"
)

type Point struct {
	X, Y int
}

type Board struct {
	View             [][]rune
	HorsePoint       Point
	VisitedCellCount int
	NextState        *Board
	PreviousState    *Board
}

const boardSize = 6

func newBoard(horsePoint Point) (*Board, error) {
	board := &Board{
		View:             make([][]rune, boardSize),
		HorsePoint:       horsePoint,
		VisitedCellCount: 1,
		NextState:        nil,
	}

	for y := range board.View {
		board.View[y] = make([]rune, boardSize)
		for x := range board.View[y] {
			board.View[y][x] = '.'
		}
	}

	if !board.isRange(horsePoint.X, horsePoint.Y) {
		return board, fmt.Errorf("x or y out of board size - %d", len(board.View))
	}

	board.View[horsePoint.Y][horsePoint.X] = 'g'

	return board, nil
}

func (board *Board) solve() error {
	if board.VisitedCellCount == boardSize*boardSize {
		return nil
	}

	shifts := []Point{
		{-1, -2},
		{-1, 2},
		{1, -2},
		{1, 2},
		{-2, -1},
		{-2, 1},
		{2, -1},
		{2, 1},
	}

	for _, p := range shifts {
		newBoard, err := board.moveHorse(board.HorsePoint.X+p.X, board.HorsePoint.Y+p.Y)

		if err != nil {
			continue
		}

		err = newBoard.solve()

		if err == nil {
			board.NextState = newBoard
			newBoard.PreviousState = board
			return nil
		}
	}

	return fmt.Errorf("solution not exists")
}

func (board *Board) moveHorse(x, y int) (*Board, error) {
	if !board.isCanMove(x, y) {
		return &Board{}, fmt.Errorf("can't move to %d %d", x, y)
	}

	clone := board.clone()
	clone.View[clone.HorsePoint.Y][clone.HorsePoint.X] = '+'
	clone.HorsePoint = Point{x, y}
	clone.View[y][x] = 'g'
	clone.VisitedCellCount++
	return clone, nil
}

func (board *Board) isCanMove(x, y int) bool {
	return board.isRange(x, y) && board.View[y][x] == '.'
}

func (board *Board) isRange(x, y int) bool {
	if x < 0 || x >= len(board.View) || y < 0 || y >= len(board.View) {
		return false
	}

	return true
}

func (board *Board) String() string {
	buff := bytes.Buffer{}
	for y := range board.View {
		for x := range board.View[y] {
			buff.WriteRune(board.View[y][x])
			buff.WriteRune(' ')
		}
		buff.WriteRune('\n')
	}
	return buff.String()
}

func (board *Board) clone() *Board {
	clone := *board
	clone.View = make([][]rune, boardSize)

	for y := range board.View {
		clone.View[y] = make([]rune, boardSize)
		copy(clone.View[y], board.View[y])
	}
	return &clone
}

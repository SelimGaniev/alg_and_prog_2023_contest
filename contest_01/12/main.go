package main

import (
	"fmt"
)

func main() {
	var num int
	fmt.Scan(&num)
	var ansv int
	for i := 1; num != 1; i++ {
		if num%2 == 0 {
			num = num / 2

		} else {
			num = 3*num + 1

		}
	ansv=i

	}
	fmt.Print(ansv)

}

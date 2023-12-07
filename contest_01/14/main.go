package main

import "fmt"

func main() {
	var row int
	var col int
	fmt.Scan(&col)
	fmt.Scan(&row)
	for i := 0; i <= row; i++ {
		if i == 0 {
			fmt.Print("    |")


		} else if i != row {
			if i>9{
				fmt.Print("  ", i)
			}else{
			fmt.Print("   ", i)
			}
		} else if i == row {
			if i>9{
				fmt.Println(" ", i)
			}else{
			fmt.Println("  ", i)
		}
		}
	}
	fmt.Print("   --")
	for t := 0; t < row; t++ {
		if t == row-1 {
			fmt.Println("----")
		} else {
			fmt.Print("----")
		}
	}
	for c := 1; c <= col; c++ {
		if c < 10 {
			fmt.Print("   ", c, "|")
			for z := 1; z <= row; z++ {
				if z == row {
					if c*z < 10 {
						fmt.Println("  ", c*z)
					} else if c*z < 100 {
						fmt.Println(" ", c*z)
					} else if c*z < 1000 {
						fmt.Println("",c*z)
					}
				} else {
					if c*z < 10 {
						fmt.Print("   ", c*z)
					} else if c*z < 100 {
						fmt.Print("  ", c*z)
					} else if c*z < 1000 {
						fmt.Print(" ", c*z)
					}
				}
			}
		} else {
			fmt.Print("  ", c, "|")
			for z := 1; z <= row; z++ {
				if z == row {
					if c*z < 10 {
						fmt.Println("  ", c*z)
					} else if c*z < 100 {
						fmt.Println(" ", c*z)
					} else if c*z < 1000 {
						fmt.Println("",c*z)
					}
				} else {
					if c*z < 10 {
						fmt.Print("   ", c*z)
					} else if c*z < 100 {
						fmt.Print("  ", c*z)
					} else if c*z < 1000 {
						fmt.Print(" ", c*z)
					}
				}
			}

		}
	}
}

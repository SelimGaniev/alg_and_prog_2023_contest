package main

import "fmt"

func main() {
	var a int
	fmt.Scan(&a)
	var b int
	fmt.Scan(&b)
	var c int
	fmt.Scan(&c)
	if a>b{
		if a>c{
			fmt.Println(a)
		}
	}
	if b>a{
		if b>c{
			fmt.Println(b)
		}
	}
	if c>a{
		if c>b{
			fmt.Println(c)
		}
	}


}

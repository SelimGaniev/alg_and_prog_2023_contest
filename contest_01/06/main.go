package main

import "fmt"

func main() {
	var a int
	fmt.Scan(&a)
	var m5000 int = 0
	var m1000 int = 0
	var m500 int = 0
	var m200 int = 0
	var m100 int = 0
	for a=a ; a>=5000; a=a-5000{
		m5000=m5000 + 1
	}
	for a =a; a>=1000; a=a-1000{
		m1000 = m1000 + 1
	}
	for a=a ; a>=500; a=a-500{
		m500 = m500 + 1
	}
	for a=a ; a>=200; a=a-200{
		m200=m200 + 1
	}
	for a=a ; a>=100; a=a-100{
		m100=m100 + 1
	}
	fmt.Print(m5000,m1000,m500,m200,m100)


}


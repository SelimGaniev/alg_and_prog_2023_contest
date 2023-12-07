package main

import "fmt"

func main() {
	var max int
	var app float64
	fmt.Scanln(&max)
	var met []float64
  var costil[]float64

	for i := 1; i <= max; i++ {
		fmt.Scan(&app)
		met = append(met, app)
    costil = append(costil, app)
	}
  
	for z := 0; z < max; z++ {
    if z>0{
    met[z-1]=costil[z-1]
    }
		if z == 0 {
			fmt.Print(met[0]," ")

		} else if z == max-1 {
			fmt.Print(met[max-1]," ")

		} else {
			met[z] = (met[z-1] + met[z] + met[z+1]) / 3
			fmt.Print(met[z]," ")

		}

	}

}

package main

import (
	"fmt"
)

func main() {
	var swim string
	fmt.Scan(&swim)
	var wings string
	fmt.Scan(&wings)
	var neck string
	fmt.Scan(&neck)
	if swim =="Нет"{
		if wings =="Нет"{
			if neck == "Нет"{
				fmt.Print("Кот")
			}
			if neck == "Да"{
				fmt.Print("Жираф")
			}
		}
		if wings =="Да"{
			if neck == "Нет"{
				fmt.Print("Курица")
			}
			if neck == "Да"{
				fmt.Print("Страус")
		}

		}

	
		}
		if swim =="Да"{
			if wings =="Нет"{
				if neck == "Нет"{
					fmt.Print("Дельфин")
				}
				if neck == "Да"{
					fmt.Print("Плезиозавры")
				}
			}
			if wings =="Да"{
				if neck == "Нет"{
					fmt.Print("Пингвин")
				}
				if neck == "Да"{
					fmt.Print("Утка")
			}
	
			}
	
		}
			}
	

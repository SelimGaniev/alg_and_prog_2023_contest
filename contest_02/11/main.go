func isValidSudoku(stol [9][9]int)bool {

	
	for strok:=0;strok<9;strok++{

	    for i:=1;i<=9;i++{
        	    count:=0
		for stolb:=0;stolb<9;stolb++{
					if stol[strok][stolb]==i{
						count++
					}
					if count>1{
			return false
			
			}
				}

				
			
		}
	}
	
	for strok:=0;strok<9;strok++{

	    for i:=1;i<=9;i++{
        	    count:=0
		for stolb:=0;stolb<9;stolb++{
					if stol[stolb][strok]==i{
						count++
					}
					if count>1{
			return false
			
			}
				}

				
			
		}
	}


	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
		    for h:=1;h<=9;h++{
		    count:=0


		        

			for strok := i * 3; strok < 3*(i+1); strok++ {
				for stolb := j * 3; stolb < 3*(j+1); stolb++ {
					if stol[strok][stolb]==h{
						count++
					}
					if count>1{
			return false
			
			}
				
		}
		}

		}
}
}
	return true


}

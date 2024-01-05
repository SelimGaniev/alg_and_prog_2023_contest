func Abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}
func fill (maze[][]int)[][]int{
	for row:=0;row<len(maze);row++{
		for col:=0;col<len(maze[0]);col++{
			if maze[row][col]==-1{
				for row1:=0;row1<len(maze);row1++{
					for col1:=0;col1<len(maze[0]);col1++{
						if Abs(row-row1)==1 ||	Abs(col-col1)==1 {
							if Abs(row-row1)==0 ||	Abs(col-col1)==0 {
								if maze[row1][col1]>=0{
									maze[row1][col1]++
								}
							
							}
						}
						if Abs(row-row1)==1 &&	Abs(col-col1)==1 {
							
								if maze[row1][col1]>=0{
									maze[row1][col1]++
								}
							
							
						}
						
					}
				}
			}
		}
	}
	return maze
}
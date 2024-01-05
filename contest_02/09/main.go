import (
    
    "strconv"

)
func isLucky(num string)(bool){
    var(
    numz string=string(num[0])
    numf string=string(num[1])
    nums string=string(num[2])
    numt string=string(num[3])
    numfo string=string(num[4])
    numfi string=string(num[5])
    )
    zero,_ :=strconv.Atoi(numz)
    first,_ :=strconv.Atoi(numf)
    second,_ :=strconv.Atoi(nums)
    third,_:=strconv.Atoi(numt)
    fourth,_ :=strconv.Atoi(numfo)
    fifth,_ :=strconv.Atoi(numfi)
    
    return zero+first+second==third+fourth+fifth
    
}
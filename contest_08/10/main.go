func printTypes(data []interface{}) {
    for _, val := range data {
        switch val.(type) {
        case int:
            fmt.Print("int ")
        case string:
            fmt.Print("string ")
        case Human:
            fmt.Print("Human ")
        case *Human:
            fmt.Print("*Human ")
        default:
            fmt.Print("interface ")
        }
    }
}
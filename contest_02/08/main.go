import(
	"regexp"
	"strings"
)

func reverse(line string) string {
	var obr string
	for i := len(line) - 1; i >= 0; i-- {
		obr += string(line[i])

	}
	var re = regexp.MustCompile(`[[:punct:]]|[[:space:]]`)
	obr = re.ReplaceAllString(obr, "")
	obr = strings.ToLower(obr)
	return obr
}
func isPalindrome(line string) bool {
	var re = regexp.MustCompile(`[[:punct:]]|[[:space:]]`)
	line = re.ReplaceAllString(line, "")
	line = strings.ToLower(line)
	return line == reverse(line)

}
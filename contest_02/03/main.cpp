bool compare(const std::string& left, const std::string& right)
{
    int ct1 = 0, ct2 = 0;
    int lev = std::stoi(left);
    int prav = std::stoi(right);
    while (lev > 0) {
        ct1+=lev%10;
        lev /= 10;
    }
    while (prav > 0) {
        ct2 += prav % 10;
        prav /= 10;
    }
    if (ct1 == ct2)
    {
        return std::stoi(left)< std::stoi(right);
    }
    return ct1 > ct2;
}
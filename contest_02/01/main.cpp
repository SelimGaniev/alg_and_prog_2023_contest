bool is_prime(const int number) {

    for (int i = 2; i*i <= number; i++) 
    {
        if (number % i == 0) {
            return 0;
        }
  
     


    }
    return 1;

}
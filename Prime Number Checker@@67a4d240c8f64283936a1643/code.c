// Your code here...
int isPrime(int a)
{
    for(int i=2;i<a-1;i++){
        if (a%i==0){
            return "0";
            break;
        }
        else{
            continue;
        }

    }
    return "1";
}
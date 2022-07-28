function reverse(x: number): number {

    let negative: boolean = false;
    if(x < 0){
        negative = true;
        x *= -1;
    }
    let value: number = 0;
    while(x > 0){
        let temp = x%10;
        value *= 10;
        value += temp;
        x = Math.trunc(x/10);
        if(value>2147483647){
            return 0;
        }
    }
    if(negative){
        value *= -1;
    }
    return value;    
    
};
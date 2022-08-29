const THREE_HOURS_IN_SECONDS: u32 = 60*60*3;
fn main() {
    let x = 5;
    println!("the value of x is {}", x);
    let x = x + 1;
    println!("the value of x is {}", x);
    {
        let x = x * 2;
        println!("the value of x is {}", x);
    }
    println!("the value of x is {}", x);
    println!("time {}",THREE_HOURS_IN_SECONDS);
}

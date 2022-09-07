fn main() {
    println!("Hello, world!");

    another_function(5,'h');
}

fn plus_one(x: i32) ->i32{
    x + 1
}

fn five() -> i32 {
    5
}

fn another_function(x: i32, unit_label: char) {
    println!("the value of x is: {}{}", plus_one(five()), unit_label);
}

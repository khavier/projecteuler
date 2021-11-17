

fn main() {


    let mut number = 2;
    let mut index_prime = 0;
    let limit = 10001;


    'main_loop: loop {

    
        if number == 2 || number == 3 {
            index_prime += 1;
            number += 1;
            continue 'main_loop; 
        }


        for i in 2..((number / 2) + 1) {

            if number % i == 0 {
                number += 1;
                continue 'main_loop;
            }
        }

        println!("{}", number);
        index_prime += 1;


        if index_prime >= limit {

            println!("Answer: {}", number);
            break 'main_loop;
        }

        number += 1;
    }   


    
}
/*
Two red beads are placed between every two blue beads. There are N blue beads. After looking at the arrangement below work out the number of red beads.

@ @@ @ @@ @ @@ @ @@ @ @@ @

Implement a function returning the number of red beads.
If there are less than 2 blue beads return 0.
*/

function countRedBeads(n) {
    let result = (n - 1) * 2;

    if(n < 2){
        return 0;
    }

    else{
        if( n % 2 == 1){
            return result;
        }
        else{
            return result;
        }
    }
}

countRedBeads(3)

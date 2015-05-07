//Bingo Number Generator
/*
first attempt at codeing after bingeing js and html/css tutorials.... havent figured out how to test yet 
To figure out how to test later so that i can make this look pretty :s 
*/

window.onload=function (){
	var ans = confirm("Welcome to Bingo would you wish to play?");
	var Bingo =['B','I','N','G','O'];
	while(ans){
		var a =Bingo[Math.floor((Math.random()*5))]+Math.floor((Math.random()*99)+1);
		ans = confirm("Continue naming");
		if (!ans){
			console.log("BINGO!!!!!!!!!!!!!!!!!!!!!!");
			console.log("We hope you enjoy your prize");
			break;
		}
	}
document.getElementById("calendar-month-year").innerHTML = a;
}
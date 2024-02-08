let ba = [];
ba = document.getElementsByClassName("ba");

function reset_width() {
	for(let i = 0 ; i < 5 ; i++) {
		ba[i].style.width = "0vw";
	}
}
function do_amazing_animation(left, top, width, height) {
	/*t.style.backgroundColor = 'rgb(255, 255, 255, 0)';*/

	for(let i = 0 ; i < 5 ; i++) {
		/*ba[i].style.left = t.style.left;
		ba[i].style.top = t.style.top;*/

		ba[i].style.left = left;
		ba[i].style.top = top;
		ba[i].style.width = width;
		ba[i].style.height = height;
	}

	setTimeout(reset_width, 1000);
}
function do_amazing_animation_z(left, top, z, width, height) {
	/*t.style.backgroundColor = 'rgb(255, 255, 255, 0)';*/

	for(let i = 0 ; i < 5 ; i++) {
		/*ba[i].style.left = t.style.left;
		ba[i].style.top = t.style.top;*/

		ba[i].style.left = left;
		ba[i].style.top = top;
		ba[i].style.zIndex = (z - 0.5) + " ";
		ba[i].style.width = width;
		ba[i].style.height = height;
	}

	setTimeout(reset_width, 1000);
}
function do_amazing_animation_id(id) {
	let t = document.getElementById(id);
	console.log(t);
	console.log("100");
	console.log(t.style.top);
	
	for(let i = 0 ; i < 5 ; i++) {
		ba[i].style.left = t.style.left;
		ba[i].style.top = t.style.top;
		ba[i].style.width = t.style.width;
		ba[i].style.height = t.style.height;
	}
	setTimeout(reset_width, 1000);
}
function do_amazing_animation_this(t) {
	console.log(t);
	console.log("100");
	console.log(t.style.top);

	for(let i = 0 ; i < 5 ; i++) {
		ba[i].style.left = t.style.left;
		ba[i].style.top = t.style.top;
		ba[i].style.width = t.style.width;
		ba[i].style.height = t.style.height;
	}
	setTimeout(reset_width, 1000);
}

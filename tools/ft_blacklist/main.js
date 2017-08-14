// Written by @ncardoza

blacklist = ["nmajedaa"];

if (location.url.includes("profile.intra.42.fr")){
	for (var i = 0; i < blacklist.length; i++){
		uid = document.querySelector(`[data-user-link="${blacklist[i]}"]`);
		if (uid){
			remove = uid.parentElement.parentElement.querySelector('.iconf-delete-2-1');
			if (remove){
				remove.click()
			}
		}
	}
	setTimeout(function(){
		location.reload();
	}, 1000 * 60 * 5)
}

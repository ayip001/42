// Written by @ncardoza

blacklist = ["nmajedaa"];

if (location.href.includes("profile.intra.42.fr")){
	for (var i = 0; i < blacklist.length; i++){
		uid = document.querySelector(`[data-user-link="${blacklist[i]}"]`);
		if (uid){
			remove = uid.parentElement.parentElement.querySelector('.iconf-delete-2-1');
			if (remove){
				remove.click();
				setTimeout(function(){
					alert('ft_blacklist: your correction appointment with "${blacklist[i]}" will be canceled in 15 seconds. Close the profile webpage to cancel.');
					// document.querySelector('[data-method="delete"]').click()
				}, 1000 * 15)
			}
		}
	}
	setTimeout(function(){
		location.reload();
	}, 1000 * 60 * 5)
}

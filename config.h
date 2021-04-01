//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	//{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	//{"",	"sb-tasks",	10,	26},
	//{"",	"sb-music",	0,	11},
	//{"",	"sb-pacpackages",	0,	8},
	//{"",	"sb-news",		0,	6},
	//{"",	"sb-torrent",	20,	7},
	{"",	"/home/gon/.config/barblocks/menu-dwm",	0,	3}, 
	{"",	"/home/gon/.config/barblocks/vol2",	0,	10},
	 //{"",	"/home/gon/scripts/sb-memory",	10,	14}, 
	/* {"",	"sb-cpu",		10,	18}, */
	//{"",	"/home/gon/.config/barblocks/moonphase",	18000,	17},
	{"",	"/home/gon/.config/barblocks/forecast2",	18000,	5},
	{"",	"/home/gon/.config/barblocks/temp",	5,	6}, 
	{"",	"/home/gon/.config/barblocks/correo-rss",	0,	7}, 
	{"",	"/home/gon/.config/barblocks/paquetes",	0,	4}, 
	{"",	"/home/gon/.config/barblocks/sb-memory",	10,	14}, 
	//{"",	"/home/gon/.config/barblocks/moonphase",	18000,	5},
	//{"",	"sb-mailbox",	180,	12},
	//{"",	"sb-nettraf",	1,	16},
	//{"",	"/home/gon/scripts/vol_dwm2",	0,	10},
	//{"",	"/home/gon/.config/barblocks/vol2",	0,	10},
	//{"",	"sb-battery",	5,	3},
	{"",	"/home/gon/.config/barblocks/ip",	0,	2}, 
	{"",	"/home/gon/.config/barblocks/sb-clock",	60,	1},
	//{"",	"sb-internet",	5,	4},
	//{"",	"sb-help-icon",	0,	15},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

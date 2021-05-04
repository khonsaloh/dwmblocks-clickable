//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"~/.config/barblocks/menu-dwm",	0,	3},
	{"",	"~/.config/barblocks/vol2",	0,	10},
	{"",	"~/.config/barblocks/forecast2",	18000,	5},
	{"",	"~/.config/barblocks/temp",	5,	6},
	{"",	"~/.config/barblocks/correo-rss",	0,	7},
	{"",	"~/.config/barblocks/paquetes",	0,	4},
	{"",	"~/.config/barblocks/memory",	10,	14},
	{"",	"~/.config/barblocks/ip",	0,	2},
	{"",	"~/.config/barblocks/clock",	120,	1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

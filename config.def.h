/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#170420",   /* after initialization */
	[INPUT] =  "#1e457e",   /* during input */
	[FAILED] = "#ea1646",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#ddfafa";

/* text size (must be a valid size) */
/* check available fonts with `slock -f` */
static const char * font_name = "9x15";

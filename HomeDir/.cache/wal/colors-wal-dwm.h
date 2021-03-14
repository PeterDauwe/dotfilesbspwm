static const char norm_fg[] = "#ed8e9b";
static const char norm_bg[] = "#220114";
static const char norm_border[] = "#a5636c";

static const char sel_fg[] = "#ed8e9b";
static const char sel_bg[] = "#6D0770";
static const char sel_border[] = "#ed8e9b";

static const char urg_fg[] = "#ed8e9b";
static const char urg_bg[] = "#490466";
static const char urg_border[] = "#490466";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};

const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#220114", /* black   */
  [1] = "#490466", /* red     */
  [2] = "#6D0770", /* green   */
  [3] = "#A6093A", /* yellow  */
  [4] = "#CD0D37", /* blue    */
  [5] = "#94094A", /* magenta */
  [6] = "#93357F", /* cyan    */
  [7] = "#ed8e9b", /* white   */

  /* 8 bright colors */
  [8]  = "#a5636c",  /* black   */
  [9]  = "#490466",  /* red     */
  [10] = "#6D0770", /* green   */
  [11] = "#A6093A", /* yellow  */
  [12] = "#CD0D37", /* blue    */
  [13] = "#94094A", /* magenta */
  [14] = "#93357F", /* cyan    */
  [15] = "#ed8e9b", /* white   */

  /* special colors */
  [256] = "#220114", /* background */
  [257] = "#ed8e9b", /* foreground */
  [258] = "#ed8e9b",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;

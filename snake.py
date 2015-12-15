import curses
########################################
class Wonsz(object):
    def __init__(self, yx):
        self.x = yx[1]/2
        self.y = yx[0]/2
    def __str__(self):
        return '({0}, {1})'.format(self.x, self.y)
    def rysuj(self):
        screen.addstr(int(self.y), int(self.x), '@')

########################################

def draw_scene(yx):
    for y in range(yx[0] - 2):
        screen.addstr(y, 0, '#')
        screen.addstr(y, yx[1] - 10, '#')
    for x in range(yx[1] - 10):
        screen.addstr(0, x, '#')
        screen.addstr(yx[0] - 2, x, '#')
########################################


#MAIN
screen = curses.initscr()
curses.noecho()
yx = screen.getmaxyx()
Bartek = Wonsz(yx)
screen.addstr(2, 2, str(yx))
draw_scene(yx)

key = '['
while key != ord('p'):
    key = screen.getch()
    draw_scene(yx)
    Bartek.rysuj()
    #screen.addstr(80, 24, '$')
    screen.refresh()



curses.endwin()
#END OF MAIN

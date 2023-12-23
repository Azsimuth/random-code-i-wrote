// This game maker language script, written specifically in game maker 8, serves to draw a zigzaging power line of some sorts, inspired by the attack rays of the vortiguants in half-life. The segments aren't implemented, and the drawing is pretty inefficcient too, 
// there is probably a way to use a loop which would be a million times for flexible, and efficient, however I am yet to find that out.

///draw_zigzag(x1, y1, x2, y2, colour, dangle)
// 2023-12-02, azimuth

var x1, y1, x2, y2, colour, segments, deviation;
x1 = argument[0] y1 = argument[1]
x2 = argument[2] y2 = argument[3]
colour    = argument[4]
segments  =          4;
deviation = argument[5]

var smx, smy; // segment middle X, and segment middle Y
var dv;
dv = random_range(-deviation,deviation)

// x-es
smx[0] = floor((x1 + x2) / 2)     - dv
smx[1] = floor((x1 + smx[0]) / 2) - dv
smx[2] = floor((smx[0] + x2) / 2) - dv
// y-s
smy[0] = floor((y1 + y2) / 2)     - dv
smy[1] = floor((y1 + smy[0]) / 2) - dv
smy[2] = floor((smy[0] + y2) / 2) - dv
// drowing!!!

draw_line_color(x1,y1,smx[1],smy[1],colour,colour)
draw_line_color(smx[1],smy[1],smx[0],smy[0],colour,colour)
draw_line_color(smx[0],smy[0],smx[2],smy[2],colour,colour)
draw_line_color(smx[2],smy[2],x2,y2,colour,colour)

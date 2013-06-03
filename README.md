Usage
-----
``` cpp
StopWatch s;
/* Timed stuff here */
s.tick();
/* Other stuff
float dt = s.getTimeElapsed();
```
or
``` cpp
StopWatch s;
/* Other stuff */
s.tick();
/* Timed stuff here */
s.tick();
/* Other stuff */
float dt = s.getTimeElapsed();
```

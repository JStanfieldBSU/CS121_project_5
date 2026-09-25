# CS121_project_5
OOP Horse Race in C++

```
class Horse{
    - id : int
    - position : int
    - trackLength : int

    + Horse()
    + init(id : int, trackLength : int)
    + advance()
    + printlane()
    + isWinner() : bool
}

class Race{
    - NUM_HORSES : int
    - TRACK_LENGTH : int
    + horses : Horse[]

    + Race()
    + start()
}

Race --> Horse
```

## hrMain.cpp
```
    call the race constructor
    call start with that race object
    profit (also return 0)
```

## Race::Race()
```
const int TRACK_LENGTH
const static int NUM_HORSES

Create an array of horses length NUM_HORSES
Initialize all the horses
for each horse
    initialize that horse with its id and the track length
```

## Race::start()
```
seed rng (c style)
bool keepGoing
while keepGoing
    go through each horse:
        advance that horse
        print that horse lane
        check if horse won
        if horse won
            keepGoing false.
```

## Horse::Horse()
```
position = 0
id = 0
trackLength = 15
```

## void Horse::init(int id, int trackLength)
```
Horse::id = id
Horse::trackLength = trackLength
Horse::position = 0
```

## void Horse::advance()
```
int coin = rand() % 2;
position += coin;
```

## void Horse::printLane()
```
for each spot in trackLength
    if position = sentinel
        print id
    else
        print '.'
print '\n'
```

## void Horse::isWinner()
```
bool isWin = false

if position >= trackLength
    print 'a winner is ' + id + \n
    isWin = true
return isWin
```

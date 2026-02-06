```mermaid
classDiagram
    class Horse {
        -int position
        -int id
        +Horse(int id)
        +advance()
        +getPosition() int
        +printRace()
        +hasWon(int trackLength) bool
        +print() void
    }

    class Race {
        -Horse horses[NUM_HORSES]
        -const static int NUM_HORSES
        -int trackLength
        +Race(int trackLength)
        +run()
        +hasWinner() bool
    }

    Race "1" --> "many" Horse

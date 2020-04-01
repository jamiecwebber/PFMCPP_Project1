#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    e
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: synth
//  action 1: synth plays a note
synth.playNote();
//  action 2: synth changes waveforms
synth.changeWaveform();
//  action 3: synth changes gain
synth.changeGain();
 
//  2)
//  Noun: microwave
//  action 1: microwave heats up food
microwave.heat();
//  action 2: microwave runs a timer
microwave.runTimer();
//  action 3: microwave runs on defrost mode
microwave.defrost();

//  3)
//  Noun: car
//  action 1: car starts engine
car.startEngine();
//  action 2: car accellerates
car.accellerate();
//  action 3: car brakes
car.brake();
 
//  4)
//  Noun: deck of cards
//  action 1: shuffles order
cardDeck.shuffle();
//  action 2: discards card;
cardDeck.discard();
//  action 3: deals card to player
cardDeck.deal();
 
//  5)
//  Noun: spaceship
//  action 1: detects if ready for launch
spaceship.detectReadyForLaunch();
//  action 2: reports any internal errors
spaceship.reportErrors();
//  action 3: launches
spaceship.launch(); // there we go I can work for SpaceX now
 
//  6)
//  Noun: dog
//  action 1: barks
dog.bark();
//  action 2: pulls on leash
dog.pullOnLeash(); // would have to have a boolean checking whether it has a leash
//  action 3: wags tail
dog.wagTail();
 
//  7)
//  Noun: rainbow
//  action 1: appears in sky
rainbow.becomeVisible();
//  action 2: brings good luck
rainbow.increaseLuck();
//  action 3: spawns pot of gold
rainbow.spawnGold();
 
//  8)
//  Noun: bassoon
//  action 1: plays staccato notes
bassoon.playStaccato();
//  action 2: plays baseline
bassoon.playBaseline(); // assuming you would pass in some argument
//  action 3: plays the opening phrase to Rite of Spring
bassoon.playRiteOfSpringOpening();
 
//  9)
//  Noun: lego brick
//  action 1: connect on top of another brick
legoBrick.connectAbove();
//  action 2: connect underneath another brick
legoBrick.connectBelow();
//  action 3: disconnect from above
legoBrick.disconnectAbove(); // could be kinda ambiguous
 
//  10)
//  Noun: bread dough
//  action 1: rises
dough.rise();
//  action 2: proofs (proofing is second rising, it's different enough to warrant its own function tho)
dough.proof();
//  action 3: bakes
dough.bake(); // arguably the oven does the baking, but also 'baking' is something it does internally

#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}

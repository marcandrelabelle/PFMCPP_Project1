#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
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
 */


//  example)
//  Noun:    arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1) 
//  Noun: tape recorder
//  action 1: play tape half speed
tapeRecorder.playFullSpeed();
//  action 2: change tape direction
tapeRecorder.changeTapeDirection();
//  action 3: record input
tapeRecorder.record();

 
//  2)
//  Noun: garbage truck
//  action 1: crushing trash
garbageTruck.crushTrash();
//  action 2: dumping trash 
garbageTruck.dumpGarbage();
//  action 3: stoping  
garbageTruck.stop();
 
//  3)
//  Noun: guitarist 
//  action 1: play a chord
guitarist.playChord();
//  action 2: make noise with pedals 
guitarist.makeNoise();
//  action 3: sing harmonies 
guitarist.singHarmonies();

//  4)
//  Noun: lion
//  action 1: lion hunts prey
lion.huntPrey();
//  action 2:lion roaring
lion.roar();
//  action 3: lion needs to hide in the bush
lion.hide(); 

//  5)
//  Noun: yeast 
//  action 1: turns sugar into alcohol
yeast.sugarToAlchohol();
//  action 2: yeast growing 
yeast.grow();
//  action 3: creates carbon dioxide
yeast.createCarbonDioxide();
 
//  6) 
//  Noun: priest
//  action 1: performe rites 
priest.performRites();
//  action 2: celebrates daily Mass
priest.celebrateMass();
//  action 3: performs a funerals
priest.performFuneral();
 
//  7)
//  Noun: boss
//  action 1: boss providing feedbacks
boss.feedback();
//  action 2: boss delegate responsibility
boss.giveOrders();
//  action 3: boss provide employees with resources
boss.provideResources();
 
//  8)
//  Noun: fan
//  action 1: create air flow 
fan.airFlow();
//  action 2: oscillate right and left
fan.oscillate();
//  action 3: fan spin faster
fan.spinFaster();
 
//  9)
//  Noun: camp fire
//  action 1: create heat
fire.releaseHeat();
//  action 2: fire light up campsite
fire.lightUp();
//  action 3: fire burning wood
fire.burnWood();
 
//  10)
//  Noun: bartender
//  action 1: serves drinks.
bartender.serveDrink();
//  action 2:  bartender counts cash
bartender.countCash();
//  action 3: stops fights
bartender.stopFight();
 


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}

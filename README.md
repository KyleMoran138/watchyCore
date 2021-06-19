# watchyCore! A library for Watchy, a Fully Open Source E-Paper Watch

*__This repo is just the library code for the watch. Watchfaces are managed separately and will have a repo in the future.__* This is a fork of the original Watchy branch which is [here](https://github.com/sqfmi/Watchy)


## How to start contributing to this library
There's currently 2 ways to go about writing / testing code in this library

### Branching strategy
Here's a list of branches and what they're for
- main (Where the 'stable' code lives)
- release (Where the next releases code is merged, squash merged into main on deployment and re-created when release planning starts)
- latest (Where all features are merged, this is deleted and re-created after release __I think that's a rebase...__ )
- <feature/patch>/<breifNameHere> (Where feature/patch development happens, squash merge into release??? Not sure bout this yet)

When you start working on a bug/feature/patch, branch off of main (or whatever other branch you may have dependencies on.) and do your work. Once your code is worth of judgement (or lackthereof) open a pr for your branch into latest. Once that's merged it'll be available in the next latest build that occurs (needs automation see ISSUE#).
    
Just because a feature is in latest it does not mean the feature is going to be in the release branch / released. There's some release planning that might have to happen, not sure yet... release branch might get removed for latest, we'll see. 

### PR process
- Once a PR is open it'll require review from at least one code owner. Once reviewed and approved, the code owner will squash merge the PR.
- A PR can merge directly into main if it's documentation that does not coincide with any functionality. 

### Writing the code
#### Option 1:
1. Edit library code
2. Every time you want to compile copy the contents of the source folder into a folder called `watchyCore` in your Arduino library directory
3. Compile the test watchface (still need to make a test watchface) with the now modified library code 
4. profit? 

#### Option 2 (untested so far):
1. Clone the repo into the Arduino library directory
2. Edit library code
3. Compile the test watchface (still need to make a test watchface) with the now modified library code 


### Have Fun! :)
    
    
![Watchy](https://watchy.sqfmi.com/img/watchy_render.png)

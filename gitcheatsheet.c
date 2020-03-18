//  ----- GIT BASICS -----
//  BASIC CODES
$ git init
// This creates a new subdirectory called ".git", which contains all the necessary files from the repository
$ git config
//this command is used to open the git configuration
$ git add
//to specify which files you want to control
$ git commit
//to confirm the changes
$ git clone
//to get a copy of an existing Git repository
$ git status
//to know the status of some files
$ git diff
//Compare the working directory with the preparation area
$ git rm
//to delete untracked files
$git mv
//to change the file name
$git log
//to see what modifications have been made previously
$ git log -p
//shows the differences introduced in each confirmation
$ git log -2
//show only the last two history entries
$ git log --stat
//summary of some statistics of each confirmation
$ git log --pretty
//it can modify the output format
$ git log -shortstat
//Show only the summary line of the --stat option.
$ git log --name-status
//It shows the list of affected files, also indicating if they were added, modified or deleted.
$ git log --name-only
//Displays the list of affected files.
$git log --abbrev-commit
//It shows only the first characters of the SHA-1 sum, instead of the 40 characters of which it is composed.
$git log --relative-date
//Displays the date in relative format (for example, "2 weeks ago") instead of the full format.
$git log --graph
//Displays an ASCII chart with branch and junction history.
$git commit --amend
//This command uses your preparation area for confirmation. If you haven't made any changes since your last confirmation
//then the snapshot will look exactly the same, and the only thing you'll change is the confirmation message.
$git remote
//It will show the names of each of the remotes you have specified
$git remote -v
//shows the URLs that Git has associated with the name and that will be used when reading and writing on that remote
$ git push
//to send a project to a server
$git remote rename 
//rename a remote reference
//----RAMIFICATION IN GIT----//

wHAT IS A BRANCH?-----

/*Git does not store the data incrementally (saving only differences), but stores it as a series of snapshots 
(point copies of the complete files, as they are at the time).At each commit commit, Git stores a snapshot of your prepared work. 
This snapshot also contains metadata with the author and the explanatory message, 
and one or more pointers to the commits that are direct parents of it (one parent in cases of normal confirmation, 
and multiple parents in cases of confirming). a merge of two or more branches).*/

--Create a New Branch--
//when you create a branch a new pointer is created so you can move it freely.

-Change Branch- 

$ git checkout
//this command is used to jump to another branch

$git checkout -b
//To create a new branch and jump to it
$git branch -b
//to delete a branch
$ git branch
//get a list of the branches present in your project
$ git branch -v
// to see the last changes confirmation 
$ git branch --merged
//show only those that have been marged (or not)

--Remote Branches--
/*Remote branches are references to the state of the branches in your remote repositories. 
They are local branches that you cannot move; they move automatically when you establish communications on the network.
Remote branches work as bookmarks, to remind you of what state your remote repositories were in when you last connected to them.*/

-- How to post--
/* When you want to share a branch with the rest of the world,
you must push it to a remote where you have write permissions.
Your local branches do not automatically synchronize with the remote branches you write to,
but you have to expressly push the branches you want to share. In this way,
you can use private branches for work that you do not want to share,
taking to a remote only those parts that you want to contribute to others.*/

--Track Branches--
/*  If you checkout a local branch from a remote branch,
what we might call a “tracking branch” is automatically created.
Tracking branches are local branches that have a direct relationship with some remote branch.
If you are on a trailing branch and type the command git pull,
Git knows which server to fetch and merge data from.*/

--Eliminate Remote Branches--
/*Imagine that you have already finished with a remote branch,
that is, both you and your collaborators have completed a certain functionality and have incorporated it
(merge) to the master branch in the remote (or wherever you have the stable code branch).
You can delete the remote branch using the --delete option of git push.*/

--Basic Reorganization--
/* The easiest way to integrate branches, as we have seen,
is the git merge command. Make a three-way merge between
the last two snapshots of each branch and the ancestor common to both;
creating a new snapshot and the corresponding confirmation.*/

Never reorganize change commits that you have submitted (push) to a public repository.

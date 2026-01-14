Git - A free version contorl system
a tool that helps to track changes in code

git commands:

Check git version
git --version

Initialising git-
init - used to create a new git repo
git init

git remote add origin <- link -

git remote -v
(to verify remote)

git branch
(to check branch)

git branch -M main (to rename branch)

git push origin main

To show the credentials in git if already used
git config --list

To set username globally-
git config --global user.name VinikDhariwal

To set email globally-
git config --global user.email vinikdhariwal04@gmail.com

Clone - Cloning a repository into local machine
git clone <link>

Status - Display the status of code
git status

Add - adds new or changed files in your working directory to the Git staging area.
git add <- file name ->

To select all files-
git add. 

Commit - it is the record of change
git commit -m "some message"

Push - upload local repo content to remote repo
git push origin main

To mark a message for the action-
git commit -m [message]

Steps to push on GitHub-

Step 1: Open GitHub and create a new repository
Step 2: git init
Step 3: git remote add origin "link of repo"
Step 4: git remote -v
Step 5: git branch //if it returns master then follow step 6 otherwise go to step 7
Step 6: git commit -m main
Step 7: git push origin main

git push -u origin main - marks origin as upstream and then you can push only by git push command, no need to write git push origin main again and again

git commit -am "add a message" this command adds and ads a message at same time

Git Branch
 Git branch is a lightweight, movable pointer to a specific commit, allowing developers to diverge from the main line of development and work in an isolated environment without affecting the main codebase.

Branch Commands
git branch
(to check branch)
git branch -M main (to rename branch)
git checkout <- branch name -> (to navigate)
git checkout -b <- new branch name -> (to create new branch)
git branch -d <- branch name -> (to delete branch) 

Merging Code
git diff <- branch name-> (to compare commits, branches, files & more)
git merge <- branch name-> (to merge 2 branches)
OR
Create a PR (pull request)

Pull Request
It lets you tell others about changes you've pushed to a branch in a repository on GitHub.

Basic Commands
git pull origin main 
(used to fetch and download content from a remote repo and immediately update the local repo to match that content)

Merge Conflicts
(An event that takes place when Git is unable to automatically resolve differences in code between two commits)

Fixing Mistakes

Case 1: staged changes
git reset <- file name ->
git reset

Case 2: commited changes (for one commit)
git reset HEAD~1

Case 3: commited changes (for many commits)
git reset <- commit hash →>
git reset --hard <- commit hash →>

What is Forking?
A fork is a new repository that shares code and visibility settings with the original "upstream" repository.
Fork is a rough copy.

Other git commands

start a working area (see also: git help tutorial)
   clone      Clone a repository into a new directory
   init       Create an empty Git repository or reinitialize an existing one

work on the current change (see also: git help everyday)
   add        Add file contents to the index
   mv         Move or rename a file, a directory, or a symlink
   restore    Restore working tree files
   rm         Remove files from the working tree and from the index

examine the history and state (see also: git help revisions)
   bisect     Use binary search to find the commit that introduced a bug
   diff       Show changes between commits, commit and working tree, etc
   grep       Print lines matching a pattern
   log        Show commit logs
   show       Show various types of objects
   status     Show the working tree status

grow, mark and tweak your common history
   backfill   Download missing objects in a partial clone
   branch     List, create, or delete branches
   commit     Record changes to the repository
   merge      Join two or more development histories together
   rebase     Reapply commits on top of another base tip
   reset      Reset current HEAD to the specified state
   switch     Switch branches
   tag        Create, list, delete or verify a tag object signed with GPG

collaborate (see also: git help workflows)
   fetch      Download objects and refs from another repository
   pull       Fetch from and integrate with another repository or a local branch
   push       Update remote refs along with associated objects

'git help -a' and 'git help -g' list available subcommands and some
concept guides. See 'git help <command>' or 'git help <concept>'
to read about a specific subcommand or concept.
See 'git help git' for an overview of the system.
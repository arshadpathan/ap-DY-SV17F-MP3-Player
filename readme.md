

# DY-SV17F MP3 Player with TPA3110 MONO Aplifier

# Circuit Connections
![Circuit Connections](/Circuits/ap-DY_SV17F-mp3-player-connections.jpg?raw=true "Circuit Connections")

# Git Commands 
* Tutotial
  * https://www.youtube.com/watch?v=XX-Kct0PfFc&list=PL4cUxeGkcC9goXbgTDQ0n_4TBzOO0ocPR&index=9
    * Starting with git
      - git init [start git]
      - git add . [add all files to git]
      - git commit -m "log dicription of update"  [commit the backup point]
      - git status [Status of changies]
      - git log --oneline [display the backup log]
      - git checkout master [temp check the backup commits]
    * Branching
      - git branch feature-1 [Create the branch]
      - git branch -a [Show the Branch]
      - git checkout -b feature-1 [Load the branch]
      - git branch -D feature-1 [Delete branch]
      * Brnch Conflicts and merging
        - git checkout master [go to mater branch]
        - git merge feature-1 [merge by branch name]
    * Push to web  
        - git config --list [to get the currnet user configratuions]
        - git config --global user.name "arshadpathan"
        - git config --global user.email arshad.pathan@gmail.com
        - git config credential.username "arshadpathan"
        - login
        - git push https://github.com/arshadpathan/ap-DY-SV17F-MP3-Player master
        - Error and solving
          - Dealing with Compare and pull request while uploading project in github
            - https://www.youtube.com/watch?v=oXtwkYUVsSU
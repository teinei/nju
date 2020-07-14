clone git repo from github
```
$ git clone https://github.com/teinei/nju.git
```

dir can not push to github
```
$ git add *
$ git commit -m "first comment"
```

set global user name and email, or it will prompt you a lot
t pull error

```
$ git pull
```

There is no tracking information for the current branch.
Please specify which branch you want to merge with.
See git-pull(1) for details.
```
    git pull <remote> <branch>
```

If you wish to set tracking information for this branch you can do so with:
```
    git branch --set-upstream-to=origin/<branch> master
```

```
git branch --set-upstream-to=origin/master master
``````
$ git config --global user.name "teinei"
$ git config --global user.email "teinei@laposter.net"
```

some prompt

warning: push.default is unset; its implicit value has changed in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the traditional behavior, use:
```
  git config --global push.default matching
```

To squelch this message and adopt the new behavior now, use:
```
  git config --global push.default simple
```

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

Since Git 2.0, Git defaults to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)




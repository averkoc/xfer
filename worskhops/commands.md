
| Task                              | Command               | Examples - comments preceded by #                   |
|-----------------------------------|-----------------------|---------------------------------------------------|
| **List directory contents**           | ls                    | ls -a  #shows also hidden files (starts with .)   |
| **Make a directory**                  | mkdir                 | mkdir ~/workshops #created under home folder      |
| **Remove a directory**                | rmdir, rm –r, rm -rf  | rmdir ~/workshops #succeeds if empty else use rm  |
| **Move to a directory**               | cd                    | cd /etc                                           |
| **Create a new user**                 | adduser               | adduser student2                                  |
| Change user's password            | passwd [user]         | sudo passwd student2                              |
| **Create a new group**                | addgroup              | addgroup webmasters                               |
| **Add a user to a group**             | gpasswd -a            | gpasswd -a student2 webmasters                    |
| Add a user to a group             | usermod -a -G         |                                                   |
| **Show user's memberships in groups** | id username           | id sakari                                         |
| Remove user from a group          | gpasswd -d            | gpasswd -d student2 webmasters                    |
| Show all groups and memberships   | cat /etc/group       |                                                   |
| **Modify file permissions**           | chmod                 | chmod 755 mytext                                  |
| **Modify file permissions**           |                       | chmod u=rwx,go=rx                                 |
| Modify file permissions           |                       | chmod u-x,go-w                                    |
| Modify file permissions           |                       | chmod u+x,go+w                                    |
| **Change file ownership**             | chown user:group file | chown :course /var/coursefiles                    |
| Locate a command                  | which                 | which useradd                                     |
| Find a file by partial name       | find                  | find /etc -name \*conf                            |
| Pattern matching | grep | ls /etc \|grep -E "co?nf$"  #List conf or cnf ending files in /etc  |
| Pattern matching | grep | ls /etc \| grep -E "co{0,1}nf$"   #alternative  |
| Archive (create) | tar -czvf  | tar -czvf webpages.tz /var/www  |
| Archive (list) | tar -tzvf | tar -tzvf  webpages.tz  |
| Archive (extract) | tar -xzvf | tar -xzvf webpages.tz  #extracts to current directory  |

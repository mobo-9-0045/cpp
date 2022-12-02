echo "Please enter today date in this form : /dd/mm/yyyy : "

read date

git add .
git commit -m "${date}"

git status

git push git@github.com:mobo-9-0045/cpp.git


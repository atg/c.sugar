\b


(?#Function Name)
([a-zA-Z_][a-zA-Z0-9_]*)
\s*

(?#Beginning Bracket)
(\()

(?#Args)
.*?

(?#End Bracket)
(\))

\s*

(?#Lookarounds)
(?!;)(?:\})

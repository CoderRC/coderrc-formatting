#include <stdio.h>
#ifndef CLANGFORMATSTR
#define CLANGFORMATSTR "SortIncludes: Never"
#endif
#ifndef PSTR
#define PSTR "printf \"%s\" \"$(file=fileName.c && setup-indent \"$file\" && indent \"$file\")\""
#endif
#ifndef DEFAULTSTR
#define DEFAULTSTR "CoderRC uses setup-indent and indent on each file formatted but heard others also use the .clang-format file so created the file on the repository.\nNo options then this is printed.\nOption below prints the .clang-format file stored in the program.\n.clang-format\nOption below prints what coderrc uses for formatting.\np\n" PSTR
#endif

int
main (int argc, char **argv, char *envp[])
{
  const char *clangFormatStr = "" CLANGFORMATSTR;
  const char *pStr = "" PSTR;
  const char *defaultStr = "" DEFAULTSTR;
  char found = 0;
  int i;
  for (i = 1; i != argc; i++)
    {
      found |= argv[i][0] == '.';
      found |= argv[i][0] == 'p';
      if (argv[i][0] == '.')
	{
	  printf ("%s\n", clangFormatStr);
	}
      else if (argv[i][0] == 'p')
	{
	  printf ("%s\n", pStr);
	}
    }
  if (!found)
    {
      printf ("%s\n", defaultStr);
    }
  return 0;
}

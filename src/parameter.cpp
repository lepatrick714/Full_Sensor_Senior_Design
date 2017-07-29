while ((optArg = getopt(argc, argv, "xhi")) != EOF)
{
    switch (optArg)
    {
    case 'h':
        manifest.PrintParams(cout, manifestPath);
        break;

    case 'i':
        manifest.PrintCmdLine(cout, manifestPath);
        break;

    case 'x':
        WriteXmlFile(manifestPath, manifest);
        break;

    case '?':
    default:
        break;
    }
}

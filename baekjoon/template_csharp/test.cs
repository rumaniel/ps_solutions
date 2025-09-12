Console.WriteLine($"parameter count = {args.Length}");

if (args.Length > 0)
{

    for (int i = 0; i < args.Length; i++)
    {
        Console.WriteLine($"Arg[{i}] = [{args[i]}]");
    }
}
else
{
    while (Console.ReadLine() is string line && line.Length > 0)
    {
        Console.WriteLine(line);
    }
}


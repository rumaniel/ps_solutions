
Console.WriteLine($"parameter count = {args.Length}");

if (args.Length > 1)
{
    for (int i = 0; i < args.Length; i++)
    {
        Console.WriteLine($"Arg[{i}] = [{args[i]}]");
    }
}


// int.TryParse(args[0], out var aValue);
// int.TryParse(args[1], out var bValue);

// Console.WriteLine(aValue + bValue);
// Console.WriteLine(aValue - bValue);
// Console.WriteLine(aValue * bValue);
// Console.WriteLine(aValue / bValue);
// Console.WriteLine(aValue % bValue);

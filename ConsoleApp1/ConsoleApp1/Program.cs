using System;
using System.Collections.Generic;
using System.Linq;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Insira a frase: ");
            string frase = Console.ReadLine();
            frase = frase.ToUpper().Replace(".", string.Empty);
            frase = frase.Replace(",", string.Empty);

            string[] palavras = frase.Split(" ");

            var dicionario = new Dictionary<string, int>();

            foreach (var palavra in palavras)
            {
                if (!dicionario.ContainsKey(palavra))
                    dicionario.Add(palavra, 0);

                dicionario[palavra]++;
            }

            var dicionarioOrdenado = dicionario.OrderByDescending(x => x.Value);
            foreach (var x in dicionarioOrdenado)
            {
                Console.WriteLine("palavra: \"" + x.Key + "\" frequencia: " + x.Value);
            }
        }
    }
}

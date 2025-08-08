 
using System.Text;

namespace common_prefix
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] strs = new[] { "interview", "internet", "internal", "interval" };

            Console.WriteLine(new Solution().LongestCommonPrefix(strs));
        }
    }
    public class Solution
    {
        private string commonPrefix(string s1, string s2)
        {
            StringBuilder common = new StringBuilder();
            int s1L = s1.Length;
            int s2L = s2.Length;
            int shortestLength = (s1L <= s2L) ? s1L : s2L;

            if (s1 == s2)
                return s1;

            for (int i = 0; i < shortestLength; i++)
            {
                if (s1[i] == s2[i])
                {
                    common = common.Append(s1[i]);
                }
                else
                {
                    break;
                }
            }
            return common.ToString();
        }
        public string LongestCommonPrefix(string[] strs)
        {
            string comm = strs[0];
            for(int i = 0; i < strs.Length - 1; i++)
            {
                comm = commonPrefix(strs[i], strs[i + 1]);
            }
            return comm;
        }
    }
}

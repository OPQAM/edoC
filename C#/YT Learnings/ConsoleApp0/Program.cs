using System.Runtime.CompilerServices;

namespace ConsoleApp0
{
    /// <summary>
    /// This is the main Program Class
    /// </summary>
    /// 
    internal class Program // BELOW WE ARE INSIDE THE CLASS
    {

        // Note: if I place nothing behind my variable, it is assumed to be 'private'. Meaning it can only be accessed inside the class. So,
        // The two below are basically the same:
        private byte myByte1;
        byte mybyte2;

        // protected variables can be used in the class and 'subsidiaries'
        protected byte myByte3;

        // public variables can be used anywhere. no access restrictions
        public byte myByte4;

        /// <summary>
        /// The entry point for the application
        /// </summary>
        /// <param name="args">Command-line arguments.</param>
        static void Main(string[] args)  // BELOW WE ARE INSIDE THE FUNCTION
        {
            // variables
            byte myByte = 255;          // 8 bit
            char myChar = 'c';          // 16 bits
            short myShort = 65;         // 16 bits
            int myInt = -2147483647;    // 32 bits (positive or negative - loss of possible positive values. Part of 32bit for the sign)
            uint myUInt = 4294967294;   // 32 bits (has twice the positives - since it has all positives (unsigned))
            float myFloat = 1.2345F;    // 32 bits (we need to add an 'f' or it will be a double)
            double myDouble = 1.2345;   // 64 bits
            decimal mydecimal = (decimal)1.4444; // 128 bits (we added the 'decimal', otherwise it will try to cast it to a double)

            string myString = "Hello World!";  // stricly a class, not a variable

            bool myBool = false;

        }
    }
    class classB : Program // by doing this, adding : Program, we are inheriting stuff from the class Program, so its protected elements will be usable here (i.e myByte3)
    {
        public classB() // to create this part I typed 'ctor' and pressed enter
        {
            // We can't access neither myByte1 or 2. Those a re private within the Program class
            //

            this.myByte3 = 1; // we can use this here. It's protected. But myByte 1 and 2 and private, so unnusable
            this.myByte4 = 2; // same. It's public.

        }
    }
    
}
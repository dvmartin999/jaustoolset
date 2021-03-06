/***********           LICENSE HEADER   *******************************
JAUS Tool Set
Copyright (c)  2010, United States Government
All rights reserved.

Redistribution and use in source and binary forms, with or without 
modification, are permitted provided that the following conditions are met:

       Redistributions of source code must retain the above copyright notice, 
this list of conditions and the following disclaimer.

       Redistributions in binary form must reproduce the above copyright 
notice, this list of conditions and the following disclaimer in the 
documentation and/or other materials provided with the distribution.

       Neither the name of the United States Government nor the names of 
its contributors may be used to endorse or promote products derived from 
this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE 
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
POSSIBILITY OF SUCH DAMAGE.
*********************  END OF LICENSE ***********************************/
using System;

/**
 * <summary>The parent class for all generated messages.</summary>
 * <author>Gina Nearing</author>
 * <date>4/1/11</date>
 */
namespace JTS
{
	public abstract class Message
	{
		protected bool m_IsCommand;

        /// <summary>
        /// Each message contains an ID, this method retrieves it.
        /// </summary>
        /// <returns>The default message ID</returns>        
		public abstract ushort getID();

        /// <summary>
        /// Checks the flag for if the message is a command.
        /// </summary>
        /// <returns>if the message is a command.</returns>
		public bool isCommand()
		{
			return m_IsCommand;
		}

        /// <summary>
        /// The size is the number of bytes the event
        /// will take in the buffer.
        /// </summary>
        /// <returns>the number of bytes this event contains.</returns>
		public virtual int getSize()
		{
			return 0;
		}

        /// <summary>
        /// Encoding function to be overridden by children.
        /// </summary>
        /// <param name="bytes">The array of bytes to contain the data.</param>
        /// <param name="pos">The position in the array to start adding data.</param>
		public virtual void encode(byte[] bytes, int pos)
		{
            Console.WriteLine("Incorrect encode being used.");
		}

        /// <summary>
        /// Decoding function to be overridden by children.
        /// </summary>
        /// <param name="bytes">The array of bytes containing data to be retrieved.</param>
        /// <param name="pos">The position in the array to begin retrieving data.</param>
		public virtual void decode(byte[] bytes, int pos)
		{
			
		}
		
	}
}

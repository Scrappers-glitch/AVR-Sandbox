/*
 * BSD 3-Clause License
 *
 * Copyright (c) 2022, Scrappers Team, The AVR-Sandbox Project, Serial4j API.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
package com.serial4j.example;

import java.io.FileOutputStream;
import java.io.IOException;
import java.io.FileNotFoundException;
import com.serial4j.core.serial.BaudRate;
import com.serial4j.core.serial.SerialPort;
import com.serial4j.core.serial.throwable.PermissionDeniedException;
import com.serial4j.core.serial.throwable.BrokenPipeException;
import com.serial4j.core.serial.throwable.NoSuchDeviceException;
import com.serial4j.core.serial.throwable.InvalidPortException;
import com.serial4j.core.serial.throwable.NoResultException;
import com.serial4j.core.serial.throwable.OperationFailedException;

public class HelloSerial4J {
	static SerialPort serial = new SerialPort("/dev/ttyUSB0");		

	public static void main(String args[]) throws NoSuchDeviceException,
												  PermissionDeniedException,
												  BrokenPipeException,
												  InvalidPortException,
												  NoResultException,
												  OperationFailedException,
												  FileNotFoundException {


		serial.setNativeLoggingDisabled();
		serial.setSerial4jLoggingEnabled(true);
		serial.openPort();
		FileOutputStream fis = new FileOutputStream("/dev/ttyUSB0");
		if (serial.getPortDescriptor() > 0) {
			System.out.println("Port Opened with "+serial.getPortDescriptor());
		}
		serial.initTermios();
		serial.setBaudRate(BaudRate.B57600);
		serial.fetchSerialPorts();
		new Thread(new Runnable() {
			public void run() {
				while(true) {
					while (serial.readData() > 0) {
						if ((char) serial.getReadBuffer() > 0) 
						System.out.println((char) serial.getReadBuffer());
					}
				}			
			}
		}).start();
		try {
			Thread.sleep(2000);
			serial.getOutputStream().write('A');
			Thread.sleep(300);
			System.out.println(serial.closePort());
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}


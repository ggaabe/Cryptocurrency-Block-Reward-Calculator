//
//  main.cpp
//  block calculator
//
//  Created by Gabriel Garrett on 1/30/14.
//  Copyright (c) 2014 Gabriel Garrett. All rights reserved.
//  https://github.com/ggaabe/Cryptocurrency-Block-Reward-Calculator
//  https://github.com/ggaabe

#include <iostream>

using namespace std;

int main()

{
    
	double calcBlock;
	double reduction;
	double reductionOccur;
	int currentBlock;
    
	cout << "Enter number of coins per block originally:"
    << endl;
    
	cin >> calcBlock;
    
	cout << "Enter the current block number : ";
	cin >> currentBlock;
	cout << endl;
    
	cout << "Enter how often the block reward reduces: ";
	cin >> reductionOccur;
	cout << endl;
    
	cout << "Enter the percentage rate the reward is reduced every reward reduction period: ";
	cin >> reduction;
	cout << endl;
    
	int times = (currentBlock / reductionOccur);
    
	for (int i = 0; i <= times; i++)
        
	{
        
		double newblock = calcBlock * (1 - (reduction/100));
		//cout << (reduction / 100);
		calcBlock = newblock;
	}
    
	cout << "Current block reward is: " << calcBlock << " per block.";
	cout << endl;
	system("pause");
    
	return 0;
    
}

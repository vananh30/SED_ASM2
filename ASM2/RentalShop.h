#pragma once
#include "Customer.h"
#include "Item.h"
#include <vector>
#include<iostream>
#include<string>
#include<fstream>
#include"MovieRecords.h"
#include"DVDs.h"
#include"Games.h"
#include "Customer.h"
#include "VipAccount.h"
#include "GuestAccount.h"
#include "RegularAccount.h"
class RentalShop
{
private:
	//vector<Customer*> customers;
	vector<Item*> items;
	vector<Customer*> customers;
	/*VALIDATE INPUT FILE*/
	static bool checkNullField(string field);
	static bool checkIdItem(string id, vector<string>& IDs);
	static bool checkRentalType(string rentalType);
	static void checkLoan(string loan, int& numLoanType, string& loanType);
	static void checkFee(string fee, bool& isValid);
	/*Read one line of the Items.txt file to check which rental type the line is*/
	static void readOneItemInItemFile(ifstream& filein, Item* item, string& genre, vector<string>& IDs);
	static int checkTypeItem(Item* item);
	static void readFileItem(ifstream& filein, vector<Item*>& items);
	static void readOneCustomerInCustomerFile(ifstream& filein, Customer* customer);
	static void readFileCustomer(ifstream& filein, vector<Customer*>& customers);
public:
	
	RentalShop(ifstream& filein, ifstream& fileinCustomer);
	~RentalShop();
	/*getter*/
	vector<Customer*> getCustomers();
	vector<Item*> getItems();
	/*setter*/
	void setCustomers(vector<Customer*> customers);
	void setItems(vector<Item*> items);
	void printAll();



	/*delete vector pointer*/
	void deletePointerVector();
	
	
};


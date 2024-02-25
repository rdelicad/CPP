#include "Account.hpp"
#include <iostream>


/* //public
static int getNbAccounts( void )
static int getTotalAmount( void )
static int getNbDeposits( void )
static int getNbWithdrawals( void )
static void displayAccountsInfos( void )

Account( int initial_deposit )

void makeDeposit( int deposit )
bool makeWithdrawal( int withdrawal )
int checkAmount( void ) const
void displayStatus( void ) const

//private
 static void _displayTimestamp( void )
Account();
 //variables */
//Inicializamos variables estaticas
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//Inicializacion del constructor con argumentos
Account::Account( int initial_deposit )
	: _accountIndex(_nbAccounts),
	  _amount(_totalAmount),
	  _nbDeposits(0),
	  _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ":created" << std::endl;
}
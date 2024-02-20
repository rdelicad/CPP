// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {

public:

    // Define un alias para el tipo Account
    typedef Account t;

    // Métodos estáticos para obtener información sobre todas las cuentas
    static int getNbAccounts( void ); // Obtiene el número de cuentas
    static int getTotalAmount( void ); // Obtiene la cantidad total en todas las cuentas
    static int getNbDeposits( void ); // Obtiene el número total de depósitos realizados
    static int getNbWithdrawals( void ); // Obtiene el número total de retiros realizados
    static void displayAccountsInfos( void ); // Muestra la información de todas las cuentas

    // Constructor y destructor
    Account( int initial_deposit ); // Constructor que toma un depósito inicial
    ~Account( void ); // Destructor

    // Métodos para interactuar con una cuenta individual
    void makeDeposit( int deposit ); // Realiza un depósito
    bool makeWithdrawal( int withdrawal ); // Realiza un retiro, devuelve true si fue exitoso, false si no
    int checkAmount( void ) const; // Comprueba la cantidad de dinero en la cuenta
    void displayStatus( void ) const; // Muestra el estado de la cuenta

private:

    // Variables estáticas para almacenar información sobre todas las cuentas
    static int _nbAccounts; // Número de cuentas
    static int _totalAmount; // Cantidad total en todas las cuentas
    static int _totalNbDeposits; // Número total de depósitos realizados
    static int _totalNbWithdrawals; // Número total de retiros realizados

    // Método estático para mostrar la hora actual
    static void _displayTimestamp( void );

    // Variables para almacenar información sobre una cuenta individual
    int _accountIndex; // Índice de la cuenta
    int _amount; // Cantidad de dinero en la cuenta
    int _nbDeposits; // Número de depósitos realizados en la cuenta
    int _nbWithdrawals; // Número de retiros realizados de la cuenta

    // Constructor privado sin argumentos
    Account( void );

};

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */

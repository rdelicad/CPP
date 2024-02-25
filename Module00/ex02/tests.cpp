// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"

int main( void ) {

    // Define un alias (account_t) para el vector de la clase <account::t>
    typedef std::vector<Account::t> accounts_t;
    // Define un alias (ints_t) para un vector de <int>
    typedef std::vector<int> ints_t; 
    // Define un alias para dos iteradores, uno para cuentas(accounts_t) y otro para depositos y retiros(ints_t)
    typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

    // ? Creación del vector de cuentas
    int const amounts[] = { 42, 54, 957, 432, 1234, 0, 754, 16576 }; //array de int con montos inciales
    size_t const amounts_size( sizeof(amounts) / sizeof(int) ); //los mete en el vector
    // crea una instancia de accounts_t llamada accounts
    // amounts -> array o puntero al primer elemento del array
    // amounts + amounts_size -> numero de elementos del array
    accounts_t accounts( amounts, amounts + amounts_size );
    // creacion de iterador (acc_begin) que apunta al primer elemento
    accounts_t::iterator acc_begin = accounts.begin();
    // creacion de iterador (acc_end) que apunta al siguiente del ultimo elemento
    accounts_t::iterator acc_end = accounts.end();

    // ? Creación del vector de depósitos
    int const d[] = { 5, 765, 564, 2, 87, 23, 9, 20 };
    size_t const d_size( sizeof(d) / sizeof(int) );
    ints_t deposits( d, d + d_size );
    ints_t::iterator dep_begin = deposits.begin();
    ints_t::iterator dep_end = deposits.end();

    // ? Creación del vector de retiros
    int const w[] = { 321, 34, 657, 4, 76, 275, 657, 7654 };
    size_t const w_size( sizeof(w) / sizeof(int) );
    ints_t withdrawals( w, w + w_size );
    ints_t::iterator wit_begin = withdrawals.begin();
    ints_t::iterator wit_end = withdrawals.end();

    /**
     * *  Mostrar información de todas las cuentas, incluyendo el número total de cuentas, saldo, depositos
     * * y retiros. Al principio como no se realizan ni deposito ni retiros, los valores son cero
    */
    Account::displayAccountsInfos();

    // Muestra el estado de cada cuenta sus depositos y retiros
    std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

    // Realizar depósitos en cada cuenta
    for ( acc_int_t it( acc_begin, dep_begin );
          it.first != acc_end && it.second != dep_end;
          ++(it.first), ++(it.second) ) {

        (*(it.first)).makeDeposit( *(it.second) );
    }

    /**
     * * Mostrar información de todas las cuentas después de los depósitos, depositos
    */
    Account::displayAccountsInfos();

    // Mostrar el estado de cada cuenta después de los depósitos
    std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

    // Realizar retiros en cada cuenta
    for ( acc_int_t it( acc_begin, wit_begin );
          it.first != acc_end && it.second != wit_end;
          ++(it.first), ++(it.second) ) {

        (*(it.first)).makeWithdrawal( *(it.second) );
    }

    /**
     * * Mostrar información de todas las cuentas después de los retiros, las cierra
    */
    Account::displayAccountsInfos();

    // Mostrar el estado de cada cuenta después de los retiros
    std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

    return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //

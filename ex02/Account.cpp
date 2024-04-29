#include "Account.hpp"
#include <iostream>

Account::Account(){}

Account::Account (int initial_deposit ){}

Account::~Account() {
    // Código de limpieza u otras tareas necesarias al destruir un objeto de Account
    // Por ejemplo, liberar memoria asignada dinámicamente o cerrar recursos
}

int	Account::getNbAccounts()
{
    return(_nbAccounts);
}
int	Account::getTotalAmount()
{
    return (_totalAmount);
}
int	Account::getNbDeposits()
{
    return(_totalNbDeposits);
}
int	Account::getNbWithdrawals()
{
    return(_totalNbWithdrawals);
}
static void	Account::displayAccountsInfos()
{
    std::cout << "nbAccounts" << _nbAccounts << std::endl;
    std::cout << "totalAmount" << _totalAmount << std::endl;
    std::cout << "totalNbDeposits" << _totalNbDeposits << std::endl;
    std::cout << "totalNbWithdrawals" << _totalNbWithdrawals << std::endl;
}
static void Account::_displayTimestamp()
{
    std::cout << "_accountIndex" << _accountIndex << std::endl;
    std::cout << "amount" << _amount << std::endl;
    std::cout << "totalNbDeposits" << _totanbDeposits<< std::endl;
    std::cout << "nbWithdrawals" << _nbWithdrawals << std::endl;
}

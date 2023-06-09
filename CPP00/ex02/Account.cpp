// Copyright @bigpel66

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//함수호출 후 바로 스트림에 << 로 출력할 수 있음.
static std::ostream& _summary(int index, int amount, bool prev)
{
    return std::cout << "index:" << index << (prev ? ";p_amount:" : ";amount:") << amount;
}

//각 프라이빗 변수들을 반환하여주는 함수들
int Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}

//어카운트의 정보를 모두 보여주는 함수
void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts;
    std::cout << ";total:" << Account::_totalAmount;
    std::cout << ";deposits:" << Account::_totalNbDeposits;
    std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

//생성자, _accountIndex와 _amount, _nbDeposits, _nbWithdrawals를 클레스 생성과 함께 초기화.
//생성과 함께 생성 요약을 출력
Account::Account(int initial_deposit) : _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    Account::_displayTimestamp();
    _summary(_accountIndex, _amount, false) << ";created" << std::endl;
    Account::_totalAmount += initial_deposit;
}

//소멸자, 소멸과 함께 closed요약을 출력
Account::~Account(void)
{
    Account::_displayTimestamp();
    _summary(_accountIndex, _amount, false) << ";closed" << std::endl;
}

//입금과 내용 출력
void Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    _summary(_accountIndex, _amount, true)
    << ";deposit:" << deposit
    << ";amount:" << _amount + deposit
    << ";nb_deposits:" << ++_nbDeposits << std::endl;
    _amount += deposit;
    Account::_totalAmount += deposit;
    ++Account::_totalNbDeposits;
}

//출금과 내용 출력
bool Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    _summary(_accountIndex, _amount, true);
    
    //잔금이 출금할 금액보다 적으면 출금 거부
    if (_amount - withdrawal < 0)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }

    //출금 진행
    std::cout << ";withdrawal:" << withdrawal
    << ";amount:" << _amount - withdrawal
    << ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
    _amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    ++Account::_totalNbWithdrawals;
    return true;
}

//잔금 반환
int Account::checkAmount(void) const
{
    return _amount;
}

//스테이터스 출력
void Account::displayStatus(void) const 
{
    Account::_displayTimestamp();
    _summary(_accountIndex, _amount, false)
    << ";deposits:" << _nbDeposits
    << ";withdrawals:" << _nbWithdrawals << std::endl;
}

//시간 계산 및 출력
void Account::_displayTimestamp(void) 
{
    time_t	t_stamp;
	char	buff[16];

	time(&t_stamp);
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&t_stamp));
	std::cout << "[" << buff << "]" << " ";
}

//호출 될 일이 없음(프라이빗 초기화 필수)
Account::Account(void)
{
    std::cout << "private member" << std::endl;
}
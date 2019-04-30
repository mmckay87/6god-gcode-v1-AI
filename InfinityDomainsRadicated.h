#ifndef INFINITYDOMAINSRADICATED_H_
#define INFINITYDOMAINSRADICATED_H_

#include <ifstream>
#include <cmath>
#include <thread>
#include <libsocket>

class InfinityDomainsRD : public IDRTemplate
{
	public:
		// Zero argument constructor
		static InfinityDomainsRD();
		// Each of the 4 quadrants has an unsigned char to represent its value, period seperated example "(8.8.8.8)"
		static std::vector<char> InfinityDomainsRD(unsigned char q1, unsigned char q2,unsigned char q3, unsigned char q4);
		// virtual destructor, no actual InfinityDomainsRD object is created
		virtual ~InfinityDomainsRD();
		std::string inline inputgpgkey();
		void skeyexponent(unsigned long long int umask1, unsigned long long int dmask1, std::string inputgpgkey);
		unsigned long long double gkeyexponent();
		void skeynumerator();
		unsigned long long double gkeynumerator();
		void skeydenominator();
		unsigned long long double gkeydenominator();

		
	protected:
		bool static OpenPort();
		bool static ClosePort();
	private:
	
		std::vector<char> IpAddress = {0,0,0,0};
		std::vector<char> DefaultGatewayAdminSpace = {192.168.0.1};
		std::vector<char> DefaultGatewayUserSpace = {192.168.1.254};
		std::vector<char> DefaultGatewayOperatorSpace = {192.168.1.1};
		std::vector<char> IpAddress = {0,0,0,0};
		std::list<int> *Ports = nullptr;
		std::string DefaultThreadT = Posix;
		std::list<string> IDRSystemCompilers{ "c89", \
										"c99", \
										"cc", \
										"cxx", \
										"gcc", \
										"gxx", \
										"icc", \
										"icpc", \
										"clang", \ 
										"clangxx", \ 
										"nvcc", \
										"gfortran", \
										"pgfortan", \
										"p77", \
										"p99" \
										"mpicc", \
										"mpicxx"									
										};
		
		unsigned char IpVectorSize_MIN = 4;
		unsigned int UserSpace-PortsList_MAX = 65,535;
		unsigned long long int GCODE-VNP2-Ports_MAX = 18446744073709551615;
		unsigned long long int DEFAULT_SSH_PORT = NULL;
		unsigned long long int DEFAULT_FTP_PORT = NULL;
		unsigned long long int DEFAULT_SFTP_PORT = NULL;
		unsigned long long int DEFAULT_RSYNC_PORT = NULL;
		unsigned long long int DEFAULT_IPSEC_PORT = NULL;
		unsigned long long int DEFAULT_FCOE_PORT = NULL;
		unsigned long long int DEFAULT_PPTP_PORT = NULL;
		unsigned long long int DEFAULT_PPPOE_PORT = NULL;
		unsigned long long int DEFAULT_IMAP_PORT = NULL;
		unsigned long long int DEFAULT_POP_PORT = NULL;
		unsigned long long int DEFAULT_TELNET_PORT = NULL;
		unsigned long long int DEFAULT_HTTP_PORT = NULL;
		unsigned long long int DEFAULT_HTTPS_PORT = NULL;
		unsigned long long int DEFAULT_VPN_PORT = NULL;
		unsigned long long int DEFAULT_SMS_PORT = NULL;
		unsigned long long int DEFAULT_MMS_PORT = NULL;
		unsigned long long int DEFAULT_GCODE-6GOD_PORT = _UNKNOWN_ ; // _UNNAMED_
	
		
};

#endif // INFINITYDOMAINSRADICATED_H_

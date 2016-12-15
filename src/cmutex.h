/*
	Copyright (C) 2003-2005 Daniel Muller, dan at verliba dot cz
	Copyright (C) 2006-2017 Verlihub Team, info at verlihub dot net

	Verlihub is free software; You can redistribute it
	and modify it under the terms of the GNU General
	Public License as published by the Free Software
	Foundation, either version 3 of the license, or at
	your option any later version.

	Verlihub is distributed in the hope that it will be
	useful, but without any warranty, without even the
	implied warranty of merchantability or fitness for
	a particular purpose. See the GNU General Public
	License for more details.

	Please see http://www.gnu.org/licenses/ for a copy
	of the GNU General Public License.
*/

#ifndef NTHREADSCMUTEX_H
#define NTHREADSCMUTEX_H
#include <pthread.h>

namespace nVerliHub {
	namespace nThread {

/** mutual lock

@author Daniel Muller
*/
class cMutex
{
public:
	cMutex();
	~cMutex();
	int Lock();
	int UnLock();
	bool TryLock();
	void ClearError();
	const char* GetError();
private:
	void PrintError(const char *function);
	pthread_mutex_t mMutex;
	int mLastError;
};

	}; // namespace nUtils
}; // namespace nVerliHub

#endif

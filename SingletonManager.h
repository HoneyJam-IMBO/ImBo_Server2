#pragma once

/*
---------------------------------------------------------------------------------------
�̱��� ���ø� Ŭ����
---------------------------------------------------------------------------------------
*/

template <typename T>
class CSingletonManager
{
protected:
	static T* m_Instance;

	CSingletonManager(){}
	virtual ~CSingletonManager(){};

public:
	static T* GetInstance()
	{
		if (m_Instance == nullptr)
			return m_Instance = new T;
		return m_Instance;
	}

	void ReleseInstance()
	{
		if (m_Instance)
		{
			delete m_Instance;
			m_Instance = nullptr;
		}
	}

	// �߻� Ŭ���� ����
	virtual void InitializeManager() = 0;
	//virtual void InitializeManager() {};
};

// �̱��� �ν��Ͻ� �ʱ�ȭ
template <typename T>
T*	CSingletonManager<T>::m_Instance = 0;

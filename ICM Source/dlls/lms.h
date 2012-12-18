class CRulesLMS : public CHalfLifeMultiplay
{
public:
	virtual void CheckLMS( );
	virtual void Think ( );
	virtual void ResetRound( );
	virtual void EndLife( );
	virtual const char *GetGameDescription( void ) { return "dei mudder"; }
	//virtual void ClientDisconnected( edict_t *pClient );
	//virtual void PlayerKilled( CBasePlayer *pVictim, entvars_t *pKiller, entvars_t *pInflictor );
protected:
	float m_flWaitResetRound;
	float m_flWaitEndLife;
	float m_flEndLife;
};

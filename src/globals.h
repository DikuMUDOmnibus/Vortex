/*typedef void DO_FUN     args( ( CHAR_DATA *ch, char *argument ) );
typedef bool SPEC_FUN   args( ( CHAR_DATA *ch ) );
typedef void SPELL_FUN  args( ( int sn, int level, CHAR_DATA *ch, void *vo ) );

#if defined(TRADITIONAL)
#define const
#define args( list )                    ( )
#define DECLARE_DO_FUN( fun )           void fun( )
#define DECLARE_SPEC_FUN( fun )         bool fun( )
#define DECLARE_SPELL_FUN( fun )        void fun( )
#else
#define args( list )                    list
#define DECLARE_DO_FUN( fun )           DO_FUN    fun
#define DECLARE_SPEC_FUN( fun )         SPEC_FUN  fun
#define DECLARE_SPELL_FUN( fun )        SPELL_FUN fun
#endif
*/
/*
 * Command functions.
 * Defined in act_*.c (mostly).
 */

void perfect_diamond(CHAR_DATA *ch);
DECLARE_DO_FUN( do_remort       );
DECLARE_DO_FUN( do_tune         );
DECLARE_DO_FUN( do_radio        );
DECLARE_DO_FUN( do_setwho       );
DECLARE_DO_FUN( do_delimmortal  );
DECLARE_DO_FUN( do_makeimmortal );
DECLARE_DO_FUN( do_setimmortal  );
DECLARE_DO_FUN( do_checkwizlist );
DECLARE_DO_FUN( do_savewizlist  );
DECLARE_DO_FUN( do_entangle     );
DECLARE_DO_FUN( do_thornblast	);
DECLARE_DO_FUN( do_frighten     );
DECLARE_DO_FUN( do_firebolt     );
DECLARE_DO_FUN( do_rainfire     );
DECLARE_DO_FUN( do_cleanse      );
DECLARE_DO_FUN( do_fanatisism   );
DECLARE_DO_FUN( do_flood        );
DECLARE_DO_FUN( do_stasis       );
DECLARE_DO_FUN( do_whirlwind    );
DECLARE_DO_FUN( do_fly          );
DECLARE_DO_FUN( do_heal         );
DECLARE_DO_FUN( do_banish       );
DECLARE_DO_FUN( do_godsbless    );
DECLARE_DO_FUN( do_summon       );
DECLARE_DO_FUN( do_curse        );
DECLARE_DO_FUN( do_defile       );
DECLARE_DO_FUN( do_firetrap     );
DECLARE_DO_FUN( do_ice          );
DECLARE_DO_FUN( do_delete       );
DECLARE_DO_FUN( do_rage         );
DECLARE_DO_FUN( do_claw         );
DECLARE_DO_FUN( do_atravel      );
DECLARE_DO_FUN( do_anum         );
DECLARE_DO_FUN( do_checkvnum    );
DECLARE_DO_FUN( do_parasite     );
DECLARE_DO_FUN( do_calm         );
DECLARE_DO_FUN( do_balance      );
DECLARE_DO_FUN( do_strike       );
DECLARE_DO_FUN( do_givelife     );
DECLARE_DO_FUN( do_frighten     );
DECLARE_DO_FUN( do_shadowplane  );
DECLARE_DO_FUN( do_slow         );
DECLARE_DO_FUN( do_temp_stasis  );
DECLARE_DO_FUN( do_dshift       );
DECLARE_DO_FUN( do_gate         );
DECLARE_DO_FUN( do_travel       );
DECLARE_DO_FUN( do_bodyslide    );
DECLARE_DO_FUN( do_poison       );
DECLARE_DO_FUN( do_burrow       );
DECLARE_DO_FUN( do_scry         );
DECLARE_DO_FUN( do_arcanic_gate );
DECLARE_DO_FUN( do_arcanic_might );
DECLARE_DO_FUN( do_syphon       );
DECLARE_DO_FUN( do_holdperson   );
DECLARE_DO_FUN( do_shatter      );
DECLARE_DO_FUN( do_essence      );
DECLARE_DO_FUN( do_life_restore );
DECLARE_DO_FUN( do_roottravel   );
/* Kale's commands stuff */
DECLARE_DO_FUN( do_setrace      );
DECLARE_DO_FUN( do_showrace     );
DECLARE_DO_FUN( do_show_clan    );
DECLARE_DO_FUN( do_spyclan      );
DECLARE_DO_FUN( do_setclan      );
DECLARE_DO_FUN( do_induct       );
DECLARE_DO_FUN( do_clan_attack  );
DECLARE_DO_FUN( do_setlog	);
DECLARE_DO_FUN(	do_setexit	);
DECLARE_DO_FUN( do_setpower     );
DECLARE_DO_FUN( do_setclass     );
DECLARE_DO_FUN( do_show_class_stats);
DECLARE_DO_FUN( do_save_class_stats);
DECLARE_DO_FUN( do_quicken	);
DECLARE_DO_FUN( do_make_eq	);
DECLARE_DO_FUN( do_commit       );
DECLARE_DO_FUN( do_one_ring	);
DECLARE_DO_FUN( do_make_ring	);
DECLARE_DO_FUN( do_repent       );
DECLARE_DO_FUN( do_pray		);
DECLARE_DO_FUN( do_savecommands );
DECLARE_DO_FUN( do_tag          );
DECLARE_DO_FUN( do_paintball    );
DECLARE_DO_FUN( do_setpaintball );
DECLARE_DO_FUN( do_affect	);
DECLARE_DO_FUN(	do_exits	);
DECLARE_DO_FUN( do_redeem       );
DECLARE_DO_FUN( do_detox     );
DECLARE_DO_FUN( check_combat    );
DECLARE_DO_FUN( do_udc		);
DECLARE_DO_FUN( do_refresh      );
DECLARE_DO_FUN( do_vt102        );
DECLARE_DO_FUN( do_retrn        );
DECLARE_DO_FUN( do_forge        );
DECLARE_DO_FUN( do_polish       );
DECLARE_DO_FUN( do_inlay        );
DECLARE_DO_FUN( do_rename       );
DECLARE_DO_FUN( do_cutgem       );
DECLARE_DO_FUN( do_ignore	);
DECLARE_DO_FUN( do_unignore	);
DECLARE_DO_FUN( do_omni		);
DECLARE_DO_FUN( do_expmult      );
DECLARE_DO_FUN( do_testform	);
DECLARE_DO_FUN( do_promote	);
DECLARE_DO_FUN( do_tick		);
DECLARE_DO_FUN( do_form		);
DECLARE_DO_FUN( do_resetarea	);
DECLARE_DO_FUN( do_racestats	);
DECLARE_DO_FUN( do_configure	);
DECLARE_DO_FUN( do_stealsoul	);
DECLARE_DO_FUN( do_evolve       );
DECLARE_DO_FUN( do_primal_urge  );
DECLARE_DO_FUN( do_aclaw        );
DECLARE_DO_FUN( do_atail        );
DECLARE_DO_FUN( do_pain         );
DECLARE_DO_FUN( do_slash        );
DECLARE_DO_FUN( do_taillash     );
DECLARE_DO_FUN( do_infect       );
DECLARE_DO_FUN( do_atransport   );
DECLARE_DO_FUN( do_cloak        );
DECLARE_DO_FUN( do_metamorph    );
DECLARE_DO_FUN( do_bash         );
DECLARE_DO_FUN( do_spit         );
DECLARE_DO_FUN( do_explode      );
/* Kline Wuz Here */
DECLARE_DO_FUN( do_get_danger	);
DECLARE_DO_FUN( do_save_socials );
DECLARE_DO_FUN( do_display_social);
DECLARE_DO_FUN( do_edit_social	);
DECLARE_DO_FUN( do_delete_social);
DECLARE_DO_FUN( do_create_social);
DECLARE_DO_FUN( do_beep		);
DECLARE_DO_FUN( do_readaura	);
DECLARE_DO_FUN( do_class_config	);
DECLARE_DO_FUN( do_fixpoly	);
DECLARE_DO_FUN( do_mxp		);
DECLARE_DO_FUN( do_output_socials);
DECLARE_DO_FUN( do_reload_lib	);
DECLARE_DO_FUN( do_dpconv	);
DECLARE_DO_FUN( do_clan_recall  );
DECLARE_DO_FUN( do_testwho      );
DECLARE_DO_FUN( do_testscore	);
DECLARE_DO_FUN( do_autoclass	);
DECLARE_DO_FUN( do_ethereal     );
DECLARE_DO_FUN( do_stun		);
DECLARE_DO_FUN( do_colscale	);
DECLARE_DO_FUN( do_delevel	);
DECLARE_DO_FUN( do_2who		);
DECLARE_DO_FUN( do_final_blow   );
DECLARE_DO_FUN( do_askills	);
DECLARE_DO_FUN( do_newhelp	);
DECLARE_DO_FUN( do_rolldirt	);
DECLARE_DO_FUN( do_smother	);
DECLARE_DO_FUN( do_apconv	);
DECLARE_DO_FUN( do_danger_rank	);
DECLARE_DO_FUN( do_kline_fun	);
DECLARE_DO_FUN( do_new_score	);
DECLARE_DO_FUN( do_pipe		);
DECLARE_DO_FUN( do_info		);
DECLARE_DO_FUN( do_deathmatch	);
DECLARE_DO_FUN( do_regroup	);
DECLARE_DO_FUN( do_group_config );
DECLARE_DO_FUN( do_disciplines	);
DECLARE_DO_FUN( do_knockup	);
DECLARE_DO_FUN( do_autostance	);
DECLARE_DO_FUN( do_morph_check	);
/* Kline Ran Away! */
/* Vampires */
DECLARE_DO_FUN( do_vamppowers	);
DECLARE_DO_FUN( do_vamp_conceal	);
DECLARE_DO_FUN( do_sharpen	);
DECLARE_DO_FUN( do_gourge	);
DECLARE_DO_FUN( do_bloodwater	);
DECLARE_DO_FUN( do_spew		);
DECLARE_DO_FUN( do_vampdarkness	);
DECLARE_DO_FUN( do_dragonform	);
DECLARE_DO_FUN( do_objform	);
DECLARE_DO_FUN( do_baal		);
DECLARE_DO_FUN( do_inferno	);
DECLARE_DO_FUN( do_zombie	);
DECLARE_DO_FUN( do_fleshcraft	);
DECLARE_DO_FUN( do_entrance	);
DECLARE_DO_FUN( do_tendrils	);
DECLARE_DO_FUN( do_lamprey	);
DECLARE_DO_FUN( do_assassinate	);
DECLARE_DO_FUN( do_mindblast	);
DECLARE_DO_FUN( do_tongue	);
DECLARE_DO_FUN( do_vamp_gate	);
DECLARE_DO_FUN( do_pigeon	);
DECLARE_DO_FUN( do_embrace	);
DECLARE_DO_FUN( do_decay	);
DECLARE_DO_FUN( do_infirmity	);
DECLARE_DO_FUN( do_guardian	);
DECLARE_DO_FUN( do_servant	);
DECLARE_DO_FUN( do_vamp_spit	);
DECLARE_DO_FUN( do_vamp_summon	);
DECLARE_DO_FUN( do_scales	);
DECLARE_DO_FUN( do_cserpent	);
DECLARE_DO_FUN( do_scream	);
DECLARE_DO_FUN( do_bloodrod	);
DECLARE_DO_FUN( do_shadowgaze	);
DECLARE_DO_FUN( do_share	);
DECLARE_DO_FUN( do_frenzy	);
DECLARE_DO_FUN( do_drain	);
DECLARE_DO_FUN( do_flamehands	);
DECLARE_DO_FUN( do_shade	);
DECLARE_DO_FUN( do_bonemod	);
DECLARE_DO_FUN( do_clone        );
DECLARE_DO_FUN( do_coil         );
DECLARE_DO_FUN( do_tide         );
DECLARE_DO_FUN( do_flash        );
DECLARE_DO_FUN( do_death        );
DECLARE_DO_FUN( do_acid         );
DECLARE_DO_FUN( do_retrn        );
DECLARE_DO_FUN( do_rot          );
DECLARE_DO_FUN( do_hades        );
DECLARE_DO_FUN( do_potency      );
DECLARE_DO_FUN( do_plasma       );
DECLARE_DO_FUN( do_shadowstep   );
DECLARE_DO_FUN( do_earthmeld    );
DECLARE_DO_FUN( do_theft        );
DECLARE_DO_FUN( do_zuloform     );
DECLARE_DO_FUN( do_change       );
DECLARE_DO_FUN( do_poisonw      );
DECLARE_DO_FUN( do_regenerate   );
DECLARE_DO_FUN( do_fcommand     );
DECLARE_DO_FUN( do_vamp_summon  );
DECLARE_DO_FUN( do_bloodme	);
/* Shadows */
DECLARE_DO_FUN( do_conceal	);
DECLARE_DO_FUN( do_mastery	);
DECLARE_DO_FUN( do_shadow	);
DECLARE_DO_FUN( do_circle	);
DECLARE_DO_FUN( do_tumble	);
DECLARE_DO_FUN( do_thirdeye	);
DECLARE_DO_FUN( do_traproom	);
DECLARE_DO_FUN( do_runeweave	);
/* Wolves */
DECLARE_DO_FUN( do_sclaws	);
DECLARE_DO_FUN( do_moonbeam	);
DECLARE_DO_FUN( do_moongate	);
DECLARE_DO_FUN( do_gmotherstouch);
DECLARE_DO_FUN( do_motherstouch );
DECLARE_DO_FUN( do_flameclaws	);
DECLARE_DO_FUN( do_rend		);
DECLARE_DO_FUN( do_skin		);
DECLARE_DO_FUN( do_jawlock	);
DECLARE_DO_FUN( do_perception	);
DECLARE_DO_FUN( do_roar		);
DECLARE_DO_FUN( do_quills	);
DECLARE_DO_FUN( do_slam		);
DECLARE_DO_FUN( do_shred	);
DECLARE_DO_FUN( do_run		);
DECLARE_DO_FUN( do_talons	);
DECLARE_DO_FUN( do_devour	);
DECLARE_DO_FUN( do_call_wild	);
DECLARE_DO_FUN( do_wither	);
DECLARE_DO_FUN( do_wburrow	);
DECLARE_DO_FUN( do_shift	);
DECLARE_DO_FUN( do_claws	);
DECLARE_DO_FUN( do_fangs	);
DECLARE_DO_FUN( do_shield	);
DECLARE_DO_FUN( do_vanish	);
DECLARE_DO_FUN( do_web		);
DECLARE_DO_FUN( do_rage_up	);
DECLARE_DO_FUN( do_rage_down	);
DECLARE_DO_FUN( do_wolf_rage	);
DECLARE_DO_FUN( do_wolf_calm	);
DECLARE_DO_FUN( do_wolfpowers	);
/* monks */
DECLARE_DO_FUN( do_voice        );
DECLARE_DO_FUN( do_grant        );
DECLARE_DO_FUN( do_path         );
DECLARE_DO_FUN( do_palmstrike   );
DECLARE_DO_FUN( do_heatmetal    );
DECLARE_DO_FUN( do_celestial    );
DECLARE_DO_FUN( do_clairvoyance );
DECLARE_DO_FUN( do_deathtouch   );
DECLARE_DO_FUN( do_healtouch    );
DECLARE_DO_FUN( do_chi          );
DECLARE_DO_FUN( do_relax        );
DECLARE_DO_FUN( do_elbow        );
DECLARE_DO_FUN( do_reverse      );
DECLARE_DO_FUN( do_sweep        );
DECLARE_DO_FUN( do_backfist     );
DECLARE_DO_FUN( do_kneethrust   );
DECLARE_DO_FUN( do_thrustkick   );
DECLARE_DO_FUN( do_roundhouse   );
DECLARE_DO_FUN( do_heartpunch   );
DECLARE_DO_FUN( do_technique    );
DECLARE_DO_FUN( do_denjin       );
DECLARE_DO_FUN( do_customcombo  );
/*  DRAGONS  */
DECLARE_DO_FUN( do_dbreath    );
DECLARE_DO_FUN( do_dragongain );
DECLARE_DO_FUN( do_dragon_fly );
DECLARE_DO_FUN( do_dscan      );
DECLARE_DO_FUN( do_snatch     );
DECLARE_DO_FUN( do_plummet    );
DECLARE_DO_FUN( do_ddrop      );
DECLARE_DO_FUN( do_grab       );
DECLARE_DO_FUN( do_dthrow     );
DECLARE_DO_FUN( do_dragon_shift);
DECLARE_DO_FUN( do_drelease   );
DECLARE_DO_FUN( do_highclaw   );
DECLARE_DO_FUN( do_tailslap   );
DECLARE_DO_FUN( do_wingbuffet );
/* Jedi..Phear */
DECLARE_DO_FUN( do_jedi_show_powers );
DECLARE_DO_FUN( do_saber_craft	);
DECLARE_DO_FUN( do_combat_style	);
DECLARE_DO_FUN( do_jover	);
DECLARE_DO_FUN( do_jflip        );
DECLARE_DO_FUN( do_jupper       );
DECLARE_DO_FUN( do_jback        );
DECLARE_DO_FUN( do_jslice       );
DECLARE_DO_FUN( do_jswipe       );
DECLARE_DO_FUN( do_jslash       );
DECLARE_DO_FUN( do_jroll        );
DECLARE_DO_FUN( do_jedi_force_heal );
DECLARE_DO_FUN( do_jedi_force_absorb );
DECLARE_DO_FUN( do_jedi_force_shield );
DECLARE_DO_FUN( do_jedi_force_mind_trick );
DECLARE_DO_FUN( do_jedi_force_sight );
DECLARE_DO_FUN( do_jedi_force_speed );
DECLARE_DO_FUN( do_jedi_force_jump );
DECLARE_DO_FUN( do_jedi_force_push );
DECLARE_DO_FUN( do_jedi_force_pull );
DECLARE_DO_FUN( do_jedi_force_grip );
DECLARE_DO_FUN( do_jedi_force_rage );
DECLARE_DO_FUN( do_jedi_force_drain );
DECLARE_DO_FUN( do_jedi_force_lightning );
/* Drow..Wank Wank */
DECLARE_DO_FUN( do_strangle	);
DECLARE_DO_FUN( do_levitate	);
DECLARE_DO_FUN( do_drowpowers	);
DECLARE_DO_FUN( do_chaosblast	);
DECLARE_DO_FUN( do_drowfire	);
DECLARE_DO_FUN( do_drow_heal	);
DECLARE_DO_FUN( do_drowhate	);
DECLARE_DO_FUN( do_spiderform	);
DECLARE_DO_FUN( do_drowshield	);
DECLARE_DO_FUN( do_darkness	);
DECLARE_DO_FUN( do_earthshatter	);
DECLARE_DO_FUN( do_garotte	);
DECLARE_DO_FUN( do_dgarotte	);
/* OLC Stuff Ooo */
DECLARE_DO_FUN( do_hlist	);
DECLARE_DO_FUN( do_hedit	);
DECLARE_DO_FUN( do_hset		);
DECLARE_DO_FUN( do_ocreate	);
DECLARE_DO_FUN( do_mcreate	);
DECLARE_DO_FUN( do_redit	);
DECLARE_DO_FUN( do_rformat      );
DECLARE_DO_FUN( do_bloodrod	);
DECLARE_DO_FUN( do_sclaws	);
DECLARE_DO_FUN( do_astat	);
DECLARE_DO_FUN( do_alock        );
DECLARE_DO_FUN( do_aclear       );
DECLARE_DO_FUN( do_abusy        );
DECLARE_DO_FUN( do_agree	);
DECLARE_DO_FUN( do_challenge    );
DECLARE_DO_FUN( do_withdraw );
DECLARE_DO_FUN( do_decline      );
DECLARE_DO_FUN( do_arena );
DECLARE_DO_FUN( do_obtain	);
DECLARE_DO_FUN( do_redeem	);
DECLARE_DO_FUN( do_warps	);
DECLARE_DO_FUN( do_setdisciplines);


DECLARE_DO_FUN(	do_activate	);
DECLARE_DO_FUN(	do_alignment	);
DECLARE_DO_FUN(	do_allow	);
DECLARE_DO_FUN(	do_ansi		);
DECLARE_DO_FUN( do_msp          );
DECLARE_DO_FUN(	do_answer	);
DECLARE_DO_FUN(	do_areas	);
DECLARE_DO_FUN(	do_artifact	);
DECLARE_DO_FUN(	do_at		);
DECLARE_DO_FUN(	do_newtalk	);
DECLARE_DO_FUN(	do_autoexit	);
DECLARE_DO_FUN(	do_autoloot	);
DECLARE_DO_FUN(	do_autosac	);
DECLARE_DO_FUN(	do_autosave	);
DECLARE_DO_FUN( do_autostance	);
DECLARE_DO_FUN( do_autoclass );
DECLARE_DO_FUN(	do_backstab	);
DECLARE_DO_FUN(	do_bamfin	);
DECLARE_DO_FUN(	do_bamfout	);
DECLARE_DO_FUN(	do_ban		);
DECLARE_DO_FUN(	do_berserk	);
DECLARE_DO_FUN(	do_bind		);
DECLARE_DO_FUN(	do_birth	);
DECLARE_DO_FUN(	do_blank	);
DECLARE_DO_FUN(	do_blindfold	);
DECLARE_DO_FUN(	do_bloodline	);
DECLARE_DO_FUN(	do_brandish	);
DECLARE_DO_FUN(	do_brief	);
DECLARE_DO_FUN(	do_call		);
DECLARE_DO_FUN(	do_calm		);
DECLARE_DO_FUN(	do_cast		);
DECLARE_DO_FUN(	do_change	);
DECLARE_DO_FUN(	do_changelight	);
DECLARE_DO_FUN(	do_channels	);
DECLARE_DO_FUN(	do_chat		);
DECLARE_DO_FUN( do_gocial	);
DECLARE_DO_FUN(	do_claim	);
DECLARE_DO_FUN( do_clan         );
DECLARE_DO_FUN( do_loner        );
DECLARE_DO_FUN( do_clantable );
DECLARE_DO_FUN(	do_show_clan_info );
DECLARE_DO_FUN(	do_clanname	);
DECLARE_DO_FUN( do_clantalk	);
DECLARE_DO_FUN( do_clan1        );
DECLARE_DO_FUN( do_clan2        );
DECLARE_DO_FUN( do_clan3	);
DECLARE_DO_FUN( do_clan4	);
DECLARE_DO_FUN( do_clan5	);
DECLARE_DO_FUN( do_clan6        );
DECLARE_DO_FUN( do_clan7	);
DECLARE_DO_FUN( do_outcast	);
DECLARE_DO_FUN( do_class	);
DECLARE_DO_FUN(	do_clearstats	);
DECLARE_DO_FUN( do_clearrace    );
DECLARE_DO_FUN(	do_close	);
DECLARE_DO_FUN(	do_command	);
DECLARE_DO_FUN(	do_commands	);
DECLARE_DO_FUN(	do_compare	);
DECLARE_DO_FUN(	do_complete	);
DECLARE_DO_FUN(	do_config	);
DECLARE_DO_FUN(	do_consent	);
DECLARE_DO_FUN(	do_consider	);
DECLARE_DO_FUN(	do_cprompt	);
DECLARE_DO_FUN(	do_crack	);
DECLARE_DO_FUN(	do_create	);
DECLARE_DO_FUN(	do_credits	);
DECLARE_DO_FUN(	do_darkheart	);
DECLARE_DO_FUN( do_vampdarkness	);
DECLARE_DO_FUN( do_absorb       );
DECLARE_DO_FUN(	do_decapitate	);
DECLARE_DO_FUN( do_gifts	);
DECLARE_DO_FUN( do_gust         );
DECLARE_DO_FUN( do_trueform	);
DECLARE_DO_FUN( do_cone		);
DECLARE_DO_FUN(	do_deny		);
DECLARE_DO_FUN(	do_diagnose	);
DECLARE_DO_FUN(	do_dismount	);
DECLARE_DO_FUN(do_disable);
DECLARE_DO_FUN(	do_disarm	);
DECLARE_DO_FUN(	do_disconnect	);
DECLARE_DO_FUN(	do_donate	);
DECLARE_DO_FUN(	do_down		);
DECLARE_DO_FUN(	do_draw		);
DECLARE_DO_FUN(	do_drink	);
DECLARE_DO_FUN(	do_drop		);
DECLARE_DO_FUN( do_heal		);
DECLARE_DO_FUN(	do_ntrust	);
DECLARE_DO_FUN( do_burrow      );
DECLARE_DO_FUN(	do_east		);
DECLARE_DO_FUN(	do_eat		);
DECLARE_DO_FUN(	do_echo		);
DECLARE_DO_FUN(	do_empty	);
DECLARE_DO_FUN(	do_escape	);
DECLARE_DO_FUN(	do_emote	);
DECLARE_DO_FUN(	do_enter	);
DECLARE_DO_FUN(	do_equipment	);
DECLARE_DO_FUN(	do_evileye	);
DECLARE_DO_FUN(	do_examine	);
DECLARE_DO_FUN( do_exile    );
DECLARE_DO_FUN( do_exlist	);
DECLARE_DO_FUN( do_eyespy	);
DECLARE_DO_FUN(	do_familiar	);
DECLARE_DO_FUN(	do_fangs	);
DECLARE_DO_FUN( do_favor	);
DECLARE_DO_FUN(	do_favour	);
DECLARE_DO_FUN(	do_fcommand	);
DECLARE_DO_FUN(	do_feed		);
DECLARE_DO_FUN(	do_fightstyle	);
DECLARE_DO_FUN(	do_fileupdate	);
DECLARE_DO_FUN(	do_fill		);
DECLARE_DO_FUN(	do_finger	);
DECLARE_DO_FUN(	do_flee		);
DECLARE_DO_FUN(	do_flex		);
DECLARE_DO_FUN(	do_follow	);
DECLARE_DO_FUN( do_for          );
DECLARE_DO_FUN( do_learn        );
DECLARE_DO_FUN( do_make         );
DECLARE_DO_FUN( do_makeclan     );
DECLARE_DO_FUN( do_delclan      );
DECLARE_DO_FUN( do_setleader    );
DECLARE_DO_FUN( do_setcoleader  );
DECLARE_DO_FUN( do_absorb       );
DECLARE_DO_FUN( do_force        );
DECLARE_DO_FUN( do_xemote       );
DECLARE_DO_FUN( do_convert      );
DECLARE_DO_FUN(	do_forceauto	);
DECLARE_DO_FUN(	do_freeze	);
DECLARE_DO_FUN(	do_gag		);
DECLARE_DO_FUN(	do_get		);
DECLARE_DO_FUN( do_generation	);
DECLARE_DO_FUN(	do_gift		);
DECLARE_DO_FUN(	do_give		);
DECLARE_DO_FUN(	do_goto		);
DECLARE_DO_FUN( do_grant	);
DECLARE_DO_FUN(	do_group	);
DECLARE_DO_FUN(	do_gtell	);
DECLARE_DO_FUN(	do_help		);
DECLARE_DO_FUN(	do_hide		);
DECLARE_DO_FUN(	do_holylight	);
DECLARE_DO_FUN(	do_home		);
DECLARE_DO_FUN(	do_horns	);
DECLARE_DO_FUN(	do_howl		);
DECLARE_DO_FUN(	do_huh		);
DECLARE_DO_FUN( do_beastdown );
DECLARE_DO_FUN( do_daywalker );
DECLARE_DO_FUN(	do_humanform	);
DECLARE_DO_FUN(	do_humanity	);
DECLARE_DO_FUN(	do_hunt		);
DECLARE_DO_FUN(	do_hurl		);
DECLARE_DO_FUN( do_drag		);
DECLARE_DO_FUN(	do_idea		);
DECLARE_DO_FUN(	do_immune	);
DECLARE_DO_FUN(	do_immtalk	);
DECLARE_DO_FUN( do_incog        );
DECLARE_DO_FUN(	do_info		);
DECLARE_DO_FUN(	do_inpart	);
DECLARE_DO_FUN(	do_introduce	);
DECLARE_DO_FUN(	do_inventory	);
DECLARE_DO_FUN(	do_invis	);
DECLARE_DO_FUN(	do_kick		);
DECLARE_DO_FUN( do_godsfavor    );
DECLARE_DO_FUN( do_smelt        );
DECLARE_DO_FUN( do_bet          );
DECLARE_DO_FUN( do_hilo         );
DECLARE_DO_FUN( do_new_forge    );
DECLARE_DO_FUN( do_copyover     );
DECLARE_DO_FUN( do_godsbless    );

DECLARE_DO_FUN(	do_kill		);
DECLARE_DO_FUN(	do_killperson	);
DECLARE_DO_FUN(	do_locate	);
DECLARE_DO_FUN(	do_lock		);
DECLARE_DO_FUN(	do_log		);
DECLARE_DO_FUN(	do_look		);
DECLARE_DO_FUN(	do_mclear	);
DECLARE_DO_FUN(	do_meditate	);
DECLARE_DO_FUN(	do_memory	);
DECLARE_DO_FUN(	do_mfind	);
DECLARE_DO_FUN(	do_mload	);
DECLARE_DO_FUN(	do_mount	);
DECLARE_DO_FUN(	do_morph	);
DECLARE_DO_FUN(	do_mortal	);
DECLARE_DO_FUN(	do_mortalvamp	);
DECLARE_DO_FUN(	do_mset		);
DECLARE_DO_FUN( do_undeny       );
DECLARE_DO_FUN(	do_mstat	);
DECLARE_DO_FUN( do_pstat	);
DECLARE_DO_FUN(	do_mwhere	);
DECLARE_DO_FUN(	do_music	);
DECLARE_DO_FUN(	do_noemote	);
DECLARE_DO_FUN(	do_north	);
DECLARE_DO_FUN(	do_note		);
DECLARE_DO_FUN(	do_notell	);
DECLARE_DO_FUN(	do_oclone	);
DECLARE_DO_FUN(	do_ofind	);
DECLARE_DO_FUN(	do_oload	);
DECLARE_DO_FUN(	do_open		);
DECLARE_DO_FUN(	do_order	);
DECLARE_DO_FUN(	do_oreturn	);
DECLARE_DO_FUN( do_outcast	);
DECLARE_DO_FUN( do_reimburse    );
DECLARE_DO_FUN( do_pack         );
DECLARE_DO_FUN( do_setgentick  );
DECLARE_DO_FUN(	do_oset		);
DECLARE_DO_FUN(	do_ostat	);
DECLARE_DO_FUN(	do_oswitch	);
DECLARE_DO_FUN(	do_otransfer	);
DECLARE_DO_FUN(	do_pact		);
DECLARE_DO_FUN( do_paradox	);
DECLARE_DO_FUN(	do_password	);
DECLARE_DO_FUN(	do_peace	);
DECLARE_DO_FUN(	do_pick		);
DECLARE_DO_FUN( do_plasma       );
DECLARE_DO_FUN(	do_pload	);
DECLARE_DO_FUN(	do_poison	);
DECLARE_DO_FUN(	do_practice	);
DECLARE_DO_FUN(	do_press	);
DECLARE_DO_FUN(	do_preturn	);
DECLARE_DO_FUN(	do_prompt	);
DECLARE_DO_FUN(	do_pset		);
DECLARE_DO_FUN(	do_pull		);
DECLARE_DO_FUN(	do_punch	);
DECLARE_DO_FUN(	do_purge	);
DECLARE_DO_FUN(	do_put		);
DECLARE_DO_FUN(	do_qmake	);
DECLARE_DO_FUN(	do_quaff	);
DECLARE_DO_FUN(	do_qset		);
DECLARE_DO_FUN(	do_qstat	);
DECLARE_DO_FUN(	do_qtrust	);
DECLARE_DO_FUN(	do_quest	);
DECLARE_DO_FUN(	do_question	);
DECLARE_DO_FUN(	do_qui		);
DECLARE_DO_FUN(	do_quit		);
DECLARE_DO_FUN(	do_rage		);
DECLARE_DO_FUN(	do_read		);
DECLARE_DO_FUN(	do_readaura	);
DECLARE_DO_FUN(	do_reboo	);
DECLARE_DO_FUN(	do_reboot	);
DECLARE_DO_FUN(	do_recall	);
DECLARE_DO_FUN(	do_recharge	);
DECLARE_DO_FUN(	do_recho	);
DECLARE_DO_FUN(	do_recite	);
DECLARE_DO_FUN(	do_regenerate	);
DECLARE_DO_FUN(	do_release	);
DECLARE_DO_FUN(	do_relevel	);
DECLARE_DO_FUN( do_nike		);
DECLARE_DO_FUN(	do_remove	);
DECLARE_DO_FUN( do_kale_owns_you);
DECLARE_DO_FUN(	do_rent		);
DECLARE_DO_FUN(	do_reply	);
DECLARE_DO_FUN(	do_report	);
DECLARE_DO_FUN(	do_rescue	);
DECLARE_DO_FUN(	do_rest		);
DECLARE_DO_FUN(	do_restore	);
DECLARE_DO_FUN(	do_return	);
DECLARE_DO_FUN(	do_roll		);
DECLARE_DO_FUN(	do_rset		);
DECLARE_DO_FUN(	do_rstat	);
DECLARE_DO_FUN(	do_sacrifice	);
DECLARE_DO_FUN(	do_safe		);
DECLARE_DO_FUN(	do_save		);
DECLARE_DO_FUN(	do_say		);
DECLARE_DO_FUN(	do_scan		);
DECLARE_DO_FUN( do_stat         );
DECLARE_DO_FUN( do_mine         );
DECLARE_DO_FUN( do_powers       );
DECLARE_DO_FUN( do_gainschool   );
DECLARE_DO_FUN(	do_score	);
DECLARE_DO_FUN(	do_scry		);
DECLARE_DO_FUN(	do_shadowplane	);
DECLARE_DO_FUN(	do_shadowsight	);
DECLARE_DO_FUN(	do_sheath	);
DECLARE_DO_FUN(	do_shoot	);
DECLARE_DO_FUN(	do_shout	);
DECLARE_DO_FUN(	do_shutdow	);
DECLARE_DO_FUN(	do_shutdown	);
DECLARE_DO_FUN(	do_show_artifacts);
DECLARE_DO_FUN(	do_silence	);
DECLARE_DO_FUN(	do_sit		);
DECLARE_DO_FUN(	do_skill	);
DECLARE_DO_FUN(	do_sla		);
DECLARE_DO_FUN(	do_slay		);
DECLARE_DO_FUN(	do_sleep	);
DECLARE_DO_FUN(	do_slookup	);
DECLARE_DO_FUN(	do_speak	);
DECLARE_DO_FUN(	do_special	);
DECLARE_DO_FUN(	do_spell	);
DECLARE_DO_FUN(	do_stance	);
DECLARE_DO_FUN(	do_sneak	);
DECLARE_DO_FUN(	do_snoop	);
DECLARE_DO_FUN(	do_socials	);
DECLARE_DO_FUN(	do_south	);
DECLARE_DO_FUN(	do_spy		);
DECLARE_DO_FUN(	do_spydirection	);
DECLARE_DO_FUN(	do_sset		);
DECLARE_DO_FUN(	do_stand	);
DECLARE_DO_FUN(	do_steal	);
DECLARE_DO_FUN( do_summon	);
DECLARE_DO_FUN(	do_nosummon	);
DECLARE_DO_FUN( do_notravel	);
DECLARE_DO_FUN(	do_switch	);
DECLARE_DO_FUN( do_weaplist     );
DECLARE_DO_FUN( do_obj          );
DECLARE_DO_FUN(	do_tell		);
DECLARE_DO_FUN(	do_throw	);
DECLARE_DO_FUN(	do_tie		);
DECLARE_DO_FUN(	do_time		);
DECLARE_DO_FUN(	do_title	);
DECLARE_DO_FUN(	do_token	);
DECLARE_DO_FUN(	do_track	);
DECLARE_DO_FUN(	do_train	);
DECLARE_DO_FUN( do_oldtrain       );
DECLARE_DO_FUN(	do_transfer	);
DECLARE_DO_FUN(	do_transport	);
DECLARE_DO_FUN(	do_travel	);
DECLARE_DO_FUN(	do_tribe	);
DECLARE_DO_FUN( do_mclan        );
DECLARE_DO_FUN(	do_truesight	);
DECLARE_DO_FUN(	do_trust	);
DECLARE_DO_FUN(	do_turn		);
DECLARE_DO_FUN(	do_twist	);
DECLARE_DO_FUN(	do_typo		);
DECLARE_DO_FUN(	do_unlock	);
DECLARE_DO_FUN(	do_unpolymorph	);
DECLARE_DO_FUN(	do_untie	);
DECLARE_DO_FUN(	do_unwerewolf	);
DECLARE_DO_FUN(	do_up		);
DECLARE_DO_FUN(	do_upkeep	);
DECLARE_DO_FUN(	do_users	);
DECLARE_DO_FUN(	do_version	);
DECLARE_DO_FUN(	do_visible	);
DECLARE_DO_FUN(	do_voodoo	);
DECLARE_DO_FUN(	do_wake		);
DECLARE_DO_FUN(	do_watcher	);
DECLARE_DO_FUN(	do_watching	);
DECLARE_DO_FUN(	do_weaponform	);
DECLARE_DO_FUN(	do_wear		);
DECLARE_DO_FUN(	do_wearaffect	);
DECLARE_DO_FUN(	do_weather	);
DECLARE_DO_FUN(	do_werewolf	);
DECLARE_DO_FUN(	do_west		);
DECLARE_DO_FUN(	do_where	);
DECLARE_DO_FUN(	do_whisper	);
DECLARE_DO_FUN( do_newwho       );
DECLARE_DO_FUN(	do_who		);
DECLARE_DO_FUN(	do_who2		);
DECLARE_DO_FUN(	do_who3		);
DECLARE_DO_FUN(	do_wimpy	);
DECLARE_DO_FUN(	do_wings	);
DECLARE_DO_FUN(	do_wizhelp	);
DECLARE_DO_FUN(	do_wizlist	);
DECLARE_DO_FUN(	do_wizlock	);
DECLARE_DO_FUN(	do_write	);
DECLARE_DO_FUN(	do_yell		);
DECLARE_DO_FUN(	do_zap		);
DECLARE_DO_FUN( do_bounty       );
DECLARE_DO_FUN( do_bounty_list  );
DECLARE_DO_FUN( do_set_deca	);
DECLARE_DO_FUN( do_set_decap    );

/*
 * Spell functions.
 * Defined in magic.c.
 */
DECLARE_SPELL_FUN(      spell_upgrade           );
DECLARE_SPELL_FUN(      spell_prepare           );
DECLARE_SPELL_FUN(      spell_regeneration      );
DECLARE_SPELL_FUN(      spell_contagion         );
DECLARE_SPELL_FUN(      spell_aura              );
DECLARE_SPELL_FUN(      spell_spew              );
DECLARE_SPELL_FUN(	spell_infirmity		);
DECLARE_SPELL_FUN(	spell_null		);
DECLARE_SPELL_FUN(      spell_make_bag          );
DECLARE_SPELL_FUN(	spell_acid_blast	);
DECLARE_SPELL_FUN(      spell_tendrils          );
DECLARE_SPELL_FUN(	spell_armor		);
DECLARE_SPELL_FUN(	spell_manashield	);
DECLARE_SPELL_FUN(	spell_godbless		);
DECLARE_SPELL_FUN(	spell_bless		);
DECLARE_SPELL_FUN(	spell_blindness		);
DECLARE_SPELL_FUN(	spell_burning_hands	);
DECLARE_SPELL_FUN(	spell_call_lightning	);
DECLARE_SPELL_FUN(	spell_cause_critical	);
DECLARE_SPELL_FUN(	spell_cause_light	);
DECLARE_SPELL_FUN(	spell_cause_serious	);
DECLARE_SPELL_FUN(	spell_change_sex	);
DECLARE_SPELL_FUN(	spell_charm_person	);
DECLARE_SPELL_FUN(	spell_chill_touch	);
DECLARE_SPELL_FUN(	spell_colour_spray	);
DECLARE_SPELL_FUN(	spell_continual_light	);
DECLARE_SPELL_FUN(	spell_control_weather	);
DECLARE_SPELL_FUN(	spell_create_food	);
DECLARE_SPELL_FUN(	spell_create_spring	);
DECLARE_SPELL_FUN(	spell_create_water	);
DECLARE_SPELL_FUN(	spell_cure_blindness	);
DECLARE_SPELL_FUN(	spell_cure_critical	);
DECLARE_SPELL_FUN(	spell_cure_light	);
DECLARE_SPELL_FUN(	spell_cure_poison	);
DECLARE_SPELL_FUN(	spell_cure_serious	);
DECLARE_SPELL_FUN(	spell_curse		);
DECLARE_SPELL_FUN(	spell_darkness		);
DECLARE_SPELL_FUN(	spell_detect_evil	);
DECLARE_SPELL_FUN(	spell_detect_hidden	);
DECLARE_SPELL_FUN(	spell_detect_invis	);
DECLARE_SPELL_FUN(	spell_detect_magic	);
DECLARE_SPELL_FUN(	spell_detect_poison	);
DECLARE_SPELL_FUN(	spell_dispel_evil	);
DECLARE_SPELL_FUN(	spell_dispel_magic	);
DECLARE_SPELL_FUN(      spell_dispel_all        );
DECLARE_SPELL_FUN(	spell_drowfire	);
DECLARE_SPELL_FUN(	spell_earthquake	);
DECLARE_SPELL_FUN(      spell_enchant_armor     );
DECLARE_SPELL_FUN(	spell_enchant_weapon	);
DECLARE_SPELL_FUN(	spell_energy_drain	);
DECLARE_SPELL_FUN(	spell_faerie_fire	);
DECLARE_SPELL_FUN(	spell_faerie_fog	);
DECLARE_SPELL_FUN(	spell_fireball		);
DECLARE_SPELL_FUN(      spell_thornspray        );
DECLARE_SPELL_FUN(	spell_flamestrike	);
DECLARE_SPELL_FUN(	spell_fly		);
DECLARE_SPELL_FUN(	spell_gate		);
DECLARE_SPELL_FUN(	spell_general_purpose	);
DECLARE_SPELL_FUN(	spell_giant_strength	);
DECLARE_SPELL_FUN(	spell_harm		);
DECLARE_SPELL_FUN(      spell_haste             );
DECLARE_SPELL_FUN(	spell_heal		);
DECLARE_SPELL_FUN(	spell_high_explosive	);
DECLARE_SPELL_FUN(	spell_identify		);
DECLARE_SPELL_FUN(	spell_infravision	);
DECLARE_SPELL_FUN(	spell_invis		);
DECLARE_SPELL_FUN(	spell_know_alignment	);
DECLARE_SPELL_FUN(	spell_lightning_bolt	);
DECLARE_SPELL_FUN(	spell_locate_object	);
DECLARE_SPELL_FUN(	spell_magic_missile	);
DECLARE_SPELL_FUN(	spell_mass_invis	);
DECLARE_SPELL_FUN(	spell_pass_door		);
DECLARE_SPELL_FUN(	spell_poison		);
DECLARE_SPELL_FUN(	spell_protection	);
DECLARE_SPELL_FUN(	spell_refresh		);
DECLARE_SPELL_FUN(	spell_remove_curse	);
DECLARE_SPELL_FUN(	spell_sanctuary		);
DECLARE_SPELL_FUN(	spell_shocking_grasp	);
DECLARE_SPELL_FUN(	spell_shield		);
DECLARE_SPELL_FUN(	spell_sleep		);
DECLARE_SPELL_FUN(	spell_stone_skin	);
DECLARE_SPELL_FUN(	spell_summon		);
DECLARE_SPELL_FUN(	spell_teleport		);
DECLARE_SPELL_FUN(	spell_ventriloquate	);
DECLARE_SPELL_FUN(	spell_weaken		);
DECLARE_SPELL_FUN(	spell_word_of_recall	);
DECLARE_SPELL_FUN(	spell_acid_breath	);
DECLARE_SPELL_FUN(	spell_fire_breath	);
DECLARE_SPELL_FUN(	spell_frost_breath	);
DECLARE_SPELL_FUN(	spell_gas_breath	);
DECLARE_SPELL_FUN(	spell_godbless		);
DECLARE_SPELL_FUN(	spell_lightning_breath	);
DECLARE_SPELL_FUN(	spell_cone		);
DECLARE_SPELL_FUN(	spell_guardian		);
DECLARE_SPELL_FUN(	spell_soulblade		);
DECLARE_SPELL_FUN(	spell_mana		);
DECLARE_SPELL_FUN(	spell_frenzy		);
DECLARE_SPELL_FUN(	spell_darkblessing	);
DECLARE_SPELL_FUN(	spell_portal		);
DECLARE_SPELL_FUN(      spell_scry              );
DECLARE_SPELL_FUN(	spell_awaken		);
DECLARE_SPELL_FUN(	spell_energyflux	);
DECLARE_SPELL_FUN(	spell_voodoo		);
DECLARE_SPELL_FUN(	spell_transport		);
DECLARE_SPELL_FUN(	spell_regenerate	);
DECLARE_SPELL_FUN(	spell_clot		);
DECLARE_SPELL_FUN(	spell_mend		);
DECLARE_SPELL_FUN(	spell_quest		);
DECLARE_SPELL_FUN(	spell_minor_creation	);
DECLARE_SPELL_FUN(	spell_brew		);
DECLARE_SPELL_FUN(	spell_scribe		);
DECLARE_SPELL_FUN(	spell_carve		);
DECLARE_SPELL_FUN(	spell_engrave		);
DECLARE_SPELL_FUN(	spell_bake		);
DECLARE_SPELL_FUN(	spell_mount		);
DECLARE_SPELL_FUN(	spell_scan		);
DECLARE_SPELL_FUN(	spell_repair		);
DECLARE_SPELL_FUN(	spell_spellproof	);
DECLARE_SPELL_FUN(	spell_preserve		);
DECLARE_SPELL_FUN(	spell_chaos_blast	);
DECLARE_SPELL_FUN(	spell_resistance	);
DECLARE_SPELL_FUN(	spell_web		);
DECLARE_SPELL_FUN(	spell_contraception	);
DECLARE_SPELL_FUN(	spell_remove_page	);
DECLARE_SPELL_FUN(	spell_improve		);
DECLARE_SPELL_FUN(      spell_wear_loc          );


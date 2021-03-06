*/CRUN/ : Defines RUN 
      CHARACTER*6 PROPER,ENVIRO,CCFORM, CSUPSYM, IROOT_MET
      CHARACTER*8 RESP_OP, CSEQCI, AVE_OP, ITRACI_CR,ITRACI_CN
      CHARACTER*2 PADDY, PADDY2
      CHARACTER*3 CMO_ORD
      COMMON/CRUN/MAXIT,IRESTR,INTIMP,MXP1,MXP2,MXQ,INCORE,MXCIV,
     &            ICISTR,NOCSF,IDIAG,NOINT,IDMPIN,MXINKA,ICJKAIB,
     &            INIREF,IRESTRF,MOCAA,MOCAB,IPERT,NPERT,
     &            IAPRREF,IAPRZER,IIDUM,THRES_E,
     &            NSEQCI(MXPICI),ISEQCI(MXPICI,MXPICI),IEXTKOP,
     &            IE0AVEX,IC1DSC,
     &            IH0SPC,NPTSPC,IPTSPC(MXPPTSPC),
     &            IOCPTSPC(2,MXPNGAS,MXPPTSPC),IH0INSPC(MXPPTSPC),
     &            IRFROOT,NH0EXSPC,IH0EXSPC(MXPPTSPC),INIDEG,
     &            XLAMBDA,LCSBLK,NOMOFL,IFINMO,NPSSPC,
     &            NPSSH(MXPIRR,MXPNGAS),E_THRE,C_THRE,
     &            E_CONV,C_CONV,ICLSSEL,IDENSI,IPTEKT,
     &            NPTEKT,LPTEKT(20,2),IH0ROOT,IRST2,ISKIPEI,IPAD,
     &            E0READ,RESP_W(20),IXYZSYM(3),NPROP, 
     &            ITRAPRP,NEXCSTATE,IEXCSYM,IRESPONS,NRSPST,
     &            NRESP,IRSPRT(20),IPAD1,MAXORD_OP(2,20),
     &            MXITLE,N_AVE_OP, IROOTHOMING,IUSE_PH,
     &            IADVICE,ITRACI,
     &            IUSE_PA,IPTFOCK,ITRANS ,NSXE,NDXEE,N_CC_AMP,
     &            I_RESTRT_CC,LAST_CC_SPC,LAST_CC_RUN,ITRA_FI,
     &            ITRA_IN,MULSPC,LPAT,IPAT(100),IFMULSPC, IRELAX,
     &            ICC_CUR, NCNV_RT, IDOQD,
     &            I_RE_MS2_SPACE,I_RE_MS2_VALUE, IPRECOND,
     &            ISIMSYM, IUSE_HW, ISEQCI2(MXPICI,MXPICI),
     &            IUSEH0P, I_DO_MCSCF, MX_EXC_LEVEL,
     &            I_DO_LZ2, ICCSOLVE,I_DO_CCN, I_DO_SBSPJA,
     &            IDUM1,CCCONV, N_HOLE_ORBSPACEX, I_DO_CC3, 
     &            I_DO_CI_TO_CC,LCCBD12,LCCB,
     &            I_DO_CC_EXC_E, NEXC_PER_SYM(8),IRES_EXC,
     &            ICCEX_SLEQ, CCEX_CONV,IPAD2,
     &            MXINKA_CC, ISIMTRH, IFRZ_CC, NFRZ_CC,IFRZ_CC_AR(100),
     &            I_DO_CC_EXP, I_DO_NEWCCV, MXSPOX, I_DO_GENTRD,
     &            ISM_AT, IMS2_AT, NSTATE_AT, I_DO_MASK_CC,
     &            MASK_SD(100,2),MSK_AEL,MSK_BEL, NOAAEX, MXCIV_ORIG,
     &            N_TDL_MAX,IUSE_TR, ISPIN_RESTRICTED, IGENTRD,
     &            IGST_OCC(MXPNGAS,2),IGST_SM,IGST_MS2, IAAEXC_TYP,
     &            I_DO_REO_ORB,NSWITCH,IREO_ORB(3,MXPORB), I_DO_CC,
     &            ICEXC_RANK_MIN,ICEXC_RANK_MAX,ICEXC_INT,
     &            I_DO_CMPCCI, I_DO_CC_TO_CI, I_DO_COMHAM,
     &            I_DO_DUMP_FOR_MRPT, INI_HF_MO, MAX_DIIS_VEC,
     &            XMXSTP, XMXSTP_APRJ, 
     &            MAX_VEC_APRJ, I_MODE_GTBCE, I_OOCC, I_BCC, 
     &            I_OBCC, MAXMEM, ISVMEM, ISYMMET_G, 
     &            XLIP_E, XLIP_V, IDO_LIPKIN, ITGSPC, ITGCLC, 
     &            IHFSOLVE, ISPNDEN, ICUMULA,  IRESTRT_IC,
     &            NCOMMU_E,NCOMMU_J,NCOMMU_V,
     &            I_APPROX_HCOM_E,I_APPROX_HCOM_V,
     &            I_APPROX_HCOM_J,
     &            IDENS_IN, IDENS_AC, IDENS_SEC,
     &            IREADSJ, I_DO_PRODEXP, ICEXC_MAX_ACT,
     &            ICOP_RANK_MAX, IEI_VERSION, I_DO_EI,
     &            THRES_SINGU,MXVC_I,MAXITM,MXCIVG, I_INT_HAM,
     &            I_FIX_INTERNAL, ICEXC_MAX_EXT,
     &            ICEXC_RANK_MIN_G(MXPCYC),ICEXC_RANK_MAX_G(MXPCYC),
     &            ICEXC_INT_G(MXPCYC), IPTCSPC_G(MXPCYC),
     &            ITCSPC_G(MXPCYC),NTEXC_G,IMCSCF_MET, ITRA_ROUTE,
     &            NORTCIX_SCVB_SPACE,NORTCI_SCVB_EXCIT, NORT_MET,
     &            I_DO_NORTCI, INI_MO_TP,INI_MO_ORT, INI_ORT_VBGAS,
     &            INI_CONF(MXPORB),
     &            NOB_INI_CONF,I_HAVE_INI_CONF,NOOEXC,NOOEXC_A,NOOEXC_S,
     &            MAXIT_MAC,MAXIT_MIC, I_AM_GIOVANNI,
     &            IOOE2_APR, I_DO_LINSEA_MCSCF, IH0_CSF, ICNFBAT, ! End of old
     &            I_USE_SUPSYM, I_NEGLECT_SUPSYM_FINAL_MO,
     &            I_DO_HF, I_DO_GAS, I_USE_LUCIA_FRAGMENTS,
     &            NOOEXC_IS, INVCNT, ISBSPPR, ISPSPPR_INI,
     &            INI_NROOT, ITG_SROOT, IROOT_SEL, ITG_SUPSYM,
     &            IFRZFST, ISEL_ONLY_INI, I_DO_SBCNF,
     &            ISBSPC_SEL, ISBSPC_SPC, ISBSPC_MINMAX(MXPORB,2),
     &            NSBSPC_ORB, MXP1_MAX, NP1, NP2, NQ, NPVAR,
     &            NPRVAR,NCONF_SUB,LOCC_SUB,ISBSPC_ORB(MXPORB),
     &            ISBSPC_ORB_INV(MXPORB), IAKBK_MET
      COMMON/CRUN/CSUPSYM,PROPER(20),ENVIRO,PADDY,PADDY2,CCFORM,
     &            IROOT_MET,RESP_OP(2,20),CSEQCI(MXPICI,MXPICI),
     &            AVE_OP(20),ITRACI_CR,ITRACI_CN,CMO_ORD

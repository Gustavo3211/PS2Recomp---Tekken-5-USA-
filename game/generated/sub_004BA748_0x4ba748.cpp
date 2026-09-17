#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BA748
// Address: 0x4ba748 - 0x4bb740
void sub_004BA748_0x4ba748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BA748_0x4ba748");
#endif

    switch (ctx->pc) {
        case 0x4ba74cu: goto label_4ba74c;
        case 0x4ba760u: goto label_4ba760;
        case 0x4ba808u: goto label_4ba808;
        case 0x4ba810u: goto label_4ba810;
        case 0x4ba830u: goto label_4ba830;
        case 0x4ba898u: goto label_4ba898;
        case 0x4ba8a0u: goto label_4ba8a0;
        case 0x4ba8b4u: goto label_4ba8b4;
        case 0x4baab8u: goto label_4baab8;
        case 0x4baad4u: goto label_4baad4;
        case 0x4bab18u: goto label_4bab18;
        case 0x4bab60u: goto label_4bab60;
        case 0x4bac54u: goto label_4bac54;
        case 0x4bac64u: goto label_4bac64;
        case 0x4bae30u: goto label_4bae30;
        case 0x4bae5cu: goto label_4bae5c;
        case 0x4bae80u: goto label_4bae80;
        case 0x4baea4u: goto label_4baea4;
        case 0x4bb064u: goto label_4bb064;
        case 0x4bb1f0u: goto label_4bb1f0;
        case 0x4bb5c8u: goto label_4bb5c8;
        case 0x4bb5f8u: goto label_4bb5f8;
        case 0x4bb63cu: goto label_4bb63c;
        case 0x4bb664u: goto label_4bb664;
        case 0x4bb6a0u: goto label_4bb6a0;
        case 0x4bb6b4u: goto label_4bb6b4;
        case 0x4bb6e0u: goto label_4bb6e0;
        case 0x4bb6e8u: goto label_4bb6e8;
        case 0x4bb6f0u: goto label_4bb6f0;
        case 0x4bb6f8u: goto label_4bb6f8;
        case 0x4bb708u: goto label_4bb708;
        case 0x4bb720u: goto label_4bb720;
        case 0x4bb728u: goto label_4bb728;
        default: break;
    }

    ctx->pc = 0x4ba748u;

    // 0x4ba748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ba748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ba74c:
    // 0x4ba74c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ba74cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ba750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ba750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ba754: 0x3e00008  jr          $ra
    ctx->pc = 0x4BA754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA754u;
        // 0x4ba758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BA754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BA75Cu;
    // 0x4ba75c: 0x0  nop
    ctx->pc = 0x4ba75cu;
    // NOP
label_4ba760:
    // 0x4ba760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ba760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4ba764: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x4ba764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4ba768: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4ba768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4ba76c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4ba76cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba770: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ba770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ba774: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ba774u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ba778: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4ba778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4ba77c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ba77cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ba780: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ba780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4ba784: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4ba784u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4ba788: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4ba788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4ba78c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4ba78cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4ba790: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4ba790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4ba794: 0x3c150073  lui         $s5, 0x73
    ctx->pc = 0x4ba794u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
    // 0x4ba798: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4ba798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4ba79c: 0x26960130  addiu       $s6, $s4, 0x130
    ctx->pc = 0x4ba79cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 304));
    // 0x4ba7a0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4ba7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4ba7a4: 0x26970132  addiu       $s7, $s4, 0x132
    ctx->pc = 0x4ba7a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 306));
    // 0x4ba7a8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4ba7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4ba7ac: 0x269e0134  addiu       $fp, $s4, 0x134
    ctx->pc = 0x4ba7acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 308));
    // 0x4ba7b0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4ba7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4ba7b4: 0x2683011e  addiu       $v1, $s4, 0x11E
    ctx->pc = 0x4ba7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 286));
    // 0x4ba7b8: 0xa682015a  sh          $v0, 0x15A($s4)
    ctx->pc = 0x4ba7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ba7bc: 0x2682011a  addiu       $v0, $s4, 0x11A
    ctx->pc = 0x4ba7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 282));
    // 0x4ba7c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4ba7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4ba7c4: 0x26730de8  addiu       $s3, $s3, 0xDE8
    ctx->pc = 0x4ba7c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3560));
    // 0x4ba7c8: 0x26100ddc  addiu       $s0, $s0, 0xDDC
    ctx->pc = 0x4ba7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3548));
    // 0x4ba7cc: 0x26310de4  addiu       $s1, $s1, 0xDE4
    ctx->pc = 0x4ba7ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3556));
    // 0x4ba7d0: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4ba7d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ba7d4: 0x26b5d680  addiu       $s5, $s5, -0x2980
    ctx->pc = 0x4ba7d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956672));
    // 0x4ba7d8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4ba7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4ba7dc: 0x26830122  addiu       $v1, $s4, 0x122
    ctx->pc = 0x4ba7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 290));
    // 0x4ba7e0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4ba7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4ba7e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4ba7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ba7e8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ba7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ba7ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4ba7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4ba7f0: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x4ba7f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ba7f4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ba7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ba7f8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4ba7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ba7fc: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x4ba7fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4ba800: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4BA800u;
    SET_GPR_U32(ctx, 31, 0x4BA808u);
    ctx->pc = 0x4BA804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA800u;
    // 0x4ba804: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4BA800u, 0x4BA808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA808u;
label_4ba808:
    // 0x4ba808: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4BA808u;
    SET_GPR_U32(ctx, 31, 0x4BA810u);
    ctx->pc = 0x4BA80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA808u;
    // 0x4ba80c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4BA808u, 0x4BA810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA810u;
label_4ba810:
    // 0x4ba810: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ba810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ba814: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4ba814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ba818: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ba818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ba81c: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4ba81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4ba820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ba820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba824: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ba824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ba828: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BA828u;
    SET_GPR_U32(ctx, 31, 0x4BA830u);
    ctx->pc = 0x4BA82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA828u;
    // 0x4ba82c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BA828u, 0x4BA830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA830u;
label_4ba830:
    // 0x4ba830: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ba830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ba834: 0x24c60dd8  addiu       $a2, $a2, 0xDD8
    ctx->pc = 0x4ba834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3544));
    // 0x4ba838: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4ba838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ba83c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4ba83cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DD8u));
    // 0x4ba840: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4ba840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4ba844: 0x96070000  lhu         $a3, 0x0($s0)
    ctx->pc = 0x4ba844u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba848: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ba848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ba84c: 0x34840fa0  ori         $a0, $a0, 0xFA0
    ctx->pc = 0x4ba84cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4000);
    // 0x4ba850: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ba850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ba854: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba858: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ba858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ba85c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4ba85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4ba860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ba860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba864: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x4ba864u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ba868: 0x26100dec  addiu       $s0, $s0, 0xDEC
    ctx->pc = 0x4ba868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3564));
    // 0x4ba86c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ba86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ba870: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ba870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ba874: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4ba874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ba878: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ba878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ba87c: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x4ba87cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ba880: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x4ba880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ba884: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4ba884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4ba888: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ba888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ba88c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ba88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ba890: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BA890u;
    SET_GPR_U32(ctx, 31, 0x4BA898u);
    ctx->pc = 0x4BA894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA890u;
    // 0x4ba894: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BA890u, 0x4BA898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA898u;
label_4ba898:
    // 0x4ba898: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BA898u;
    SET_GPR_U32(ctx, 31, 0x4BA8A0u);
    ctx->pc = 0x4BA89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA898u;
    // 0x4ba89c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BA898u, 0x4BA8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA8A0u;
label_4ba8a0:
    // 0x4ba8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ba8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba8a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4ba8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4ba8a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4ba8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba8ac: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x4BA8ACu;
    SET_GPR_U32(ctx, 31, 0x4BA8B4u);
    ctx->pc = 0x4BA8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA8ACu;
    // 0x4ba8b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x4BA8ACu, 0x4BA8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA8B4u;
label_4ba8b4:
    // 0x4ba8b4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ba8b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ba8b8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ba8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ba8bc: 0x26890010  addiu       $t1, $s4, 0x10
    ctx->pc = 0x4ba8bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4ba8c0: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x4ba8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ba8c4: 0x268a0014  addiu       $t2, $s4, 0x14
    ctx->pc = 0x4ba8c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4ba8c8: 0x268b0018  addiu       $t3, $s4, 0x18
    ctx->pc = 0x4ba8c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x4ba8cc: 0x26ac2494  addiu       $t4, $s5, 0x2494
    ctx->pc = 0x4ba8ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), 9364));
    // 0x4ba8d0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4ba8d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ba8d4: 0x26ad2498  addiu       $t5, $s5, 0x2498
    ctx->pc = 0x4ba8d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), 9368));
    // 0x4ba8d8: 0x26ae249c  addiu       $t6, $s5, 0x249C
    ctx->pc = 0x4ba8d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 21), 9372));
    // 0x4ba8dc: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x4ba8dcu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ba8e0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ba8e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba8e4: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x4ba8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ba8e8: 0x8c880df0  lw          $t0, 0xDF0($a0)
    ctx->pc = 0x4ba8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0DF0u));
    // 0x4ba8ec: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4ba8ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ba8f0: 0x8d020050  lw          $v0, 0x50($t0)
    ctx->pc = 0x4ba8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x4ba8f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4ba8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ba8f8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ba8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ba8fc: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x4ba8fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ba900: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ba900u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ba904: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ba904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ba908: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ba908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ba90c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4ba90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ba910: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4ba910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4ba914: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x4ba914u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba918: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ba918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ba91c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ba91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ba920: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4ba920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4ba924: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x4ba924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x4ba928: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ba928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba92c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ba92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ba930: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4ba930u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ba934: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ba934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ba938: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba93c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4ba93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4ba940: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4ba940u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4ba944: 0xd23025  or          $a2, $a2, $s2
    ctx->pc = 0x4ba944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    // 0x4ba948: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ba948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ba94c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4ba94cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4ba950: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4ba950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4ba954: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x4ba954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x4ba958: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ba958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ba95c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ba95cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ba960: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4ba960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4ba964: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x4ba964u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x4ba968: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4ba968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4ba96c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ba96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ba970: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4ba970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ba974: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ba974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ba978: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4ba978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4ba97c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4ba97cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4ba980: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4ba980u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ba984: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4ba984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ba988: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ba988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ba98c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ba98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ba990: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba994: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ba994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ba998: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4ba998u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4ba99c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4ba99cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ba9a0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4ba9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ba9a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ba9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ba9a8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ba9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ba9ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ba9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ba9b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ba9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ba9b4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4ba9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4ba9b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4ba9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ba9bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4ba9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ba9c0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4ba9c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ba9c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ba9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ba9c8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4ba9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ba9cc: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4ba9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4ba9d0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ba9d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ba9d4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ba9d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ba9d8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4ba9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4ba9dc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ba9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ba9e0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4ba9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4ba9e4: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4ba9e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ba9e8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ba9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ba9ec: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4ba9ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ba9f0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4ba9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4ba9f4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ba9f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ba9f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4ba9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ba9fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4ba9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4baa00: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4baa00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4baa04: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4baa04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4baa08: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x4baa08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4baa0c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4baa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4baa10: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4baa10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4baa14: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4baa14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4baa18: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4baa18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4baa1c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4baa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4baa20: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4baa20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4baa24: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x4baa24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x4baa28: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4baa28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4baa2c: 0x8dab0000  lw          $t3, 0x0($t5)
    ctx->pc = 0x4baa2cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4baa30: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4baa30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4baa34: 0x8dca0000  lw          $t2, 0x0($t6)
    ctx->pc = 0x4baa34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4baa38: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4baa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4baa3c: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4baa3cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4baa40: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4baa40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4baa44: 0x1725825  or          $t3, $t3, $s2
    ctx->pc = 0x4baa44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 18));
    // 0x4baa48: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4baa48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4baa4c: 0x1525025  or          $t2, $t2, $s2
    ctx->pc = 0x4baa4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 18));
    // 0x4baa50: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x4baa50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4baa54: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4baa54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4baa58: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x4baa58u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4baa5c: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x4baa5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x4baa60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4baa60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4baa64: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4baa64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4baa68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4baa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4baa6c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4baa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4baa70: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4baa70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4baa74: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x4baa74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4baa78: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4baa78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4baa7c: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x4baa7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4baa80: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x4baa80u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x4baa84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4baa84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4baa88: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4baa88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4baa8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4baa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4baa90: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4baa90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4baa94: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4baa94u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4baa98: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4baa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4baa9c: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x4baa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x4baaa0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4baaa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4baaa4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4baaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4baaa8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4baaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4baaac: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4baaacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4baab0: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4BAAB0u;
    SET_GPR_U32(ctx, 31, 0x4BAAB8u);
    ctx->pc = 0x4BAAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAAB0u;
    // 0x4baab4: 0xadca0000  sw          $t2, 0x0($t6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4BAAB0u, 0x4BAAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAAB8u;
label_4baab8:
    // 0x4baab8: 0x96a224a0  lhu         $v0, 0x24A0($s5)
    ctx->pc = 0x4baab8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 9376)));
    // 0x4baabc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4baabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baac0: 0xa6820118  sh          $v0, 0x118($s4)
    ctx->pc = 0x4baac0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x4baac4: 0x96a324a2  lhu         $v1, 0x24A2($s5)
    ctx->pc = 0x4baac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 9378)));
    // 0x4baac8: 0xa6800120  sh          $zero, 0x120($s4)
    ctx->pc = 0x4baac8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4baacc: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4BAACCu;
    SET_GPR_U32(ctx, 31, 0x4BAAD4u);
    ctx->pc = 0x4BAAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAACCu;
    // 0x4baad0: 0xa683011c  sh          $v1, 0x11C($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4BAACCu, 0x4BAAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAAD4u;
label_4baad4:
    // 0x4baad4: 0x268301bc  addiu       $v1, $s4, 0x1BC
    ctx->pc = 0x4baad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
    // 0x4baad8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4baad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4baadc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4baadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baae0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4baae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4baae4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4baae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4baae8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4baae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4baaec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4baaecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4baaf0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4baaf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4baaf4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4baaf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4baaf8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4baaf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4baafc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4baafcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bab00: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4bab00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bab04: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4bab04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4bab08: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4bab08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4bab0c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bab0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bab10: 0x812eac6  j           func_4BAB18
    ctx->pc = 0x4BAB10u;
    ctx->pc = 0x4BAB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAB10u;
    // 0x4bab14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BAB18u;
    goto label_4bab18;
    ctx->pc = 0x4BAB18u;
label_4bab18:
    // 0x4bab18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4bab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4bab1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4bab1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4bab20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bab20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bab24: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4bab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4bab28: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4bab28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4bab2c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4bab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4bab30: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4bab30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4bab34: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4bab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4bab38: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4bab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4bab3c: 0x2615011a  addiu       $s5, $s0, 0x11A
    ctx->pc = 0x4bab3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 282));
    // 0x4bab40: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4bab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4bab44: 0x2616011e  addiu       $s6, $s0, 0x11E
    ctx->pc = 0x4bab44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 286));
    // 0x4bab48: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4bab48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4bab4c: 0x26170122  addiu       $s7, $s0, 0x122
    ctx->pc = 0x4bab4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 290));
    // 0x4bab50: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4bab50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4bab54: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4bab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4bab58: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4BAB58u;
    SET_GPR_U32(ctx, 31, 0x4BAB60u);
    ctx->pc = 0x4BAB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAB58u;
    // 0x4bab5c: 0x261e0134  addiu       $fp, $s0, 0x134 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4BAB58u, 0x4BAB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAB60u;
label_4bab60:
    // 0x4bab60: 0x26020130  addiu       $v0, $s0, 0x130
    ctx->pc = 0x4bab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x4bab64: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bab64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bab68: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4bab68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4bab6c: 0x24720de4  addiu       $s2, $v1, 0xDE4
    ctx->pc = 0x4bab6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3556));
    // 0x4bab70: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bab70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bab74: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4bab74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4bab78: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x4bab78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bab7c: 0x24730de8  addiu       $s3, $v1, 0xDE8
    ctx->pc = 0x4bab7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 3560));
    // 0x4bab80: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4bab80u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0DE4u));
    // 0x4bab84: 0x26030132  addiu       $v1, $s0, 0x132
    ctx->pc = 0x4bab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 306));
    // 0x4bab88: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bab8c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4bab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4bab90: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bab90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bab94: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bab94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bab98: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bab98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bab9c: 0x24740dec  addiu       $s4, $v1, 0xDEC
    ctx->pc = 0x4bab9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3564));
    // 0x4baba0: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4baba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4baba4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4baba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4baba8: 0x25290ddc  addiu       $t1, $t1, 0xDDC
    ctx->pc = 0x4baba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3548));
    // 0x4babac: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4babacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4babb0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4babb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4babb4: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4babb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4babb8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4babb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4babbc: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4babbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4babc0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4babc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4babc4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4babc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4babc8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4babc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4babcc: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4babccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4babd0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4babd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4babd4: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4babd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4babd8: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4babd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4babdc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4babdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4babe0: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x4babe0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4babe4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4babe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4babe8: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4babe8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4babec: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4babecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4babf0: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4babf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4babf4: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4babf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4babf8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4babf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4babfc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4babfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4bac00: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4bac00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4bac04: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4bac04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4bac08: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4bac08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bac0c: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4bac0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4bac10: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4bac10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4bac14: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4bac14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4bac18: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4bac18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4bac1c: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4bac1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4bac20: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x4bac20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x4bac24: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4bac24u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4bac28: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4bac28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4bac2c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4bac2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4bac30: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4bac30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4bac34: 0x9203015b  lbu         $v1, 0x15B($s0)
    ctx->pc = 0x4bac34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 347)));
    // 0x4bac38: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4bac38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4bac3c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4bac3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bac40: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x4bac40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x4bac44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4bac44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4bac48: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4bac48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4bac4c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4BAC4Cu;
    SET_GPR_U32(ctx, 31, 0x4BAC54u);
    ctx->pc = 0x4BAC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAC4Cu;
    // 0x4bac50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4BAC4Cu, 0x4BAC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAC54u;
label_4bac54:
    // 0x4bac54: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4BAC54u;
    {
        const bool branch_taken_0x4bac54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bac54) {
            ctx->pc = 0x4BAC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BAC54u;
            // 0x4bac58: 0x86a30000  lh          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BACA8u;
            goto label_4baca8;
        }
    }
    ctx->pc = 0x4BAC5Cu;
    // 0x4bac5c: 0xc12b9d0  jal         func_4AE740
    ctx->pc = 0x4BAC5Cu;
    SET_GPR_U32(ctx, 31, 0x4BAC64u);
    ctx->pc = 0x4BAC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAC5Cu;
    // 0x4bac60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE740u, 0x4BAC5Cu, 0x4BAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAC64u;
label_4bac64:
    // 0x4bac64: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x4bac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x4bac68: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bac68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bac6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bac6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bac70: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4bac70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bac74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4bac74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bac78: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x4bac78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x4bac7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4bac7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bac80: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4bac80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bac84: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4bac84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bac88: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4bac88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bac8c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4bac8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bac90: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4bac90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bac94: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4bac94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4bac98: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4bac98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4bac9c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bac9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4baca0: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4BACA0u;
    ctx->pc = 0x4BACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BACA0u;
    // 0x4baca4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4BACA8u;
label_4baca8:
    // 0x4baca8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4baca8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4bacac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4bacacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bacb0: 0x260b0010  addiu       $t3, $s0, 0x10
    ctx->pc = 0x4bacb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4bacb4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4bacb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4bacb8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4bacb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bacbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bacbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bacc0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4bacc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bacc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bacc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bacc8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bacc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4baccc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4bacccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4bacd0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bacd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bacd4: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x4bacd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4bacd8: 0x260c0018  addiu       $t4, $s0, 0x18
    ctx->pc = 0x4bacd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4bacdc: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4bacdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bace0: 0x260d01bc  addiu       $t5, $s0, 0x1BC
    ctx->pc = 0x4bace0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4bace4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4bace4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bace8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bace8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bacec: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bacecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bacf0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bacf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bacf4: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4bacf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4bacf8: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4bacf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4bacfc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4bacfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4bad00: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4bad00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4bad04: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4bad04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4bad08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4bad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bad0c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4bad0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bad10: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4bad10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bad14: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4bad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4bad18: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bad18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bad1c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4bad1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bad20: 0xa7c30000  sh          $v1, 0x0($fp)
    ctx->pc = 0x4bad20u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bad24: 0x8ce90df0  lw          $t1, 0xDF0($a3)
    ctx->pc = 0x4bad24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3568)));
    // 0x4bad28: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4bad28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bad2c: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x4bad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x4bad30: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4bad30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bad34: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4bad34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4bad38: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4bad38u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bad3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bad3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bad40: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bad40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bad44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4bad44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4bad48: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4bad48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bad4c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4bad4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4bad50: 0x86880000  lh          $t0, 0x0($s4)
    ctx->pc = 0x4bad50u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bad54: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4bad54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4bad58: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bad58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bad5c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4bad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4bad60: 0x8d220054  lw          $v0, 0x54($t1)
    ctx->pc = 0x4bad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
    // 0x4bad64: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4bad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bad68: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4bad68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4bad6c: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4bad6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bad70: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bad70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bad74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bad74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bad78: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4bad78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bad7c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4bad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4bad80: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4bad80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4bad84: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bad84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bad88: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4bad88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4bad8c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4bad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4bad90: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x4bad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x4bad94: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4bad94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4bad98: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bad98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bad9c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4bad9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4bada0: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4bada0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4bada4: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4bada4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4bada8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4bada8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4badac: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4badacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4badb0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4badb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4badb4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4badb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4badb8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4badb8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4badbc: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4badbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4badc0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4badc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4badc4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4badc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4badc8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4badc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4badcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4badccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4badd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4badd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4badd4: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4badd4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4badd8: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4badd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4baddc: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4baddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bade0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4bade0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4bade4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4bade4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bade8: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4bade8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4badec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4badecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4badf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4badf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4badf4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4badf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4badf8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4badf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4badfc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4badfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bae00: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4bae00u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4bae04: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4bae04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bae08: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4bae08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4bae0c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4bae0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bae10: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4bae10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bae14: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bae18: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4bae18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bae1c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4bae1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4bae20: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4bae20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4bae24: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4bae24u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bae28: 0x812eb8c  j           func_4BAE30
    ctx->pc = 0x4BAE28u;
    ctx->pc = 0x4BAE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAE28u;
    // 0x4bae2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BAE30u;
    goto label_4bae30;
    ctx->pc = 0x4BAE30u;
label_4bae30:
    // 0x4bae30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bae34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4bae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bae38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bae3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bae3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bae40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4bae40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4bae44: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4bae44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4bae48: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x4bae48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bae4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4bae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4bae50: 0xa600015a  sh          $zero, 0x15A($s0)
    ctx->pc = 0x4bae50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bae54: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4BAE54u;
    SET_GPR_U32(ctx, 31, 0x4BAE5Cu);
    ctx->pc = 0x4BAE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAE54u;
    // 0x4bae58: 0xa462f9ac  sh          $v0, -0x654($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965676), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4BAE54u, 0x4BAE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAE5Cu;
label_4bae5c:
    // 0x4bae5c: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4bae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4bae60: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bae60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bae64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bae64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bae68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4bae68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bae6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bae6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bae70: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bae74: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bae74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bae78: 0x812eba0  j           func_4BAE80
    ctx->pc = 0x4BAE78u;
    ctx->pc = 0x4BAE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAE78u;
    // 0x4bae7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BAE80u;
    goto label_4bae80;
    ctx->pc = 0x4BAE80u;
label_4bae80:
    // 0x4bae80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bae84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bae88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bae8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bae8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bae90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bae90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bae94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4bae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4bae98: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4bae98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4bae9c: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4BAE9Cu;
    SET_GPR_U32(ctx, 31, 0x4BAEA4u);
    ctx->pc = 0x4BAEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAE9Cu;
    // 0x4baea0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4BAE9Cu, 0x4BAEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAEA4u;
label_4baea4:
    // 0x4baea4: 0x2642015e  addiu       $v0, $s2, 0x15E
    ctx->pc = 0x4baea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 350));
    // 0x4baea8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4baea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4baeac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4baeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4baeb0: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x4baeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4baeb4: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4BAEB4u;
    {
        const bool branch_taken_0x4baeb4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4BAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAEB4u;
        // 0x4baeb8: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baeb4) {
            ctx->pc = 0x4BAEE0u;
            goto label_4baee0;
        }
    }
    ctx->pc = 0x4BAEBCu;
    // 0x4baebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4baebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baec0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4baec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4baec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4baec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4baec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4baec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4baecc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4baeccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4baed0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4baed0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4baed4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4baed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4baed8: 0x812ed88  j           func_4BB620
    ctx->pc = 0x4BAED8u;
    ctx->pc = 0x4BAEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAED8u;
    // 0x4baedc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BB620u;
    goto label_4bb620;
    ctx->pc = 0x4BAEE0u;
label_4baee0:
    // 0x4baee0: 0x24020428  addiu       $v0, $zero, 0x428
    ctx->pc = 0x4baee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    // 0x4baee4: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x4baee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x4baee8: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x4baee8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4baeec: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4baeecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4baef0: 0xa643015a  sh          $v1, 0x15A($s2)
    ctx->pc = 0x4baef0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 346), (uint16_t)GPR_U32(ctx, 3));
    // 0x4baef4: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4baef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4baef8: 0xa64001c2  sh          $zero, 0x1C2($s2)
    ctx->pc = 0x4baef8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 450), (uint16_t)GPR_U32(ctx, 0));
    // 0x4baefc: 0x2654011c  addiu       $s4, $s2, 0x11C
    ctx->pc = 0x4baefcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 284));
    // 0x4baf00: 0xa640000e  sh          $zero, 0xE($s2)
    ctx->pc = 0x4baf00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x4baf04: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4baf04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4baf08: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4baf08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4baf0c: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4baf0cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4baf10: 0x96020076  lhu         $v0, 0x76($s0)
    ctx->pc = 0x4baf10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D6F6u));
    // 0x4baf14: 0x25080de4  addiu       $t0, $t0, 0xDE4
    ctx->pc = 0x4baf14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3556));
    // 0x4baf18: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4baf18u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4baf1c: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4baf1cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4baf20: 0xa6420118  sh          $v0, 0x118($s2)
    ctx->pc = 0x4baf20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x4baf24: 0x254a0de8  addiu       $t2, $t2, 0xDE8
    ctx->pc = 0x4baf24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3560));
    // 0x4baf28: 0x256b0dec  addiu       $t3, $t3, 0xDEC
    ctx->pc = 0x4baf28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3564));
    // 0x4baf2c: 0x260e2494  addiu       $t6, $s0, 0x2494
    ctx->pc = 0x4baf2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 9364));
    // 0x4baf30: 0x96020074  lhu         $v0, 0x74($s0)
    ctx->pc = 0x4baf30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D6F4u));
    // 0x4baf34: 0x260f2498  addiu       $t7, $s0, 0x2498
    ctx->pc = 0x4baf34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 9368));
    // 0x4baf38: 0x2611249c  addiu       $s1, $s0, 0x249C
    ctx->pc = 0x4baf38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9372));
    // 0x4baf3c: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4baf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4baf40: 0xa6400120  sh          $zero, 0x120($s2)
    ctx->pc = 0x4baf40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4baf44: 0x8c890df0  lw          $t1, 0xDF0($a0)
    ctx->pc = 0x4baf44u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0DF0u));
    // 0x4baf48: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4baf48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DE4u));
    // 0x4baf4c: 0x85220002  lh          $v0, 0x2($t1)
    ctx->pc = 0x4baf4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x4baf50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4baf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4baf54: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4baf54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0DE8u));
    // 0x4baf58: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4baf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4baf5c: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4baf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0DECu));
    // 0x4baf60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4baf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4baf64: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4baf64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4baf68: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4baf68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4baf6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4baf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4baf70: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4baf70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4baf74: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4baf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4baf78: 0x8dcc0000  lw          $t4, 0x0($t6)
    ctx->pc = 0x4baf78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4baf7c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4baf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4baf80: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4baf80u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4baf84: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4baf84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4baf88: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x4baf88u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4baf8c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4baf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4baf90: 0x1936025  or          $t4, $t4, $s3
    ctx->pc = 0x4baf90u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 19));
    // 0x4baf94: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4baf94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4baf98: 0x1b36825  or          $t5, $t5, $s3
    ctx->pc = 0x4baf98u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 19));
    // 0x4baf9c: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4baf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4bafa0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bafa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bafa4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x4bafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x4bafa8: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4bafa8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bafac: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4bafacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4bafb0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bafb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bafb4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4bafb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4bafb8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bafb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bafbc: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4bafbcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4bafc0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bafc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bafc4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4bafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4bafc8: 0x85690000  lh          $t1, 0x0($t3)
    ctx->pc = 0x4bafc8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bafcc: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4bafccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4bafd0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bafd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bafd4: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4bafd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bafd8: 0xd33025  or          $a2, $a2, $s3
    ctx->pc = 0x4bafd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    // 0x4bafdc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4bafdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4bafe0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4bafe0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4bafe4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4bafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4bafe8: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4bafe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bafec: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4bafecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4baff0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4baff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4baff4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4baff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4baff8: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4baff8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4baffc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4baffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb000: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x4bb000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x4bb004: 0x1836024  and         $t4, $t4, $v1
    ctx->pc = 0x4bb004u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x4bb008: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4bb008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4bb00c: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4bb00cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4bb010: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4bb010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4bb014: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x4bb014u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bb018: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4bb018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4bb01c: 0xadcc0000  sw          $t4, 0x0($t6)
    ctx->pc = 0x4bb01cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 12));
    // 0x4bb020: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb020u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb024: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4bb024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4bb028: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4bb028u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4bb02c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb030: 0x1334825  or          $t1, $t1, $s3
    ctx->pc = 0x4bb030u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 19));
    // 0x4bb034: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x4bb034u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x4bb038: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x4bb038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x4bb03c: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4bb03cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4bb040: 0xaded0000  sw          $t5, 0x0($t7)
    ctx->pc = 0x4bb040u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 13));
    // 0x4bb044: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4bb044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bb048: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4bb048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bb04c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bb04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bb050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bb050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bb054: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4bb054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4bb058: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb05c: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4BB05Cu;
    SET_GPR_U32(ctx, 31, 0x4BB064u);
    ctx->pc = 0x4BB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB05Cu;
    // 0x4bb060: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4BB05Cu, 0x4BB064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB064u;
label_4bb064:
    // 0x4bb064: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4bb064u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4bb068: 0x24c40dd8  addiu       $a0, $a2, 0xDD8
    ctx->pc = 0x4bb068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 3544));
    // 0x4bb06c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4bb06cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bb070: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bb070u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DD8u));
    // 0x4bb074: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4bb074u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4bb078: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4bb078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4bb07c: 0x960524a2  lhu         $a1, 0x24A2($s0)
    ctx->pc = 0x4bb07cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9378)));
    // 0x4bb080: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb084: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb088: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bb088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4bb08c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4bb08cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bb090: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4bb090u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4bb094: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bb094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bb098: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BB098u;
    {
        const bool branch_taken_0x4bb098 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BB09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB098u;
        // 0x4bb09c: 0x25870ddc  addiu       $a3, $t4, 0xDDC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 3548));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb098) {
            ctx->pc = 0x4BB0B0u;
            goto label_4bb0b0;
        }
    }
    ctx->pc = 0x4BB0A0u;
    // 0x4bb0a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4bb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bb0a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BB0A4u;
    {
        const bool branch_taken_0x4bb0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB0A4u;
        // 0x4bb0a8: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb0a4) {
            ctx->pc = 0x4BB0B8u;
            goto label_4bb0b8;
        }
    }
    ctx->pc = 0x4BB0ACu;
    // 0x4bb0ac: 0x0  nop
    ctx->pc = 0x4bb0acu;
    // NOP
label_4bb0b0:
    // 0x4bb0b0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4bb0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bb0b4: 0x532024  and         $a0, $v0, $s3
    ctx->pc = 0x4bb0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_4bb0b8:
    // 0x4bb0b8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4bb0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4bb0bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bb0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb0c0: 0x24a50de0  addiu       $a1, $a1, 0xDE0
    ctx->pc = 0x4bb0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3552));
    // 0x4bb0c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4bb0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x4bb0c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bb0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DE0u));
    // 0x4bb0cc: 0x258c0ddc  addiu       $t4, $t4, 0xDDC
    ctx->pc = 0x4bb0ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3548));
    // 0x4bb0d0: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4bb0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4bb0d4: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4bb0d4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb0d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb0dc: 0x24c60dd8  addiu       $a2, $a2, 0xDD8
    ctx->pc = 0x4bb0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3544));
    // 0x4bb0e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb0e4: 0x95840000  lhu         $a0, 0x0($t4)
    ctx->pc = 0x4bb0e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bb0e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bb0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bb0ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb0f0: 0x44c00  sll         $t1, $a0, 16
    ctx->pc = 0x4bb0f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4bb0f4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4bb0f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb0f8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bb0f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bb0fc: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x4bb0fcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x4bb100: 0x84c80000  lh          $t0, 0x0($a2)
    ctx->pc = 0x4bb100u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb104: 0x354a0010  ori         $t2, $t2, 0x10
    ctx->pc = 0x4bb104u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16);
    // 0x4bb108: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4bb108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4bb10c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bb10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb110: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bb110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bb114: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x4bb114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb118: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb118u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb11c: 0x264d01bc  addiu       $t5, $s2, 0x1BC
    ctx->pc = 0x4bb11cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
    // 0x4bb120: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4bb120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4bb124: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bb124u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bb128: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb12c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bb12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bb130: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bb130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bb134: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb138: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bb138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bb13c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4bb13cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bb140: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bb140u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bb144: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x4bb144u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4bb148: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4bb148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bb14c: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4bb14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4bb150: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb154: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4bb154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4bb158: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4bb158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bb15c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4bb15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4bb160: 0x10b4025  or          $t0, $t0, $t3
    ctx->pc = 0x4bb160u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 11));
    // 0x4bb164: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4bb164u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4bb168: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x4bb168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x4bb16c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4bb16cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb170: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4bb170u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bb174: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bb174u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bb178: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bb178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb17c: 0x95870000  lhu         $a3, 0x0($t4)
    ctx->pc = 0x4bb17cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bb180: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb184: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4bb184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4bb188: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x4bb188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4bb18c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bb18cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bb190: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb194: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4bb194u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4bb198: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4bb198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb19c: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4bb19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4bb1a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bb1a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb1a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb1a8: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4bb1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4bb1ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb1b0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bb1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bb1b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb1b8: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4bb1b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb1bc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4bb1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4bb1c0: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4bb1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4bb1c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb1c8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bb1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bb1cc: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x4bb1ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb1d0: 0xa6450160  sh          $a1, 0x160($s2)
    ctx->pc = 0x4bb1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 352), (uint16_t)GPR_U32(ctx, 5));
    // 0x4bb1d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bb1d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bb1d8: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4bb1d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4bb1dc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bb1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bb1e0: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4bb1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bb1e4: 0x812ed88  j           func_4BB620
    ctx->pc = 0x4BB1E4u;
    ctx->pc = 0x4BB1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB1E4u;
    // 0x4bb1e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BB620u;
    goto label_4bb620;
    ctx->pc = 0x4BB1ECu;
    // 0x4bb1ec: 0x0  nop
    ctx->pc = 0x4bb1ecu;
    // NOP
label_4bb1f0:
    // 0x4bb1f0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4bb1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4bb1f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bb1f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bb1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bb1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4bb1fc: 0x24a60dd8  addiu       $a2, $a1, 0xDD8
    ctx->pc = 0x4bb1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3544));
    // 0x4bb200: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4bb200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb204: 0x248a0160  addiu       $t2, $a0, 0x160
    ctx->pc = 0x4bb204u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x4bb208: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bb208u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0DD8u));
    // 0x4bb20c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4bb20cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb210: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4bb210u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bb214: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4bb214u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4bb218: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bb218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bb21c: 0x248b0120  addiu       $t3, $a0, 0x120
    ctx->pc = 0x4bb21cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x4bb220: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4bb220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4bb224: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bb224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bb228: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4bb228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4bb22c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4bb22cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bb230: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BB230u;
    {
        const bool branch_taken_0x4bb230 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4BB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB230u;
        // 0x4bb234: 0x25230ddc  addiu       $v1, $t1, 0xDDC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 3548));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb230) {
            ctx->pc = 0x4BB248u;
            goto label_4bb248;
        }
    }
    ctx->pc = 0x4BB238u;
    // 0x4bb238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4bb238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bb23c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BB23Cu;
    {
        const bool branch_taken_0x4bb23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB23Cu;
        // 0x4bb240: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb23c) {
            ctx->pc = 0x4BB250u;
            goto label_4bb250;
        }
    }
    ctx->pc = 0x4BB244u;
    // 0x4bb244: 0x0  nop
    ctx->pc = 0x4bb244u;
    // NOP
label_4bb248:
    // 0x4bb248: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4bb248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bb24c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4bb24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4bb250:
    // 0x4bb250: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4bb250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4bb254: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4bb254u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb258: 0x95270ddc  lhu         $a3, 0xDDC($t1)
    ctx->pc = 0x4bb258u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 3548)));
    // 0x4bb25c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4bb25cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb260: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bb260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb264: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x4bb264u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4bb268: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4bb268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4bb26c: 0x54c03  sra         $t1, $a1, 16
    ctx->pc = 0x4bb26cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4bb270: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bb270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bb274: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb278: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb278u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb27c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bb27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bb280: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb284: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bb284u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bb288: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb28c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4bb28cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb290: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x4bb290u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4bb294: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bb294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bb298: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb29c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bb29cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bb2a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb2a4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4bb2a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb2a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4bb2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4bb2ac: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bb2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bb2b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb2b4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bb2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bb2b8: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x4bb2b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb2bc: 0x2ca20600  sltiu       $v0, $a1, 0x600
    ctx->pc = 0x4bb2bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1536) ? 1 : 0);
    // 0x4bb2c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BB2C0u;
    {
        const bool branch_taken_0x4bb2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB2C0u;
        // 0x4bb2c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb2c0) {
            ctx->pc = 0x4BB2DCu;
            goto label_4bb2dc;
        }
    }
    ctx->pc = 0x4BB2C8u;
    // 0x4bb2c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb2cc: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x4bb2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
    // 0x4bb2d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4bb2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb2d4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4bb2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4bb2d8: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x4bb2d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4bb2dc:
    // 0x4bb2dc: 0xa71026  xor         $v0, $a1, $a3
    ctx->pc = 0x4bb2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 7));
    // 0x4bb2e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb2e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bb2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bb2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bb2ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb2ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb2f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb2f4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bb2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bb2f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb2fc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bb2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bb300: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x4bb300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb304: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4bb304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb308: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x4bb308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4bb30c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bb30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bb310: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bb310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bb314: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4bb314u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4bb318: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4bb318u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb31c: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4bb31cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bb320: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4bb320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bb324: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4bb324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bb328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bb328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4bb32c: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4bb32cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bb330: 0x812ecce  j           func_4BB338
    ctx->pc = 0x4BB330u;
    ctx->pc = 0x4BB334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB330u;
    // 0x4bb334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BB338u;
    goto label_4bb338;
    ctx->pc = 0x4BB338u;
label_4bb338:
    // 0x4bb338: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4bb338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4bb33c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4bb33cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bb340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bb344: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4bb344u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4bb348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bb348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bb34c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4bb34cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4bb350: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bb350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bb354: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4bb354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb358: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bb358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bb35c: 0x26530018  addiu       $s3, $s2, 0x18
    ctx->pc = 0x4bb35cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x4bb360: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4bb360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4bb364: 0x26310de4  addiu       $s1, $s1, 0xDE4
    ctx->pc = 0x4bb364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3556));
    // 0x4bb368: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4bb368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4bb36c: 0x26100de8  addiu       $s0, $s0, 0xDE8
    ctx->pc = 0x4bb36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3560));
    // 0x4bb370: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4bb370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4bb374: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4bb374u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4bb378: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4bb378u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4bb37c: 0x254a0dec  addiu       $t2, $t2, 0xDEC
    ctx->pc = 0x4bb37cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3564));
    // 0x4bb380: 0x86420130  lh          $v0, 0x130($s2)
    ctx->pc = 0x4bb380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x4bb384: 0x25ad0df0  addiu       $t5, $t5, 0xDF0
    ctx->pc = 0x4bb384u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3568));
    // 0x4bb388: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4bb388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DE4u));
    // 0x4bb38c: 0x264e0010  addiu       $t6, $s2, 0x10
    ctx->pc = 0x4bb38cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x4bb390: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bb390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bb394: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4bb394u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0DE8u));
    // 0x4bb398: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb39c: 0x264f0014  addiu       $t7, $s2, 0x14
    ctx->pc = 0x4bb39cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x4bb3a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb3a4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bb3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bb3a8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bb3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4bb3ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb3b0: 0x3c0b0073  lui         $t3, 0x73
    ctx->pc = 0x4bb3b0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)115 << 16));
    // 0x4bb3b4: 0x86420132  lh          $v0, 0x132($s2)
    ctx->pc = 0x4bb3b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 306)));
    // 0x4bb3b8: 0x256bd680  addiu       $t3, $t3, -0x2980
    ctx->pc = 0x4bb3b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956672));
    // 0x4bb3bc: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x4bb3bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4bb3c0: 0x2575249c  addiu       $s5, $t3, 0x249C
    ctx->pc = 0x4bb3c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 9372));
    // 0x4bb3c4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bb3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bb3c8: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x4bb3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bb3cc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4bb3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4bb3d0: 0x25742494  addiu       $s4, $t3, 0x2494
    ctx->pc = 0x4bb3d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 9364));
    // 0x4bb3d4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4bb3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4bb3d8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bb3d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bb3dc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bb3dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bb3e0: 0x256b2498  addiu       $t3, $t3, 0x2498
    ctx->pc = 0x4bb3e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9368));
    // 0x4bb3e4: 0x86420134  lh          $v0, 0x134($s2)
    ctx->pc = 0x4bb3e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x4bb3e8: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4bb3e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bb3ec: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bb3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bb3f0: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4bb3f0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bb3f4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bb3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bb3f8: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4bb3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4bb3fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bb3fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bb400: 0x8d820050  lw          $v0, 0x50($t4)
    ctx->pc = 0x4bb400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x4bb404: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4bb404u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bb408: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4bb408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4bb40c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb40cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb410: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4bb410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bb414: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4bb414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4bb418: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4bb418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4bb41c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bb41cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4bb420: 0x8d820054  lw          $v0, 0x54($t4)
    ctx->pc = 0x4bb420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x4bb424: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4bb424u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bb428: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4bb428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4bb42c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb42cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb430: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4bb430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4bb434: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4bb434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4bb438: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb43c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x4bb43cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x4bb440: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x4bb440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x4bb444: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4bb444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4bb448: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x4bb448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
    // 0x4bb44c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4bb44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4bb450: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb450u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb454: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4bb454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bb458: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x4bb458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4bb45c: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4bb45cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4bb460: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4bb460u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4bb464: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4bb464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4bb468: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bb468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bb46c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bb46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bb470: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4bb470u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4bb474: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4bb474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bb478: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4bb478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4bb47c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4bb47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4bb480: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bb480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bb484: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb488: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bb488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bb48c: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4bb48cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4bb490: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x4bb490u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bb494: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4bb494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bb498: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4bb498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4bb49c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bb49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bb4a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb4a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bb4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bb4a8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4bb4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4bb4ac: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x4bb4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4bb4b0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4bb4b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bb4b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bb4b8: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x4bb4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bb4bc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4bb4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4bb4c0: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4bb4c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bb4c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb4c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb4c8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4bb4c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4bb4cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4bb4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4bb4d0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4bb4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bb4d4: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4bb4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4bb4d8: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4bb4d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4bb4dc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bb4dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bb4e0: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x4bb4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x4bb4e4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4bb4e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4bb4e8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4bb4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4bb4ec: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4bb4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4bb4f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb4f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb4f4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4bb4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4bb4f8: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4bb4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x4bb4fc: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4bb4fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4bb500: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4bb500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4bb504: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bb504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bb508: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4bb508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4bb50c: 0x85440000  lh          $a0, 0x0($t2)
    ctx->pc = 0x4bb50cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bb510: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4bb510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4bb514: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4bb514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bb518: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bb518u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bb51c: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4bb51cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bb520: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4bb520u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4bb524: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb528: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4bb528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x4bb52c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4bb52cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bb530: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4bb530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4bb534: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4bb534u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4bb538: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4bb538u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4bb53c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb540: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4bb540u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4bb544: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4bb544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4bb548: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4bb548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bb54c: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4bb54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4bb550: 0x1064024  and         $t0, $t0, $a2
    ctx->pc = 0x4bb550u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x4bb554: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4bb554u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4bb558: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4bb558u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4bb55c: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x4bb55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x4bb560: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bb560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bb564: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4bb564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4bb568: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bb568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb56c: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x4bb56cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bb570: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4bb570u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4bb574: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4bb574u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4bb578: 0x95450000  lhu         $a1, 0x0($t2)
    ctx->pc = 0x4bb578u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bb57c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bb57cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bb580: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x4bb580u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bb584: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4bb584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bb588: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4bb588u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4bb58c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4bb58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bb590: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4bb590u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4bb594: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4bb594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bb598: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4bb598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4bb59c: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4bb59cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x4bb5a0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bb5a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bb5a4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4bb5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4bb5a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bb5a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bb5ac: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4bb5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4bb5b0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4bb5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4bb5b4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4bb5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4bb5b8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4bb5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4bb5bc: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4bb5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4bb5c0: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4BB5C0u;
    SET_GPR_U32(ctx, 31, 0x4BB5C8u);
    ctx->pc = 0x4BB5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB5C0u;
    // 0x4bb5c4: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4BB5C0u, 0x4BB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB5C8u;
label_4bb5c8:
    // 0x4bb5c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4bb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bb5cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4bb5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bb5d0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4bb5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb5d4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4bb5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x4bb5d8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bb5d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bb5dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bb5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bb5e0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4bb5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4bb5e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bb5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bb5e8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4bb5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4bb5ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4bb5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4bb5f0: 0xc12edd0  jal         func_4BB740
    ctx->pc = 0x4BB5F0u;
    SET_GPR_U32(ctx, 31, 0x4BB5F8u);
    ctx->pc = 0x4BB5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB5F0u;
    // 0x4bb5f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BB740u, 0x4BB5F0u, 0x4BB5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB5F8u;
label_4bb5f8:
    // 0x4bb5f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bb5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb5fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bb5fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bb600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bb600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bb604: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bb604u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bb608: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bb608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bb60c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bb60cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bb610: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bb610u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bb614: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4bb614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bb618: 0x812ed88  j           func_4BB620
    ctx->pc = 0x4BB618u;
    ctx->pc = 0x4BB61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB618u;
    // 0x4bb61c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BB620u;
    goto label_4bb620;
    ctx->pc = 0x4BB620u;
label_4bb620:
    // 0x4bb620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bb620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bb624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bb624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bb628: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4bb628u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb62c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bb62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bb630: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bb630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bb634: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4BB634u;
    SET_GPR_U32(ctx, 31, 0x4BB63Cu);
    ctx->pc = 0x4BB638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB634u;
    // 0x4bb638: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4BB634u, 0x4BB63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB63Cu;
label_4bb63c:
    // 0x4bb63c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bb63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bb640: 0x86240120  lh          $a0, 0x120($s1)
    ctx->pc = 0x4bb640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x4bb644: 0x24630dd8  addiu       $v1, $v1, 0xDD8
    ctx->pc = 0x4bb644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3544));
    // 0x4bb648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4bb648u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0DD8u));
    // 0x4bb64c: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4bb64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4bb650: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bb650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bb654: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4bb654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4bb658: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4bb658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4bb65c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4BB65Cu;
    SET_GPR_U32(ctx, 31, 0x4BB664u);
    ctx->pc = 0x4BB660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB65Cu;
    // 0x4bb660: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4BB65Cu, 0x4BB664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB664u;
label_4bb664:
    // 0x4bb664: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bb664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bb668: 0x508024  and         $s0, $v0, $s0
    ctx->pc = 0x4bb668u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4bb66c: 0x24630ddc  addiu       $v1, $v1, 0xDDC
    ctx->pc = 0x4bb66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3548));
    // 0x4bb670: 0x108402  srl         $s0, $s0, 16
    ctx->pc = 0x4bb670u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x4bb674: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4bb674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4bb678: 0xa6300026  sh          $s0, 0x26($s1)
    ctx->pc = 0x4bb678u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 16));
    // 0x4bb67c: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x4bb67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4bb680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bb680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb684: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bb684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bb688: 0xa625002c  sh          $a1, 0x2C($s1)
    ctx->pc = 0x4bb688u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x4bb68c: 0xa6250024  sh          $a1, 0x24($s1)
    ctx->pc = 0x4bb68cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 5));
    // 0x4bb690: 0xa6220028  sh          $v0, 0x28($s1)
    ctx->pc = 0x4bb690u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bb694: 0xa6200022  sh          $zero, 0x22($s1)
    ctx->pc = 0x4bb694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bb698: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4BB698u;
    SET_GPR_U32(ctx, 31, 0x4BB6A0u);
    ctx->pc = 0x4BB69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB698u;
    // 0x4bb69c: 0xa620002a  sh          $zero, 0x2A($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4BB698u, 0x4BB6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB6A0u;
label_4bb6a0:
    // 0x4bb6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bb6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb6a4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4BB6A4u;
    {
        const bool branch_taken_0x4bb6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB6A4u;
        // 0x4bb6a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb6a4) {
            ctx->pc = 0x4BB728u;
            goto label_4bb728;
        }
    }
    ctx->pc = 0x4BB6ACu;
    // 0x4bb6ac: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4BB6ACu;
    SET_GPR_U32(ctx, 31, 0x4BB6B4u);
    ctx->pc = 0x4BB6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB6ACu;
    // 0x4bb6b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4BB6ACu, 0x4BB6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB6B4u;
label_4bb6b4:
    // 0x4bb6b4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4bb6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4bb6b8: 0x2466d680  addiu       $a2, $v1, -0x2980
    ctx->pc = 0x4bb6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4bb6bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bb6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb6c0: 0x1450000f  bne         $v0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x4BB6C0u;
    {
        const bool branch_taken_0x4bb6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4BB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB6C0u;
        // 0x4bb6c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb6c0) {
            ctx->pc = 0x4BB700u;
            goto label_4bb700;
        }
    }
    ctx->pc = 0x4BB6C8u;
    // 0x4bb6c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4bb6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4bb6cc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4bb6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4bb6d0: 0xa4c223c4  sh          $v0, 0x23C4($a2)
    ctx->pc = 0x4bb6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bb6d4: 0xa4c3232e  sh          $v1, 0x232E($a2)
    ctx->pc = 0x4bb6d4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bb6d8: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4BB6D8u;
    SET_GPR_U32(ctx, 31, 0x4BB6E0u);
    ctx->pc = 0x4BB6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB6D8u;
    // 0x4bb6dc: 0xa4c0232c  sh          $zero, 0x232C($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4BB6D8u, 0x4BB6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB6E0u;
label_4bb6e0:
    // 0x4bb6e0: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4BB6E0u;
    SET_GPR_U32(ctx, 31, 0x4BB6E8u);
    ctx->pc = 0x4BB6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB6E0u;
    // 0x4bb6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4BB6E0u, 0x4BB6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB6E8u;
label_4bb6e8:
    // 0x4bb6e8: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4BB6E8u;
    SET_GPR_U32(ctx, 31, 0x4BB6F0u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4BB6E8u, 0x4BB6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB6F0u;
label_4bb6f0:
    // 0x4bb6f0: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4BB6F0u;
    SET_GPR_U32(ctx, 31, 0x4BB6F8u);
    ctx->pc = 0x4BB6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB6F0u;
    // 0x4bb6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4BB6F0u, 0x4BB6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB6F8u;
label_4bb6f8:
    // 0x4bb6f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4BB6F8u;
    {
        const bool branch_taken_0x4bb6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB6F8u;
        // 0x4bb6fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb6f8) {
            ctx->pc = 0x4BB72Cu;
            goto label_4bb72c;
        }
    }
    ctx->pc = 0x4BB700u;
label_4bb700:
    // 0x4bb700: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4BB700u;
    SET_GPR_U32(ctx, 31, 0x4BB708u);
    ctx->pc = 0x4BB704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB700u;
    // 0x4bb704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4BB700u, 0x4BB708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB708u;
label_4bb708:
    // 0x4bb708: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BB708u;
    {
        const bool branch_taken_0x4bb708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4BB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB708u;
        // 0x4bb70c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb708) {
            ctx->pc = 0x4BB728u;
            goto label_4bb728;
        }
    }
    ctx->pc = 0x4BB710u;
    // 0x4bb710: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4bb710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4bb714: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4bb714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4bb718: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4BB718u;
    SET_GPR_U32(ctx, 31, 0x4BB720u);
    ctx->pc = 0x4BB71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB718u;
    // 0x4bb71c: 0xa443f9ae  sh          $v1, -0x652($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965678), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4BB718u, 0x4BB720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB720u;
label_4bb720:
    // 0x4bb720: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4BB720u;
    SET_GPR_U32(ctx, 31, 0x4BB728u);
    ctx->pc = 0x4BB724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB720u;
    // 0x4bb724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4BB720u, 0x4BB728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB728u;
label_4bb728:
    // 0x4bb728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bb728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bb72c:
    // 0x4bb72c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bb72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bb730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bb730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bb734: 0x3e00008  jr          $ra
    ctx->pc = 0x4BB734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB734u;
        // 0x4bb738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BB734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BB73Cu;
    // 0x4bb73c: 0x0  nop
    ctx->pc = 0x4bb73cu;
    // NOP
    ctx->pc = 0x4bb740u;
}

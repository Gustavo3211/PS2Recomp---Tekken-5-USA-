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

// Function: sub_004FF3A0
// Address: 0x4ff3a0 - 0x4ff498
void sub_004FF3A0_0x4ff3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FF3A0_0x4ff3a0");
#endif

    switch (ctx->pc) {
        case 0x4ff43cu: goto label_4ff43c;
        case 0x4ff44cu: goto label_4ff44c;
        case 0x4ff45cu: goto label_4ff45c;
        case 0x4ff46cu: goto label_4ff46c;
        case 0x4ff478u: goto label_4ff478;
        default: break;
    }

    ctx->pc = 0x4ff3a0u;

    // 0x4ff3a0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4ff3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4ff3a4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4ff3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4ff3a8: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4ff3a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4ff3ac: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4ff3acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4ff3b0: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x4ff3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x4ff3b4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4ff3b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff3b8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x4ff3b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff3bc: 0x24890002  addiu       $t1, $a0, 0x2
    ctx->pc = 0x4ff3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4ff3c0: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x4ff3c0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ff3c4: 0x24c80007  addiu       $t0, $a2, 0x7
    ctx->pc = 0x4ff3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x4ff3c8: 0x28c60000  slti        $a2, $a2, 0x0
    ctx->pc = 0x4ff3c8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ff3cc: 0x45380b  movn        $a3, $v0, $a1
    ctx->pc = 0x4ff3ccu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x4ff3d0: 0x106180b  movn        $v1, $t0, $a2
    ctx->pc = 0x4ff3d0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x4ff3d4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ff3d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ff3d8: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x4ff3d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ff3dc: 0x738c3  sra         $a3, $a3, 3
    ctx->pc = 0x4ff3dcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 3));
    // 0x4ff3e0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x4ff3e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x4ff3e4: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x4ff3e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ff3e8: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x4ff3e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ff3ec: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x4ff3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff3f0: 0x70a72818  mult1       $a1, $a1, $a3
    ctx->pc = 0x4ff3f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ff3f4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4ff3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4ff3f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4ff3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ff3fc: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff3fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff400: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4ff400u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4ff404: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4ff404u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ff408: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF408u;
        // 0x4ff40c: 0xa5230000  sh          $v1, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF410u;
    // 0x4ff410: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4ff410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4ff414: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x4ff414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x4ff418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ff418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff41c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x4ff41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x4ff420: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x4ff420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x4ff424: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4ff424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff428: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x4ff428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x4ff42c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4ff42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff430: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4ff430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4ff434: 0xc13fdcc  jal         func_4FF730
    ctx->pc = 0x4FF434u;
    SET_GPR_U32(ctx, 31, 0x4FF43Cu);
    ctx->pc = 0x4FF438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF434u;
    // 0x4ff438: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF730u, 0x4FF434u, 0x4FF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF43Cu;
label_4ff43c:
    // 0x4ff43c: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x4ff43cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x4ff440: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x4ff440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ff444: 0xc13fdd6  jal         func_4FF758
    ctx->pc = 0x4FF444u;
    SET_GPR_U32(ctx, 31, 0x4FF44Cu);
    ctx->pc = 0x4FF448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF444u;
    // 0x4ff448: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF758u, 0x4FF444u, 0x4FF44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF44Cu;
label_4ff44c:
    // 0x4ff44c: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x4ff44cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4ff450: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x4ff450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4ff454: 0xc13fde0  jal         func_4FF780
    ctx->pc = 0x4FF454u;
    SET_GPR_U32(ctx, 31, 0x4FF45Cu);
    ctx->pc = 0x4FF458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF454u;
    // 0x4ff458: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF780u, 0x4FF454u, 0x4FF45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF45Cu;
label_4ff45c:
    // 0x4ff45c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ff45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff460: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4ff460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff464: 0xc13f920  jal         func_4FE480
    ctx->pc = 0x4FF464u;
    SET_GPR_U32(ctx, 31, 0x4FF46Cu);
    ctx->pc = 0x4FF468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF464u;
    // 0x4ff468: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE480u, 0x4FF464u, 0x4FF46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF46Cu;
label_4ff46c:
    // 0x4ff46c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ff46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff470: 0xc13fa34  jal         func_4FE8D0
    ctx->pc = 0x4FF470u;
    SET_GPR_U32(ctx, 31, 0x4FF478u);
    ctx->pc = 0x4FF474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF470u;
    // 0x4ff474: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE8D0u, 0x4FF470u, 0x4FF478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF478u;
label_4ff478:
    // 0x4ff478: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4ff478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff47c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x4ff47cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ff480: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x4ff480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4ff484: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x4ff484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ff488: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x4ff488u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4ff48c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4ff48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4ff490: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF490u;
        // 0x4ff494: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF498u;
}

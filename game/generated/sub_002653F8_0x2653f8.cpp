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

// Function: sub_002653F8
// Address: 0x2653f8 - 0x265488
void sub_002653F8_0x2653f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002653F8_0x2653f8");
#endif

    switch (ctx->pc) {
        case 0x265450u: goto label_265450;
        default: break;
    }

    ctx->pc = 0x2653f8u;

    // 0x2653f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2653f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2653fc: 0x2402048c  addiu       $v0, $zero, 0x48C
    ctx->pc = 0x2653fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1164));
    // 0x265400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x265400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x265404: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x265404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265408: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x265408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26540c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26540cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x265410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x265414: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x265414u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x265418: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x265418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26541c: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x26541cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x265420: 0x2421ee00  addiu       $at, $at, -0x1200
    ctx->pc = 0x265420u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962688));
    // 0x265424: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x265424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x265428: 0xaf83aa78  sw          $v1, -0x5588($gp)
    ctx->pc = 0x265428u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945400), GPR_U32(ctx, 3));
    // 0x26542c: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x26542cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x265430: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265434: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x265434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x265438: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x265438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26543c: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x26543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x265440: 0xaf83aa7c  sw          $v1, -0x5584($gp)
    ctx->pc = 0x265440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945404), GPR_U32(ctx, 3));
    // 0x265444: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x265444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x265448: 0xc09964e  jal         func_265938
    ctx->pc = 0x265448u;
    SET_GPR_U32(ctx, 31, 0x265450u);
    ctx->pc = 0x26544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265448u;
    // 0x26544c: 0xaf82aa80  sw          $v0, -0x5580($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945408), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265938u, 0x265448u, 0x265450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265450u;
label_265450:
    // 0x265450: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265454: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x265454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265458: 0x94640006  lhu         $a0, 0x6($v1)
    ctx->pc = 0x265458u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x26545c: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x26545cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x265460: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x265460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x265464: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x265464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x265468: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x265468u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x26546c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26546cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265470: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265474: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x265474u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x265478: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x265478u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x26547c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26547cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x265480: 0x3e00008  jr          $ra
    ctx->pc = 0x265480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265480u;
        // 0x265484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265488u;
}

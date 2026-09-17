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

// Function: sub_002D1828
// Address: 0x2d1828 - 0x2d18b0
void sub_002D1828_0x2d1828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1828_0x2d1828");
#endif

    switch (ctx->pc) {
        case 0x2d183cu: goto label_2d183c;
        case 0x2d1844u: goto label_2d1844;
        case 0x2d1868u: goto label_2d1868;
        case 0x2d18a8u: goto label_2d18a8;
        default: break;
    }

    ctx->pc = 0x2d1828u;

    // 0x2d1828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d182c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1830: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d1830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d1834: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2D1834u;
    SET_GPR_U32(ctx, 31, 0x2D183Cu);
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2D1834u, 0x2D183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D183Cu;
label_2d183c:
    // 0x2d183c: 0xc0b4570  jal         func_2D15C0
    ctx->pc = 0x2D183Cu;
    SET_GPR_U32(ctx, 31, 0x2D1844u);
    ctx->pc = 0x2D1840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D183Cu;
    // 0x2d1840: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D15C0u, 0x2D183Cu, 0x2D1844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1844u;
label_2d1844:
    // 0x2d1844: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1848: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d1848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d184c: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D184Cu;
    {
        const bool branch_taken_0x2d184c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2D1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D184Cu;
        // 0x2d1850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d184c) {
            ctx->pc = 0x2D1890u;
            goto label_2d1890;
        }
    }
    ctx->pc = 0x2D1854u;
    // 0x2d1854: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2d1854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2d1858: 0x84c2ec18  lh          $v0, -0x13E8($a2)
    ctx->pc = 0x2d1858u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47EC18u));
    // 0x2d185c: 0x5050000c  beql        $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D185Cu;
    {
        const bool branch_taken_0x2d185c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2d185c) {
            ctx->pc = 0x2D1860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D185Cu;
            // 0x2d1860: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1890u;
            goto label_2d1890;
        }
    }
    ctx->pc = 0x2D1864u;
    // 0x2d1864: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d1864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2d1868:
    // 0x2d1868: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2d1868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d186c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D186Cu;
    {
        const bool branch_taken_0x2d186c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D186Cu;
        // 0x2d1870: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d186c) {
            ctx->pc = 0x2D1890u;
            goto label_2d1890;
        }
    }
    ctx->pc = 0x2D1874u;
    // 0x2d1874: 0x24c2ec18  addiu       $v0, $a2, -0x13E8
    ctx->pc = 0x2d1874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962200));
    // 0x2d1878: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d1878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d187c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2d187cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1880: 0x0  nop
    ctx->pc = 0x2d1880u;
    // NOP
    // 0x2d1884: 0x5470fff8  bnel        $v1, $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D1884u;
    {
        const bool branch_taken_0x2d1884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d1884) {
            ctx->pc = 0x2D1888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1884u;
            // 0x2d1888: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1868;
        }
    }
    ctx->pc = 0x2D188Cu;
    // 0x2d188c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d188cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1890:
    // 0x2d1890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d1890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1894: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2d1894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1898: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d1898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d189c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D189Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D189Cu;
        // 0x2d18a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D189Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D18A4u;
    // 0x2d18a4: 0x0  nop
    ctx->pc = 0x2d18a4u;
    // NOP
label_2d18a8:
    // 0x2d18a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D18A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18A8u;
        // 0x2d18ac: 0x8f82cb50  lw          $v0, -0x34B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953808)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D18A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D18B0u;
}

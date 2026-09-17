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

// Function: sub_002474A0
// Address: 0x2474a0 - 0x247558
void sub_002474A0_0x2474a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002474A0_0x2474a0");
#endif

    switch (ctx->pc) {
        case 0x2474f8u: goto label_2474f8;
        case 0x247508u: goto label_247508;
        default: break;
    }

    ctx->pc = 0x2474a0u;

    // 0x2474a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2474a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2474a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2474a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2474a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2474a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2474acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2474b0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2474b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2474b4: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2474B4u;
    {
        const bool branch_taken_0x2474b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2474b4) {
            ctx->pc = 0x2474B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2474B4u;
            // 0x2474b8: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2474E0u;
            goto label_2474e0;
        }
    }
    ctx->pc = 0x2474BCu;
    // 0x2474bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2474bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2474c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2474c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2474c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2474c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2474c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2474C8u;
    {
        const bool branch_taken_0x2474c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2474c8) {
            ctx->pc = 0x2474CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2474C8u;
            // 0x2474cc: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2474E0u;
            goto label_2474e0;
        }
    }
    ctx->pc = 0x2474D0u;
    // 0x2474d0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2474d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2474d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2474d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474d8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2474d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2474dc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2474dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2474e0:
    // 0x2474e0: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2474E0u;
    {
        const bool branch_taken_0x2474e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2474e0) {
            ctx->pc = 0x24750Cu;
            goto label_24750c;
        }
    }
    ctx->pc = 0x2474E8u;
    // 0x2474e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2474E8u;
    {
        const bool branch_taken_0x2474e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2474e8) {
            ctx->pc = 0x247500u;
            goto label_247500;
        }
    }
    ctx->pc = 0x2474F0u;
    // 0x2474f0: 0xc091c76  jal         func_2471D8
    ctx->pc = 0x2474F0u;
    SET_GPR_U32(ctx, 31, 0x2474F8u);
    ctx->pc = 0x2474F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474F0u;
    // 0x2474f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2471D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2471D8u, 0x2474F0u, 0x2474F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474F8u;
label_2474f8:
    // 0x2474f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2474F8u;
    {
        const bool branch_taken_0x2474f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474F8u;
        // 0x2474fc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474f8) {
            ctx->pc = 0x247508u;
            goto label_247508;
        }
    }
    ctx->pc = 0x247500u;
label_247500:
    // 0x247500: 0xc091c8a  jal         func_247228
    ctx->pc = 0x247500u;
    SET_GPR_U32(ctx, 31, 0x247508u);
    ctx->pc = 0x247504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247500u;
    // 0x247504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247228u, 0x247500u, 0x247508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247508u;
label_247508:
    // 0x247508: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x247508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_24750c:
    // 0x24750c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x24750Cu;
    {
        const bool branch_taken_0x24750c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x247510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24750Cu;
        // 0x247510: 0xae040040  sw          $a0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24750c) {
            ctx->pc = 0x247548u;
            goto label_247548;
        }
    }
    ctx->pc = 0x247514u;
    // 0x247514: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x247514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x247518: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x247518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x24751c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24751Cu;
    {
        const bool branch_taken_0x24751c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24751Cu;
        // 0x247520: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24751c) {
            ctx->pc = 0x247534u;
            goto label_247534;
        }
    }
    ctx->pc = 0x247524u;
    // 0x247524: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x247524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x247528: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x247528u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x24752c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x24752cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x247530: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x247530u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_247534:
    // 0x247534: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x247534u;
    {
        const bool branch_taken_0x247534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247534) {
            ctx->pc = 0x247538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247534u;
            // 0x247538: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24754Cu;
            goto label_24754c;
        }
    }
    ctx->pc = 0x24753Cu;
    // 0x24753c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x247540: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247544: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x247544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_247548:
    // 0x247548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24754c:
    // 0x24754c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24754cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247550: 0x3e00008  jr          $ra
    ctx->pc = 0x247550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247550u;
        // 0x247554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247558u;
}

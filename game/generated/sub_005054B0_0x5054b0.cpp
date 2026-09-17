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

// Function: sub_005054B0
// Address: 0x5054b0 - 0x505578
void sub_005054B0_0x5054b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005054B0_0x5054b0");
#endif

    switch (ctx->pc) {
        case 0x5054f8u: goto label_5054f8;
        case 0x505508u: goto label_505508;
        case 0x505544u: goto label_505544;
        default: break;
    }

    ctx->pc = 0x5054b0u;

    // 0x5054b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5054b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5054b4: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x5054b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x5054b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5054b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5054bc: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x5054bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x5054c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5054c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5054c4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x5054c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x5054c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5054c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5054cc: 0x24460098  addiu       $a2, $v0, 0x98
    ctx->pc = 0x5054ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x5054d0: 0x84434cc0  lh          $v1, 0x4CC0($v0)
    ctx->pc = 0x5054d0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x903D40u));
    // 0x5054d4: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x5054d4u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x8FF118u));
    // 0x5054d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x5054d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x5054dc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x5054dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x5054e0: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x5054e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x5054e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x5054e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x5054e8: 0x50a2001e  beql        $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x5054E8u;
    {
        const bool branch_taken_0x5054e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x5054e8) {
            ctx->pc = 0x5054ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5054E8u;
            // 0x5054ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x505564u;
            goto label_505564;
        }
    }
    ctx->pc = 0x5054F0u;
    // 0x5054f0: 0xc144aa4  jal         func_512A90
    ctx->pc = 0x5054F0u;
    SET_GPR_U32(ctx, 31, 0x5054F8u);
    ctx->pc = 0x5054F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5054F0u;
    // 0x5054f4: 0xa4c40000  sh          $a0, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512A90u, 0x5054F0u, 0x5054F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5054F8u;
label_5054f8:
    // 0x5054f8: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x5054f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x5054fc: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x5054fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x505500: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x505500u;
    {
        const bool branch_taken_0x505500 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x505504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505500u;
        // 0x505504: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x505500) {
            ctx->pc = 0x505560u;
            goto label_505560;
        }
    }
    ctx->pc = 0x505508u;
label_505508:
    // 0x505508: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x505508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x50550c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50550cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x505510: 0x2c43000d  sltiu       $v1, $v0, 0xD
    ctx->pc = 0x505510u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x505514: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x505514u;
    {
        const bool branch_taken_0x505514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x505514) {
            ctx->pc = 0x505518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x505514u;
            // 0x505518: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x505548u;
            goto label_505548;
        }
    }
    ctx->pc = 0x50551Cu;
    // 0x50551c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50551cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x505520: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x505520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x505524: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x505524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x505528: 0x8c63d1b0  lw          $v1, -0x2E50($v1)
    ctx->pc = 0x505528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955440)));
    // 0x50552c: 0x600008  jr          $v1
    ctx->pc = 0x50552Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x505538u: goto label_505538;
            case 0x505544u: goto label_505544;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50552Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x505534u;
    // 0x505534: 0x0  nop
    ctx->pc = 0x505534u;
    // NOP
label_505538:
    // 0x505538: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x505538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x50553c: 0xc141af2  jal         func_506BC8
    ctx->pc = 0x50553Cu;
    SET_GPR_U32(ctx, 31, 0x505544u);
    ctx->pc = 0x505540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50553Cu;
    // 0x505540: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x506BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506BC8u, 0x50553Cu, 0x505544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505544u;
label_505544:
    // 0x505544: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x505544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_505548:
    // 0x505548: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x505548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50554c: 0x3624ffff  ori         $a0, $s1, 0xFFFF
    ctx->pc = 0x50554cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x505550: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x505550u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x505554: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x505554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x505558: 0x461ffeb  bgez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x505558u;
    {
        const bool branch_taken_0x505558 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x50555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505558u;
        // 0x50555c: 0x828824  and         $s1, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505558) {
            ctx->pc = 0x505508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_505508;
        }
    }
    ctx->pc = 0x505560u;
label_505560:
    // 0x505560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x505560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_505564:
    // 0x505564: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x505564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x505568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x505568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50556c: 0x3e00008  jr          $ra
    ctx->pc = 0x50556Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50556Cu;
        // 0x505570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50556Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x505574u;
    // 0x505574: 0x0  nop
    ctx->pc = 0x505574u;
    // NOP
    ctx->pc = 0x505578u;
}

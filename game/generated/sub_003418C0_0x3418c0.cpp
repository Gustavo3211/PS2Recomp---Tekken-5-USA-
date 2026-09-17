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

// Function: sub_003418C0
// Address: 0x3418c0 - 0x341940
void sub_003418C0_0x3418c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003418C0_0x3418c0");
#endif

    ctx->pc = 0x3418c0u;

    // 0x3418c0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3418c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3418c4: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x3418c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3418c8: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x3418c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x3418cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3418ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3418d0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3418D0u;
    {
        const bool branch_taken_0x3418d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3418d0) {
            ctx->pc = 0x341934u;
            goto label_341934;
        }
    }
    ctx->pc = 0x3418D8u;
    // 0x3418d8: 0x94a20016  lhu         $v0, 0x16($a1)
    ctx->pc = 0x3418d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x3418dc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3418dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3418e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3418E0u;
    {
        const bool branch_taken_0x3418e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3418E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3418E0u;
        // 0x3418e4: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3418e0) {
            ctx->pc = 0x3418F8u;
            goto label_3418f8;
        }
    }
    ctx->pc = 0x3418E8u;
    // 0x3418e8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x3418e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x3418ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3418ECu;
    {
        const bool branch_taken_0x3418ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3418F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3418ECu;
        // 0x3418f0: 0x2442d290  addiu       $v0, $v0, -0x2D70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3418ec) {
            ctx->pc = 0x341904u;
            goto label_341904;
        }
    }
    ctx->pc = 0x3418F4u;
    // 0x3418f4: 0x0  nop
    ctx->pc = 0x3418f4u;
    // NOP
label_3418f8:
    // 0x3418f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3418f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3418fc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x3418fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x341900: 0x2442d5e0  addiu       $v0, $v0, -0x2A20
    ctx->pc = 0x341900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956512));
label_341904:
    // 0x341904: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x341904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x341908: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x341908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34190c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x34190cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x341910: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x341910u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x341914: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x341914u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x341918: 0x3c034b00  lui         $v1, 0x4B00
    ctx->pc = 0x341918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19200 << 16));
    // 0x34191c: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x34191cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x341920: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x341920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x341924: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x341924u;
    {
        const bool branch_taken_0x341924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x341928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341924u;
        // 0x341928: 0xfcc20020  sd          $v0, 0x20($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341924) {
            ctx->pc = 0x341934u;
            goto label_341934;
        }
    }
    ctx->pc = 0x34192Cu;
    // 0x34192c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x34192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x341930: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x341930u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_341934:
    // 0x341934: 0x3e00008  jr          $ra
    ctx->pc = 0x341934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34193Cu;
    // 0x34193c: 0x0  nop
    ctx->pc = 0x34193cu;
    // NOP
    ctx->pc = 0x341940u;
}

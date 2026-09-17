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

// Function: sub_0026C9F0
// Address: 0x26c9f0 - 0x26caa8
void sub_0026C9F0_0x26c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C9F0_0x26c9f0");
#endif

    switch (ctx->pc) {
        case 0x26ca08u: goto label_26ca08;
        case 0x26ca7cu: goto label_26ca7c;
        default: break;
    }

    ctx->pc = 0x26c9f0u;

    // 0x26c9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26c9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26c9f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c9f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26c9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26c9fc: 0x94850008  lhu         $a1, 0x8($a0)
    ctx->pc = 0x26c9fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ca00: 0xc09905e  jal         func_264178
    ctx->pc = 0x26CA00u;
    SET_GPR_U32(ctx, 31, 0x26CA08u);
    ctx->pc = 0x26CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA00u;
    // 0x26ca04: 0x8f84aa7c  lw          $a0, -0x5584($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x26CA00u, 0x26CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA08u;
label_26ca08:
    // 0x26ca08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ca08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca0c: 0x94a20026  lhu         $v0, 0x26($a1)
    ctx->pc = 0x26ca0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x26ca10: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26CA10u;
    {
        const bool branch_taken_0x26ca10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA10u;
        // 0x26ca14: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca10) {
            ctx->pc = 0x26CA3Cu;
            goto label_26ca3c;
        }
    }
    ctx->pc = 0x26CA18u;
    // 0x26ca18: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x26ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x26ca1c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x26ca1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x26ca20: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26CA20u;
    {
        const bool branch_taken_0x26ca20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ca20) {
            ctx->pc = 0x26CA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CA20u;
            // 0x26ca24: 0x94a20044  lhu         $v0, 0x44($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CA40u;
            goto label_26ca40;
        }
    }
    ctx->pc = 0x26CA28u;
    // 0x26ca28: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x26ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x26ca2c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x26ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x26ca30: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26ca30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26ca34: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x26CA34u;
    {
        const bool branch_taken_0x26ca34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA34u;
        // 0x26ca38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca34) {
            ctx->pc = 0x26CA98u;
            goto label_26ca98;
        }
    }
    ctx->pc = 0x26CA3Cu;
label_26ca3c:
    // 0x26ca3c: 0x94a20044  lhu         $v0, 0x44($a1)
    ctx->pc = 0x26ca3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
label_26ca40:
    // 0x26ca40: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26CA40u;
    {
        const bool branch_taken_0x26ca40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA40u;
        // 0x26ca44: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca40) {
            ctx->pc = 0x26CA94u;
            goto label_26ca94;
        }
    }
    ctx->pc = 0x26CA48u;
    // 0x26ca48: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x26ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x26ca4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ca4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ca50: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26CA50u;
    {
        const bool branch_taken_0x26ca50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA50u;
        // 0x26ca54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca50) {
            ctx->pc = 0x26CA98u;
            goto label_26ca98;
        }
    }
    ctx->pc = 0x26CA58u;
    // 0x26ca58: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x26ca5c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x26ca5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x26ca60: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26CA60u;
    {
        const bool branch_taken_0x26ca60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA60u;
        // 0x26ca64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca60) {
            ctx->pc = 0x26CA98u;
            goto label_26ca98;
        }
    }
    ctx->pc = 0x26CA68u;
    // 0x26ca68: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26ca6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x26ca6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ca70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca74: 0xc09ae62  jal         func_26B988
    ctx->pc = 0x26CA74u;
    SET_GPR_U32(ctx, 31, 0x26CA7Cu);
    ctx->pc = 0x26CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA74u;
    // 0x26ca78: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B988u, 0x26CA74u, 0x26CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA7Cu;
label_26ca7c:
    // 0x26ca7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CA7Cu;
    {
        const bool branch_taken_0x26ca7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA7Cu;
        // 0x26ca80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca7c) {
            ctx->pc = 0x26CA98u;
            goto label_26ca98;
        }
    }
    ctx->pc = 0x26CA84u;
    // 0x26ca84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26ca88: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x26ca88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x26ca8c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x26CA8Cu;
    {
        const bool branch_taken_0x26ca8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ca8c) {
            ctx->pc = 0x26CA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CA8Cu;
            // 0x26ca90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CA98u;
            goto label_26ca98;
        }
    }
    ctx->pc = 0x26CA94u;
label_26ca94:
    // 0x26ca94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ca94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ca98:
    // 0x26ca98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26ca98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ca9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26ca9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26caa0: 0x3e00008  jr          $ra
    ctx->pc = 0x26CAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAA0u;
        // 0x26caa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26CAA8u;
}

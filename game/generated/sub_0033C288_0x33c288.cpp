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

// Function: sub_0033C288
// Address: 0x33c288 - 0x33c318
void sub_0033C288_0x33c288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C288_0x33c288");
#endif

    switch (ctx->pc) {
        case 0x33c2e4u: goto label_33c2e4;
        case 0x33c2f4u: goto label_33c2f4;
        default: break;
    }

    ctx->pc = 0x33c288u;

    // 0x33c288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33c288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33c28c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c290: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33c290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c294: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33c298: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33c298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c29c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33c29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33c2a0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x33c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x33c2a4: 0x244305a0  addiu       $v1, $v0, 0x5A0
    ctx->pc = 0x33c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x33c2a8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x33c2a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33c2ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33C2ACu;
    {
        const bool branch_taken_0x33c2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2ACu;
        // 0x33c2b0: 0x70182b  sltu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c2ac) {
            ctx->pc = 0x33C2D8u;
            goto label_33c2d8;
        }
    }
    ctx->pc = 0x33C2B4u;
    // 0x33c2b4: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33C2B4u;
    {
        const bool branch_taken_0x33c2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c2b4) {
            ctx->pc = 0x33C2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C2B4u;
            // 0x33c2b8: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C2DCu;
            goto label_33c2dc;
        }
    }
    ctx->pc = 0x33C2BCu;
    // 0x33c2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c2c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c2c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c2c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c2c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c2c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33c2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c2cc: 0x80cf83a  j           func_33E0E8
    ctx->pc = 0x33C2CCu;
    ctx->pc = 0x33C2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C2CCu;
    // 0x33c2d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E0E8u;
    sub_0033E0E8_0x33e0e8(rdram, ctx, runtime); return;
    ctx->pc = 0x33C2D4u;
    // 0x33c2d4: 0x0  nop
    ctx->pc = 0x33c2d4u;
    // NOP
label_33c2d8:
    // 0x33c2d8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x33c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_33c2dc:
    // 0x33c2dc: 0xc0cf108  jal         func_33C420
    ctx->pc = 0x33C2DCu;
    SET_GPR_U32(ctx, 31, 0x33C2E4u);
    ctx->pc = 0x33C2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C2DCu;
    // 0x33c2e0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C420u, 0x33C2DCu, 0x33C2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C2E4u;
label_33c2e4:
    // 0x33c2e4: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x33c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x33c2e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33c2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c2ec: 0xc0dd836  jal         func_3760D8
    ctx->pc = 0x33C2ECu;
    SET_GPR_U32(ctx, 31, 0x33C2F4u);
    ctx->pc = 0x33C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C2ECu;
    // 0x33c2f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760D8u, 0x33C2ECu, 0x33C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C2F4u;
label_33c2f4:
    // 0x33c2f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x33c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33c2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c2fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33c300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33c300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c304: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x33c304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x33c308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c30c: 0x3e00008  jr          $ra
    ctx->pc = 0x33C30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C30Cu;
        // 0x33c310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C314u;
    // 0x33c314: 0x0  nop
    ctx->pc = 0x33c314u;
    // NOP
    ctx->pc = 0x33c318u;
}

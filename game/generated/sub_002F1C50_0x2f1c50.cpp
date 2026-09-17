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

// Function: sub_002F1C50
// Address: 0x2f1c50 - 0x2f1cf8
void sub_002F1C50_0x2f1c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1C50_0x2f1c50");
#endif

    switch (ctx->pc) {
        case 0x2f1c70u: goto label_2f1c70;
        default: break;
    }

    ctx->pc = 0x2f1c50u;

    // 0x2f1c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1c54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f1c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f1c58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f1c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1c60: 0x263000fc  addiu       $s0, $s1, 0xFC
    ctx->pc = 0x2f1c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x2f1c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f1c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f1c68: 0xc0bb89e  jal         func_2EE278
    ctx->pc = 0x2F1C68u;
    SET_GPR_U32(ctx, 31, 0x2F1C70u);
    ctx->pc = 0x2F1C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C68u;
    // 0x2f1c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE278u, 0x2F1C68u, 0x2F1C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C70u;
label_2f1c70:
    // 0x2f1c70: 0x262400e8  addiu       $a0, $s1, 0xE8
    ctx->pc = 0x2f1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
    // 0x2f1c74: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f1c78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f1c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f1c7c: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F1C7Cu;
    {
        const bool branch_taken_0x2f1c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C7Cu;
        // 0x2f1c80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c7c) {
            ctx->pc = 0x2F1CB4u;
            goto label_2f1cb4;
        }
    }
    ctx->pc = 0x2F1C84u;
    // 0x2f1c84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f1c88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1C88u;
    {
        const bool branch_taken_0x2f1c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C88u;
        // 0x2f1c8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c88) {
            ctx->pc = 0x2F1CA0u;
            goto label_2f1ca0;
        }
    }
    ctx->pc = 0x2F1C90u;
    // 0x2f1c90: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f1c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f1c94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f1c98: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1C98u;
    {
        const bool branch_taken_0x2f1c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f1c98) {
            ctx->pc = 0x2F1C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1C98u;
            // 0x2f1c9c: 0x8ca20104  lw          $v0, 0x104($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1CB0u;
            goto label_2f1cb0;
        }
    }
    ctx->pc = 0x2F1CA0u;
label_2f1ca0:
    // 0x2f1ca0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f1ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f1ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ca8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f1ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2f1cac: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x2f1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x104u));
label_2f1cb0:
    // 0x2f1cb0: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x2f1cb0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f1cb4:
    // 0x2f1cb4: 0x8e240120  lw          $a0, 0x120($s1)
    ctx->pc = 0x2f1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2f1cb8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1CB8u;
    {
        const bool branch_taken_0x2f1cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CB8u;
        // 0x2f1cbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cb8) {
            ctx->pc = 0x2F1CE0u;
            goto label_2f1ce0;
        }
    }
    ctx->pc = 0x2F1CC0u;
    // 0x2f1cc0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1CC0u;
    {
        const bool branch_taken_0x2f1cc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CC0u;
        // 0x2f1cc4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cc0) {
            ctx->pc = 0x2F1CD0u;
            goto label_2f1cd0;
        }
    }
    ctx->pc = 0x2F1CC8u;
    // 0x2f1cc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1CC8u;
    {
        const bool branch_taken_0x2f1cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CC8u;
        // 0x2f1ccc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1cc8) {
            ctx->pc = 0x2F1CD8u;
            goto label_2f1cd8;
        }
    }
    ctx->pc = 0x2F1CD0u;
label_2f1cd0:
    // 0x2f1cd0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1cd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1cd8:
    // 0x2f1cd8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f1cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f1ce0:
    // 0x2f1ce0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f1ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f1ce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f1ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1cec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CECu;
        // 0x2f1cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1CF4u;
    // 0x2f1cf4: 0x0  nop
    ctx->pc = 0x2f1cf4u;
    // NOP
    ctx->pc = 0x2f1cf8u;
}

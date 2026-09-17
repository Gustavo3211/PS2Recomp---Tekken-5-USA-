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

// Function: sub_00329F38
// Address: 0x329f38 - 0x329f90
void sub_00329F38_0x329f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329F38_0x329f38");
#endif

    ctx->pc = 0x329f38u;

    // 0x329f38: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x329f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x329f3c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x329F3Cu;
    {
        const bool branch_taken_0x329f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F3Cu;
        // 0x329f40: 0x2ca30003  sltiu       $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f3c) {
            ctx->pc = 0x329F84u;
            goto label_329f84;
        }
    }
    ctx->pc = 0x329F44u;
    // 0x329f44: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x329F44u;
    {
        const bool branch_taken_0x329f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329f44) {
            ctx->pc = 0x329F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329F44u;
            // 0x329f48: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329F60u;
            goto label_329f60;
        }
    }
    ctx->pc = 0x329F4Cu;
    // 0x329f4c: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x329f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x329f50: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x329f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x329f54: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x329f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x329f58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x329F58u;
    {
        const bool branch_taken_0x329f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F58u;
        // 0x329f5c: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f58) {
            ctx->pc = 0x329F68u;
            goto label_329f68;
        }
    }
    ctx->pc = 0x329F60u;
label_329f60:
    // 0x329f60: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x329f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x329f64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x329f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_329f68:
    // 0x329f68: 0xe44e0020  swc1        $f14, 0x20($v0)
    ctx->pc = 0x329f68u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x329f6c: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x329f6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x329f70: 0xe44d0010  swc1        $f13, 0x10($v0)
    ctx->pc = 0x329f70u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x329f74: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x329f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x329f78: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x329f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x329f7c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x329f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x329f80: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x329f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_329f84:
    // 0x329f84: 0x3e00008  jr          $ra
    ctx->pc = 0x329F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329F8Cu;
    // 0x329f8c: 0x0  nop
    ctx->pc = 0x329f8cu;
    // NOP
    ctx->pc = 0x329f90u;
}

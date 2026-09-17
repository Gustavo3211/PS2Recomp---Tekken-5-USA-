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

// Function: sub_0035CEF0
// Address: 0x35cef0 - 0x35cf58
void sub_0035CEF0_0x35cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CEF0_0x35cef0");
#endif

    switch (ctx->pc) {
        case 0x35cf28u: goto label_35cf28;
        default: break;
    }

    ctx->pc = 0x35cef0u;

    // 0x35cef0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x35cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35cef4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35cef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35cef8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35cefc: 0x2c830030  sltiu       $v1, $a0, 0x30
    ctx->pc = 0x35cefcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x35cf00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35cf04: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x35cf04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x35cf08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35cf0c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x35cf0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x35cf10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35cf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf14: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35CF14u;
    {
        const bool branch_taken_0x35cf14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CF14u;
        // 0x35cf18: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cf14) {
            ctx->pc = 0x35CF30u;
            goto label_35cf30;
        }
    }
    ctx->pc = 0x35CF1Cu;
    // 0x35cf1c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35cf20: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35CF20u;
    SET_GPR_U32(ctx, 31, 0x35CF28u);
    ctx->pc = 0x35CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF20u;
    // 0x35cf24: 0x24845a48  addiu       $a0, $a0, 0x5A48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35CF20u, 0x35CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF28u;
label_35cf28:
    // 0x35cf28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35CF28u;
    {
        const bool branch_taken_0x35cf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CF28u;
        // 0x35cf2c: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cf28) {
            ctx->pc = 0x35CF4Cu;
            goto label_35cf4c;
        }
    }
    ctx->pc = 0x35CF30u;
label_35cf30:
    // 0x35cf30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35cf34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35cf34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf38: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35cf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35cf3c: 0x242113a8  addiu       $at, $at, 0x13A8
    ctx->pc = 0x35cf3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 5032));
    // 0x35cf40: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x35cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35cf44: 0xa4660002  sh          $a2, 0x2($v1)
    ctx->pc = 0x35cf44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x35cf48: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x35cf48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_35cf4c:
    // 0x35cf4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35cf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cf50: 0x3e00008  jr          $ra
    ctx->pc = 0x35CF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CF50u;
        // 0x35cf54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CF58u;
}

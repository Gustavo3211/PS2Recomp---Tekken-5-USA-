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

// Function: sub_002C8D18
// Address: 0x2c8d18 - 0x2c8d88
void sub_002C8D18_0x2c8d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8D18_0x2c8d18");
#endif

    switch (ctx->pc) {
        case 0x2c8d2cu: goto label_2c8d2c;
        default: break;
    }

    ctx->pc = 0x2c8d18u;

    // 0x2c8d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c8d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c8d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c8d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8d20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c8d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c8d24: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C8D24u;
    SET_GPR_U32(ctx, 31, 0x2C8D2Cu);
    ctx->pc = 0x2C8D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8D24u;
    // 0x2c8d28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C8D24u, 0x2C8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D2Cu;
label_2c8d2c:
    // 0x2c8d2c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C8D2Cu;
    {
        const bool branch_taken_0x2c8d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D2Cu;
        // 0x2c8d30: 0x102840  sll         $a1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d2c) {
            ctx->pc = 0x2C8D58u;
            goto label_2c8d58;
        }
    }
    ctx->pc = 0x2C8D34u;
    // 0x2c8d34: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x2c8d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2c8d38: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c8d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c8d3c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x2c8d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x2c8d40: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2c8d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c8d44: 0x8c848dd8  lw          $a0, -0x7228($a0)
    ctx->pc = 0x2c8d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294938072)));
    // 0x2c8d48: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C8D48u;
    {
        const bool branch_taken_0x2c8d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d48) {
            ctx->pc = 0x2C8D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D48u;
            // 0x2c8d4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8D78u;
            goto label_2c8d78;
        }
    }
    ctx->pc = 0x2C8D50u;
    // 0x2c8d50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8D50u;
    {
        const bool branch_taken_0x2c8d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D50u;
        // 0x2c8d54: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d50) {
            ctx->pc = 0x2C8D5Cu;
            goto label_2c8d5c;
        }
    }
    ctx->pc = 0x2C8D58u;
label_2c8d58:
    // 0x2c8d58: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x2c8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2c8d5c:
    // 0x2c8d5c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c8d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c8d60: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2c8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c8d64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8d68: 0x3c010018  lui         $at, 0x18
    ctx->pc = 0x2c8d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)24 << 16));
    // 0x2c8d6c: 0x24218d54  addiu       $at, $at, -0x72AC
    ctx->pc = 0x2c8d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294937940));
    // 0x2c8d70: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2c8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2c8d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c8d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8d78:
    // 0x2c8d78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c8d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c8d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D7Cu;
        // 0x2c8d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8D84u;
    // 0x2c8d84: 0x0  nop
    ctx->pc = 0x2c8d84u;
    // NOP
    ctx->pc = 0x2c8d88u;
}

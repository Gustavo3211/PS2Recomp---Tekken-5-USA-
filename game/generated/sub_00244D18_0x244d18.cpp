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

// Function: sub_00244D18
// Address: 0x244d18 - 0x244da0
void sub_00244D18_0x244d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244D18_0x244d18");
#endif

    switch (ctx->pc) {
        case 0x244d3cu: goto label_244d3c;
        case 0x244d50u: goto label_244d50;
        case 0x244d64u: goto label_244d64;
        case 0x244d78u: goto label_244d78;
        case 0x244d8cu: goto label_244d8c;
        default: break;
    }

    ctx->pc = 0x244d18u;

    // 0x244d18: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x244d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x244d1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244d1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244d20: 0x8c626690  lw          $v0, 0x6690($v1)
    ctx->pc = 0x244d20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x166690u));
    // 0x244d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x244d28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d2c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x244D2Cu;
    {
        const bool branch_taken_0x244d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D2Cu;
        // 0x244d30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d2c) {
            ctx->pc = 0x244D8Cu;
            goto label_244d8c;
        }
    }
    ctx->pc = 0x244D34u;
    // 0x244d34: 0xc090f96  jal         func_243E58
    ctx->pc = 0x244D34u;
    SET_GPR_U32(ctx, 31, 0x244D3Cu);
    ctx->pc = 0x243E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E58u, 0x244D34u, 0x244D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D3Cu;
label_244d3c:
    // 0x244d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d40: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x244D40u;
    {
        const bool branch_taken_0x244d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D40u;
        // 0x244d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d40) {
            ctx->pc = 0x244D8Cu;
            goto label_244d8c;
        }
    }
    ctx->pc = 0x244D48u;
    // 0x244d48: 0xc091086  jal         func_244218
    ctx->pc = 0x244D48u;
    SET_GPR_U32(ctx, 31, 0x244D50u);
    ctx->pc = 0x244218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244218u, 0x244D48u, 0x244D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D50u;
label_244d50:
    // 0x244d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d54: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x244D54u;
    {
        const bool branch_taken_0x244d54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x244D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D54u;
        // 0x244d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d54) {
            ctx->pc = 0x244D70u;
            goto label_244d70;
        }
    }
    ctx->pc = 0x244D5Cu;
    // 0x244d5c: 0xc0910c6  jal         func_244318
    ctx->pc = 0x244D5Cu;
    SET_GPR_U32(ctx, 31, 0x244D64u);
    ctx->pc = 0x244D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D5Cu;
    // 0x244d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244318u, 0x244D5Cu, 0x244D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D64u;
label_244d64:
    // 0x244d64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x244D64u;
    {
        const bool branch_taken_0x244d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D64u;
        // 0x244d68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d64) {
            ctx->pc = 0x244D90u;
            goto label_244d90;
        }
    }
    ctx->pc = 0x244D6Cu;
    // 0x244d6c: 0x0  nop
    ctx->pc = 0x244d6cu;
    // NOP
label_244d70:
    // 0x244d70: 0xc091142  jal         func_244508
    ctx->pc = 0x244D70u;
    SET_GPR_U32(ctx, 31, 0x244D78u);
    ctx->pc = 0x244508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244508u, 0x244D70u, 0x244D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D78u;
label_244d78:
    // 0x244d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d7c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244D7Cu;
    {
        const bool branch_taken_0x244d7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x244D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D7Cu;
        // 0x244d80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d7c) {
            ctx->pc = 0x244D8Cu;
            goto label_244d8c;
        }
    }
    ctx->pc = 0x244D84u;
    // 0x244d84: 0xc0910c6  jal         func_244318
    ctx->pc = 0x244D84u;
    SET_GPR_U32(ctx, 31, 0x244D8Cu);
    ctx->pc = 0x244318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244318u, 0x244D84u, 0x244D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D8Cu;
label_244d8c:
    // 0x244d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244d90:
    // 0x244d90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x244d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x244d94: 0x3e00008  jr          $ra
    ctx->pc = 0x244D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D94u;
        // 0x244d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244D9Cu;
    // 0x244d9c: 0x0  nop
    ctx->pc = 0x244d9cu;
    // NOP
    ctx->pc = 0x244da0u;
}

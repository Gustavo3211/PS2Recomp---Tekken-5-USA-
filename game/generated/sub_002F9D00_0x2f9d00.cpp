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

// Function: sub_002F9D00
// Address: 0x2f9d00 - 0x2f9da0
void sub_002F9D00_0x2f9d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9D00_0x2f9d00");
#endif

    switch (ctx->pc) {
        case 0x2f9d18u: goto label_2f9d18;
        case 0x2f9d28u: goto label_2f9d28;
        case 0x2f9d38u: goto label_2f9d38;
        case 0x2f9d4cu: goto label_2f9d4c;
        default: break;
    }

    ctx->pc = 0x2f9d00u;

    // 0x2f9d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f9d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9d0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f9d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f9d10: 0xc0bb914  jal         func_2EE450
    ctx->pc = 0x2F9D10u;
    SET_GPR_U32(ctx, 31, 0x2F9D18u);
    ctx->pc = 0x2F9D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9D10u;
    // 0x2f9d14: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE450u, 0x2F9D10u, 0x2F9D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9D18u;
label_2f9d18:
    // 0x2f9d18: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F9D18u;
    {
        const bool branch_taken_0x2f9d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D18u;
        // 0x2f9d1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d18) {
            ctx->pc = 0x2F9D44u;
            goto label_2f9d44;
        }
    }
    ctx->pc = 0x2F9D20u;
    // 0x2f9d20: 0xc092656  jal         func_249958
    ctx->pc = 0x2F9D20u;
    SET_GPR_U32(ctx, 31, 0x2F9D28u);
    ctx->pc = 0x249958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249958u, 0x2F9D20u, 0x2F9D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9D28u;
label_2f9d28:
    // 0x2f9d28: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9D28u;
    {
        const bool branch_taken_0x2f9d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d28) {
            ctx->pc = 0x2F9D44u;
            goto label_2f9d44;
        }
    }
    ctx->pc = 0x2F9D30u;
    // 0x2f9d30: 0xc04732c  jal         func_11CCB0
    ctx->pc = 0x2F9D30u;
    SET_GPR_U32(ctx, 31, 0x2F9D38u);
    ctx->pc = 0x11CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCB0u, 0x2F9D30u, 0x2F9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9D38u;
label_2f9d38:
    // 0x2f9d38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9d3c: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F9D3Cu;
    {
        const bool branch_taken_0x2f9d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f9d3c) {
            ctx->pc = 0x2F9D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9D3Cu;
            // 0x2f9d40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9D90u;
            goto label_2f9d90;
        }
    }
    ctx->pc = 0x2F9D44u;
label_2f9d44:
    // 0x2f9d44: 0xc092486  jal         func_249218
    ctx->pc = 0x2F9D44u;
    SET_GPR_U32(ctx, 31, 0x2F9D4Cu);
    ctx->pc = 0x2F9D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9D44u;
    // 0x2f9d48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x2F9D44u, 0x2F9D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9D4Cu;
label_2f9d4c:
    // 0x2f9d4c: 0x26050158  addiu       $a1, $s0, 0x158
    ctx->pc = 0x2f9d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x2f9d50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9d54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9D54u;
    {
        const bool branch_taken_0x2f9d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D54u;
        // 0x2f9d58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d54) {
            ctx->pc = 0x2F9D6Cu;
            goto label_2f9d6c;
        }
    }
    ctx->pc = 0x2F9D5Cu;
    // 0x2f9d5c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f9d60: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9d64: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9D64u;
    {
        const bool branch_taken_0x2f9d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9d64) {
            ctx->pc = 0x2F9D78u;
            goto label_2f9d78;
        }
    }
    ctx->pc = 0x2F9D6Cu;
label_2f9d6c:
    // 0x2f9d6c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f9d70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9d74: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9d74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9d78:
    // 0x2f9d78: 0xc7809518  lwc1        $f0, -0x6AE8($gp)
    ctx->pc = 0x2f9d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9d7c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2f9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f9d80: 0xac800130  sw          $zero, 0x130($a0)
    ctx->pc = 0x2f9d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 0));
    // 0x2f9d84: 0xe480013c  swc1        $f0, 0x13C($a0)
    ctx->pc = 0x2f9d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 316), bits); }
    // 0x2f9d88: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x2f9d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x2f9d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9d90:
    // 0x2f9d90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f9d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9d94: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D94u;
        // 0x2f9d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9D9Cu;
    // 0x2f9d9c: 0x0  nop
    ctx->pc = 0x2f9d9cu;
    // NOP
    ctx->pc = 0x2f9da0u;
}

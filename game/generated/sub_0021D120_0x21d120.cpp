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

// Function: sub_0021D120
// Address: 0x21d120 - 0x21d1e0
void sub_0021D120_0x21d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D120_0x21d120");
#endif

    switch (ctx->pc) {
        case 0x21d138u: goto label_21d138;
        case 0x21d140u: goto label_21d140;
        case 0x21d198u: goto label_21d198;
        default: break;
    }

    ctx->pc = 0x21d120u;

    // 0x21d120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d12c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21d12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21d130: 0xc086644  jal         func_219910
    ctx->pc = 0x21D130u;
    SET_GPR_U32(ctx, 31, 0x21D138u);
    ctx->pc = 0x21D134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D130u;
    // 0x21d134: 0x9204002d  lbu         $a0, 0x2D($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21D130u, 0x21D138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D138u;
label_21d138:
    // 0x21d138: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21D138u;
    SET_GPR_U32(ctx, 31, 0x21D140u);
    ctx->pc = 0x21D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D138u;
    // 0x21d13c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21D138u, 0x21D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D140u;
label_21d140:
    // 0x21d140: 0x92030031  lbu         $v1, 0x31($s0)
    ctx->pc = 0x21d140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x21d144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21d144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d148: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x21d148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x21d14c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21D14Cu;
    {
        const bool branch_taken_0x21d14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D14Cu;
        // 0x21d150: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d14c) {
            ctx->pc = 0x21D190u;
            goto label_21d190;
        }
    }
    ctx->pc = 0x21D154u;
    // 0x21d154: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x21d154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21d158: 0x240401f4  addiu       $a0, $zero, 0x1F4
    ctx->pc = 0x21d158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x21d15c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x21d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21d160: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x21d160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d168: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21d16c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x21d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x21d170: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d174: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x21d174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x21d178: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x21d178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x21d17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d180: 0xac43886c  sw          $v1, -0x7794($v0)
    ctx->pc = 0x21d180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x21d184: 0x8092486  j           func_249218
    ctx->pc = 0x21D184u;
    ctx->pc = 0x21D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D184u;
    // 0x21d188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    sub_00249218_0x249218(rdram, ctx, runtime); return;
    ctx->pc = 0x21D18Cu;
    // 0x21d18c: 0x0  nop
    ctx->pc = 0x21d18cu;
    // NOP
label_21d190:
    // 0x21d190: 0xc087684  jal         func_21DA10
    ctx->pc = 0x21D190u;
    SET_GPR_U32(ctx, 31, 0x21D198u);
    ctx->pc = 0x21DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA10u, 0x21D190u, 0x21D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D198u;
label_21d198:
    // 0x21d198: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21d198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21d19c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x21d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21d1a0: 0x24848858  addiu       $a0, $a0, -0x77A8
    ctx->pc = 0x21d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    // 0x21d1a4: 0x92060032  lbu         $a2, 0x32($s0)
    ctx->pc = 0x21d1a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x21d1a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d1ac: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x21d1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x21d1b0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x21d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21d1b4: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x21d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x21d1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d1bc: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x21d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x21d1c0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x21d1c0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x21d1c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21d1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d1c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21d1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21d1cc: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x21d1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x21d1d0: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x21d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x21d1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x21D1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1D4u;
        // 0x21d1d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D1DCu;
    // 0x21d1dc: 0x0  nop
    ctx->pc = 0x21d1dcu;
    // NOP
    ctx->pc = 0x21d1e0u;
}

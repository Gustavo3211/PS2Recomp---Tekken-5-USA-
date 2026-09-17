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

// Function: sub_002A97D0
// Address: 0x2a97d0 - 0x2a9888
void sub_002A97D0_0x2a97d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A97D0_0x2a97d0");
#endif

    switch (ctx->pc) {
        case 0x2a9860u: goto label_2a9860;
        default: break;
    }

    ctx->pc = 0x2a97d0u;

    // 0x2a97d0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a97d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a97d4: 0x10e00029  beqz        $a3, . + 4 + (0x29 << 2)
    ctx->pc = 0x2A97D4u;
    {
        const bool branch_taken_0x2a97d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97D4u;
        // 0x2a97d8: 0x24e30010  addiu       $v1, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97d4) {
            ctx->pc = 0x2A987Cu;
            goto label_2a987c;
        }
    }
    ctx->pc = 0x2A97DCu;
    // 0x2a97dc: 0xace00050  sw          $zero, 0x50($a3)
    ctx->pc = 0x2a97dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 0));
    // 0x2a97e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a97e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a97e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a97e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a97e8: 0x24e40020  addiu       $a0, $a3, 0x20
    ctx->pc = 0x2a97e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2a97ec: 0xc4e00050  lwc1        $f0, 0x50($a3)
    ctx->pc = 0x2a97ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a97f0: 0x24e50030  addiu       $a1, $a3, 0x30
    ctx->pc = 0x2a97f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2a97f4: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x2a97f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x2a97f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a97fc: 0xace2005c  sw          $v0, 0x5C($a3)
    ctx->pc = 0x2a97fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 2));
    // 0x2a9800: 0x24e90004  addiu       $t1, $a3, 0x4
    ctx->pc = 0x2a9800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2a9804: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2a9804u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2a9808: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a9808u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a980c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2a980cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2a9810: 0xe4e00054  swc1        $f0, 0x54($a3)
    ctx->pc = 0x2a9810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 84), bits); }
    // 0x2a9814: 0xe4e00058  swc1        $f0, 0x58($a3)
    ctx->pc = 0x2a9814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 88), bits); }
    // 0x2a9818: 0xace00060  sw          $zero, 0x60($a3)
    ctx->pc = 0x2a9818u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 0));
    // 0x2a981c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2a981cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2a9820: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a9820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a9824: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2a9824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a9828: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a9828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a982c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2a982cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2a9830: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2a9830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2a9834: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2a9834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2a9838: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2a9838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2a983c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x2a983cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2a9840: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2a9840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a9844: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2a9844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2a9848: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2a9848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2a984c: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x2a984cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2a9850: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2a9850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2a9854: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2a9854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a9858: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2a9858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2a985c: 0x0  nop
    ctx->pc = 0x2a985cu;
    // NOP
label_2a9860:
    // 0x2a9860: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2a9860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a9864: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a9864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a9868: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2a9868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a986c: 0x29030009  slti        $v1, $t0, 0x9
    ctx->pc = 0x2a986cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a9870: 0x0  nop
    ctx->pc = 0x2a9870u;
    // NOP
    // 0x2a9874: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A9874u;
    {
        const bool branch_taken_0x2a9874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9874u;
        // 0x2a9878: 0xac400060  sw          $zero, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9874) {
            ctx->pc = 0x2A9860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9860;
        }
    }
    ctx->pc = 0x2A987Cu;
label_2a987c:
    // 0x2a987c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A987Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A987Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9884u;
    // 0x2a9884: 0x0  nop
    ctx->pc = 0x2a9884u;
    // NOP
    ctx->pc = 0x2a9888u;
}

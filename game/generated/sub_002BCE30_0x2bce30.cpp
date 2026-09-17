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

// Function: sub_002BCE30
// Address: 0x2bce30 - 0x2bcef0
void sub_002BCE30_0x2bce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCE30_0x2bce30");
#endif

    ctx->pc = 0x2bce30u;

    // 0x2bce30: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2bce30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2bce34: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2bce34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2bce38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bce38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bce3c: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x2bce3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x2bce40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bce40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bce44: 0x24437b60  addiu       $v1, $v0, 0x7B60
    ctx->pc = 0x2bce44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 31584));
    // 0x2bce48: 0xc78191c8  lwc1        $f1, -0x6E38($gp)
    ctx->pc = 0x2bce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bce4c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2bce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2bce50: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x2bce50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x2bce54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bce54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bce58: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2bce58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x177B60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177B60u, _value); } while (0); }
    // 0x2bce5c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2bce5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x177B6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177B6Cu, _value); } while (0); }
    // 0x2bce60: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2bce60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x177B70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177B70u, _value); } while (0); }
    // 0x2bce64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2bce64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x177B64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177B64u, _value); } while (0);
    // 0x2bce68: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BCE68u;
    {
        const bool branch_taken_0x2bce68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE68u;
        // 0x2bce6c: 0xe4630008  swc1        $f3, 0x8($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce68) {
            ctx->pc = 0x2BCEC0u;
            goto label_2bcec0;
        }
    }
    ctx->pc = 0x2BCE70u;
    // 0x2bce70: 0x28820012  slti        $v0, $a0, 0x12
    ctx->pc = 0x2bce70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2bce74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BCE74u;
    {
        const bool branch_taken_0x2bce74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE74u;
        // 0x2bce78: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce74) {
            ctx->pc = 0x2BCE90u;
            goto label_2bce90;
        }
    }
    ctx->pc = 0x2BCE7Cu;
    // 0x2bce7c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2bce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bce80: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BCE80u;
    {
        const bool branch_taken_0x2bce80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bce80) {
            ctx->pc = 0x2BCE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCE80u;
            // 0x2bce84: 0xe4630010  swc1        $f3, 0x10($v1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCEA8u;
            goto label_2bcea8;
        }
    }
    ctx->pc = 0x2BCE88u;
    // 0x2bce88: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCE90u;
label_2bce90:
    // 0x2bce90: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BCE90u;
    {
        const bool branch_taken_0x2bce90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE90u;
        // 0x2bce94: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce90) {
            ctx->pc = 0x2BCEC0u;
            goto label_2bcec0;
        }
    }
    ctx->pc = 0x2BCE98u;
    // 0x2bce98: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BCE98u;
    {
        const bool branch_taken_0x2bce98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bce98) {
            ctx->pc = 0x2BCEE0u;
            goto label_2bcee0;
        }
    }
    ctx->pc = 0x2BCEA0u;
    // 0x2bcea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCEA8u;
label_2bcea8:
    // 0x2bcea8: 0x3c01c42f  lui         $at, 0xC42F
    ctx->pc = 0x2bcea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50223 << 16));
    // 0x2bceac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bceacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bceb0: 0xc78191cc  lwc1        $f1, -0x6E34($gp)
    ctx->pc = 0x2bceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bceb4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2bceb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2bceb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEB8u;
        // 0x2bcebc: 0xe461000c  swc1        $f1, 0xC($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCEC0u;
label_2bcec0:
    // 0x2bcec0: 0x3c01c416  lui         $at, 0xC416
    ctx->pc = 0x2bcec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50198 << 16));
    // 0x2bcec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bcec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcec8: 0xc78191d0  lwc1        $f1, -0x6E30($gp)
    ctx->pc = 0x2bcec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcecc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2bceccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2bced0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2bced0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2bced4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCED4u;
        // 0x2bced8: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCEDCu;
    // 0x2bcedc: 0x0  nop
    ctx->pc = 0x2bcedcu;
    // NOP
label_2bcee0:
    // 0x2bcee0: 0xc78091d4  lwc1        $f0, -0x6E2C($gp)
    ctx->pc = 0x2bcee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcee4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCEE4u;
        // 0x2bcee8: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCEECu;
    // 0x2bceec: 0x0  nop
    ctx->pc = 0x2bceecu;
    // NOP
    ctx->pc = 0x2bcef0u;
}

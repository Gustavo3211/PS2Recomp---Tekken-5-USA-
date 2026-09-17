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

// Function: sub_00297E68
// Address: 0x297e68 - 0x297f58
void sub_00297E68_0x297e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297E68_0x297e68");
#endif

    ctx->pc = 0x297e68u;

    // 0x297e68: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x297e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e6c: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x297e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x297e70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x297E70u;
    {
        const bool branch_taken_0x297e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E70u;
        // 0x297e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e70) {
            ctx->pc = 0x297E88u;
            goto label_297e88;
        }
    }
    ctx->pc = 0x297E78u;
    // 0x297e78: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x297E78u;
    {
        const bool branch_taken_0x297e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x297E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E78u;
        // 0x297e7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e78) {
            ctx->pc = 0x297ED0u;
            goto label_297ed0;
        }
    }
    ctx->pc = 0x297E80u;
    // 0x297e80: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x297E80u;
    {
        const bool branch_taken_0x297e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e80) {
            ctx->pc = 0x297F50u;
            goto label_297f50;
        }
    }
    ctx->pc = 0x297E88u;
label_297e88:
    // 0x297e88: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x297e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x297e8c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x297e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x297e90: 0x8cc30090  lw          $v1, 0x90($a2)
    ctx->pc = 0x297e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x297e94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x297e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297e98: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x297e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x297e9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297ea0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x297ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x297ea4: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x297ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x297ea8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297eac: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x297eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x297eb0: 0x3c0142dc  lui         $at, 0x42DC
    ctx->pc = 0x297eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17116 << 16));
    // 0x297eb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297eb8: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x297eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
    // 0x297ebc: 0xe4c20050  swc1        $f2, 0x50($a2)
    ctx->pc = 0x297ebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
    // 0x297ec0: 0xe4c10054  swc1        $f1, 0x54($a2)
    ctx->pc = 0x297ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x297ec4: 0xe4c00058  swc1        $f0, 0x58($a2)
    ctx->pc = 0x297ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x297ec8: 0xacc30090  sw          $v1, 0x90($a2)
    ctx->pc = 0x297ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 3));
    // 0x297ecc: 0xacc50048  sw          $a1, 0x48($a2)
    ctx->pc = 0x297eccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 5));
label_297ed0:
    // 0x297ed0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x297ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x297ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297ed8: 0x244574e8  addiu       $a1, $v0, 0x74E8
    ctx->pc = 0x297ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29928));
    // 0x297edc: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x297edcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x1774E8u));
    // 0x297ee0: 0x14e30017  bne         $a3, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x297EE0u;
    {
        const bool branch_taken_0x297ee0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x297EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EE0u;
        // 0x297ee4: 0x8cc20040  lw          $v0, 0x40($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ee0) {
            ctx->pc = 0x297F40u;
            goto label_297f40;
        }
    }
    ctx->pc = 0x297EE8u;
    // 0x297ee8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x297ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x297eec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x297eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x297ef0: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x297ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
    // 0x297ef4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x297ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297ef8: 0xe4c00050  swc1        $f0, 0x50($a2)
    ctx->pc = 0x297ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
    // 0x297efc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x297efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297f00: 0xe4c10054  swc1        $f1, 0x54($a2)
    ctx->pc = 0x297f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x297f04: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x297f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f08: 0xe4c0008c  swc1        $f0, 0x8C($a2)
    ctx->pc = 0x297f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 140), bits); }
    // 0x297f0c: 0x8c82f4dc  lw          $v0, -0xB24($a0)
    ctx->pc = 0x297f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF4DCu));
    // 0x297f10: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x297f10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297f14: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x297F14u;
    {
        const bool branch_taken_0x297f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x297f14) {
            ctx->pc = 0x297F30u;
            goto label_297f30;
        }
    }
    ctx->pc = 0x297F1Cu;
    // 0x297f1c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x297f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x297f20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297f24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x297F24u;
    {
        const bool branch_taken_0x297f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F24u;
        // 0x297f28: 0xe4c00070  swc1        $f0, 0x70($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f24) {
            ctx->pc = 0x297F4Cu;
            goto label_297f4c;
        }
    }
    ctx->pc = 0x297F2Cu;
    // 0x297f2c: 0x0  nop
    ctx->pc = 0x297f2cu;
    // NOP
label_297f30:
    // 0x297f30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x297f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x297f34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x297F38u;
    {
        const bool branch_taken_0x297f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F38u;
        // 0x297f3c: 0xe4c00070  swc1        $f0, 0x70($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f38) {
            ctx->pc = 0x297F4Cu;
            goto label_297f4c;
        }
    }
    ctx->pc = 0x297F40u;
label_297f40:
    // 0x297f40: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x297f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x297f44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x297f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x297f48: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x297f48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
label_297f4c:
    // 0x297f4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x297f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297f50:
    // 0x297f50: 0x3e00008  jr          $ra
    ctx->pc = 0x297F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297F58u;
}

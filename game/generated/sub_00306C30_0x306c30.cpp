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

// Function: sub_00306C30
// Address: 0x306c30 - 0x306d38
void sub_00306C30_0x306c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306C30_0x306c30");
#endif

    switch (ctx->pc) {
        case 0x306c7cu: goto label_306c7c;
        case 0x306cacu: goto label_306cac;
        case 0x306cd8u: goto label_306cd8;
        case 0x306d00u: goto label_306d00;
        case 0x306d14u: goto label_306d14;
        case 0x306d24u: goto label_306d24;
        default: break;
    }

    ctx->pc = 0x306c30u;

    // 0x306c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x306c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x306c34: 0x2485004c  addiu       $a1, $a0, 0x4C
    ctx->pc = 0x306c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x306c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x306c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x306c3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x306c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x306c40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x306c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x306c44: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x306c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x306c48: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x306C48u;
    {
        const bool branch_taken_0x306c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c48) {
            ctx->pc = 0x306C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306C48u;
            // 0x306c4c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306C64u;
            goto label_306c64;
        }
    }
    ctx->pc = 0x306C50u;
    // 0x306c50: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x306c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x306c54: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x306c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x306c58: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x306C58u;
    {
        const bool branch_taken_0x306c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x306C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C58u;
        // 0x306c5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c58) {
            ctx->pc = 0x306C6Cu;
            goto label_306c6c;
        }
    }
    ctx->pc = 0x306C60u;
    // 0x306c60: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x306c60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_306c64:
    // 0x306c64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x306c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306c68: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x306c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_306c6c:
    // 0x306c6c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x306c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306c74: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306C74u;
    SET_GPR_U32(ctx, 31, 0x306C7Cu);
    ctx->pc = 0x306C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306C74u;
    // 0x306c78: 0x24a52608  addiu       $a1, $a1, 0x2608 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306C74u, 0x306C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C7Cu;
label_306c7c:
    // 0x306c7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x306C7Cu;
    {
        const bool branch_taken_0x306c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C7Cu;
        // 0x306c80: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c7c) {
            ctx->pc = 0x306CA0u;
            goto label_306ca0;
        }
    }
    ctx->pc = 0x306C84u;
    // 0x306c84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x306c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306c88: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x306C88u;
    {
        const bool branch_taken_0x306c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C88u;
        // 0x306c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c88) {
            ctx->pc = 0x306CA4u;
            goto label_306ca4;
        }
    }
    ctx->pc = 0x306C90u;
    // 0x306c90: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x306c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x306c94: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x306c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306c98: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x306c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x306c9c: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x306c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
label_306ca0:
    // 0x306ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306ca4:
    // 0x306ca4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306CA4u;
    SET_GPR_U32(ctx, 31, 0x306CACu);
    ctx->pc = 0x306CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CA4u;
    // 0x306ca8: 0x26252618  addiu       $a1, $s1, 0x2618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 9752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306CA4u, 0x306CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CACu;
label_306cac:
    // 0x306cac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x306CACu;
    {
        const bool branch_taken_0x306cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CACu;
        // 0x306cb0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306cac) {
            ctx->pc = 0x306CCCu;
            goto label_306ccc;
        }
    }
    ctx->pc = 0x306CB4u;
    // 0x306cb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x306cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306cb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x306CB8u;
    {
        const bool branch_taken_0x306cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306cb8) {
            ctx->pc = 0x306CCCu;
            goto label_306ccc;
        }
    }
    ctx->pc = 0x306CC0u;
    // 0x306cc0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x306cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x306cc4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x306cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306cc8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x306cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_306ccc:
    // 0x306ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306cd0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306CD0u;
    SET_GPR_U32(ctx, 31, 0x306CD8u);
    ctx->pc = 0x306CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CD0u;
    // 0x306cd4: 0x24a52630  addiu       $a1, $a1, 0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306CD0u, 0x306CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CD8u;
label_306cd8:
    // 0x306cd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x306CD8u;
    {
        const bool branch_taken_0x306cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CD8u;
        // 0x306cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306cd8) {
            ctx->pc = 0x306CF8u;
            goto label_306cf8;
        }
    }
    ctx->pc = 0x306CE0u;
    // 0x306ce0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x306ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306ce4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x306CE4u;
    {
        const bool branch_taken_0x306ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306ce4) {
            ctx->pc = 0x306CF8u;
            goto label_306cf8;
        }
    }
    ctx->pc = 0x306CECu;
    // 0x306cec: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x306cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x306cf0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x306cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306cf4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x306cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_306cf8:
    // 0x306cf8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306CF8u;
    SET_GPR_U32(ctx, 31, 0x306D00u);
    ctx->pc = 0x306CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CF8u;
    // 0x306cfc: 0x26252618  addiu       $a1, $s1, 0x2618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 9752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306CF8u, 0x306D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D00u;
label_306d00:
    // 0x306d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306d04: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x306d04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306d08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x306d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x306d0c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x306D0Cu;
    SET_GPR_U32(ctx, 31, 0x306D14u);
    ctx->pc = 0x306D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D0Cu;
    // 0x306d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x306D0Cu, 0x306D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D14u;
label_306d14:
    // 0x306d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306d18: 0xc78c95b8  lwc1        $f12, -0x6A48($gp)
    ctx->pc = 0x306d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x306d1c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x306D1Cu;
    SET_GPR_U32(ctx, 31, 0x306D24u);
    ctx->pc = 0x306D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D1Cu;
    // 0x306d20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x306D1Cu, 0x306D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D24u;
label_306d24:
    // 0x306d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x306d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306d28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x306d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x306d2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x306d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306d30: 0x3e00008  jr          $ra
    ctx->pc = 0x306D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D30u;
        // 0x306d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306D38u;
}

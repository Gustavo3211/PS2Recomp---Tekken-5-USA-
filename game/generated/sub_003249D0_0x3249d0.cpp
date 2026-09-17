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

// Function: sub_003249D0
// Address: 0x3249d0 - 0x324a90
void sub_003249D0_0x3249d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003249D0_0x3249d0");
#endif

    switch (ctx->pc) {
        case 0x3249d0u: goto label_3249d0;
        case 0x3249d4u: goto label_3249d4;
        case 0x3249d8u: goto label_3249d8;
        case 0x3249dcu: goto label_3249dc;
        case 0x3249e0u: goto label_3249e0;
        case 0x3249e4u: goto label_3249e4;
        case 0x3249e8u: goto label_3249e8;
        case 0x3249ecu: goto label_3249ec;
        case 0x3249f0u: goto label_3249f0;
        case 0x3249f4u: goto label_3249f4;
        case 0x3249f8u: goto label_3249f8;
        case 0x3249fcu: goto label_3249fc;
        case 0x324a00u: goto label_324a00;
        case 0x324a04u: goto label_324a04;
        case 0x324a08u: goto label_324a08;
        case 0x324a0cu: goto label_324a0c;
        case 0x324a10u: goto label_324a10;
        case 0x324a14u: goto label_324a14;
        case 0x324a18u: goto label_324a18;
        case 0x324a1cu: goto label_324a1c;
        case 0x324a20u: goto label_324a20;
        case 0x324a24u: goto label_324a24;
        case 0x324a28u: goto label_324a28;
        case 0x324a2cu: goto label_324a2c;
        case 0x324a30u: goto label_324a30;
        case 0x324a34u: goto label_324a34;
        case 0x324a38u: goto label_324a38;
        case 0x324a3cu: goto label_324a3c;
        case 0x324a40u: goto label_324a40;
        case 0x324a44u: goto label_324a44;
        case 0x324a48u: goto label_324a48;
        case 0x324a4cu: goto label_324a4c;
        case 0x324a50u: goto label_324a50;
        case 0x324a54u: goto label_324a54;
        case 0x324a58u: goto label_324a58;
        case 0x324a5cu: goto label_324a5c;
        case 0x324a60u: goto label_324a60;
        case 0x324a64u: goto label_324a64;
        case 0x324a68u: goto label_324a68;
        case 0x324a6cu: goto label_324a6c;
        case 0x324a70u: goto label_324a70;
        case 0x324a74u: goto label_324a74;
        case 0x324a78u: goto label_324a78;
        case 0x324a7cu: goto label_324a7c;
        case 0x324a80u: goto label_324a80;
        case 0x324a84u: goto label_324a84;
        case 0x324a88u: goto label_324a88;
        case 0x324a8cu: goto label_324a8c;
        default: break;
    }

    ctx->pc = 0x3249d0u;

label_3249d0:
    // 0x3249d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3249d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3249d4:
    // 0x3249d4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3249d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3249d8:
    // 0x3249d8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3249d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_3249dc:
    // 0x3249dc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3249dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3249e0:
    // 0x3249e0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3249e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_3249e4:
    // 0x3249e4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3249e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3249e8:
    // 0x3249e8: 0x24421df0  addiu       $v0, $v0, 0x1DF0
    ctx->pc = 0x3249e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7664));
label_3249ec:
    // 0x3249ec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3249ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3249f0:
    // 0x3249f0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x3249f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_3249f4:
    // 0x3249f4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3249f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3249f8:
    // 0x3249f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3249f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3249fc:
    // 0x3249fc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3249fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_324a00:
    // 0x324a00: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x324a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_324a04:
    // 0x324a04: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x324a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_324a08:
    // 0x324a08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x324a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_324a0c:
    // 0x324a0c: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x324a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
label_324a10:
    // 0x324a10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x324a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_324a14:
    // 0x324a14: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x324a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_324a18:
    // 0x324a18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x324a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_324a1c:
    // 0x324a1c: 0x24420410  addiu       $v0, $v0, 0x410
    ctx->pc = 0x324a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
label_324a20:
    // 0x324a20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x324a20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_324a24:
    // 0x324a24: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x324a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_324a28:
    // 0x324a28: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x324a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_324a2c:
    // 0x324a2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x324a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324a30:
    // 0x324a30: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_324a34:
    if (ctx->pc == 0x324A34u) {
        ctx->pc = 0x324A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A30u;
        // 0x324a34: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A38u;
        goto label_324a38;
    }
    ctx->pc = 0x324A30u;
    {
        const bool branch_taken_0x324a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x324A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A30u;
        // 0x324a34: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324a30) {
            ctx->pc = 0x324A74u;
            goto label_324a74;
        }
    }
    ctx->pc = 0x324A38u;
label_324a38:
    // 0x324a38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x324a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_324a3c:
    // 0x324a3c: 0x0  nop
    ctx->pc = 0x324a3cu;
    // NOP
label_324a40:
    // 0x324a40: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x324a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324a44:
    // 0x324a44: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x324a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_324a48:
    // 0x324a48: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x324a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_324a4c:
    // 0x324a4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x324a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_324a50:
    // 0x324a50: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x324a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_324a54:
    // 0x324a54: 0x60f809  jalr        $v1
label_324a58:
    if (ctx->pc == 0x324A58u) {
        ctx->pc = 0x324A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A54u;
        // 0x324a58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A5Cu;
        goto label_324a5c;
    }
    ctx->pc = 0x324A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x324A5Cu);
        ctx->pc = 0x324A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A54u;
        // 0x324a58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324A54u, 0x324A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324A5Cu;
label_324a5c:
    // 0x324a5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x324a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324a60:
    // 0x324a60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x324a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_324a64:
    // 0x324a64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x324a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_324a68:
    // 0x324a68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x324a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_324a6c:
    // 0x324a6c: 0x5462fff4  bnel        $v1, $v0, . + 4 + (-0xC << 2)
label_324a70:
    if (ctx->pc == 0x324A70u) {
        ctx->pc = 0x324A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A6Cu;
        // 0x324a70: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A74u;
        goto label_324a74;
    }
    ctx->pc = 0x324A6Cu;
    {
        const bool branch_taken_0x324a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x324a6c) {
            ctx->pc = 0x324A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324A6Cu;
            // 0x324a70: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324a40;
        }
    }
    ctx->pc = 0x324A74u;
label_324a74:
    // 0x324a74: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x324a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_324a78:
    // 0x324a78: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x324a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_324a7c:
    // 0x324a7c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x324a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_324a80:
    // 0x324a80: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x324a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_324a84:
    // 0x324a84: 0x3e00008  jr          $ra
label_324a88:
    if (ctx->pc == 0x324A88u) {
        ctx->pc = 0x324A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A84u;
        // 0x324a88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A8Cu;
        goto label_324a8c;
    }
    ctx->pc = 0x324A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A84u;
        // 0x324a88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324A8Cu;
label_324a8c:
    // 0x324a8c: 0x0  nop
    ctx->pc = 0x324a8cu;
    // NOP
    ctx->pc = 0x324a90u;
}

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

// Function: sub_0034CBE0
// Address: 0x34cbe0 - 0x34ccc8
void sub_0034CBE0_0x34cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CBE0_0x34cbe0");
#endif

    switch (ctx->pc) {
        case 0x34cbe0u: goto label_34cbe0;
        case 0x34cbe4u: goto label_34cbe4;
        case 0x34cbe8u: goto label_34cbe8;
        case 0x34cbecu: goto label_34cbec;
        case 0x34cbf0u: goto label_34cbf0;
        case 0x34cbf4u: goto label_34cbf4;
        case 0x34cbf8u: goto label_34cbf8;
        case 0x34cbfcu: goto label_34cbfc;
        case 0x34cc00u: goto label_34cc00;
        case 0x34cc04u: goto label_34cc04;
        case 0x34cc08u: goto label_34cc08;
        case 0x34cc0cu: goto label_34cc0c;
        case 0x34cc10u: goto label_34cc10;
        case 0x34cc14u: goto label_34cc14;
        case 0x34cc18u: goto label_34cc18;
        case 0x34cc1cu: goto label_34cc1c;
        case 0x34cc20u: goto label_34cc20;
        case 0x34cc24u: goto label_34cc24;
        case 0x34cc28u: goto label_34cc28;
        case 0x34cc2cu: goto label_34cc2c;
        case 0x34cc30u: goto label_34cc30;
        case 0x34cc34u: goto label_34cc34;
        case 0x34cc38u: goto label_34cc38;
        case 0x34cc3cu: goto label_34cc3c;
        case 0x34cc40u: goto label_34cc40;
        case 0x34cc44u: goto label_34cc44;
        case 0x34cc48u: goto label_34cc48;
        case 0x34cc4cu: goto label_34cc4c;
        case 0x34cc50u: goto label_34cc50;
        case 0x34cc54u: goto label_34cc54;
        case 0x34cc58u: goto label_34cc58;
        case 0x34cc5cu: goto label_34cc5c;
        case 0x34cc60u: goto label_34cc60;
        case 0x34cc64u: goto label_34cc64;
        case 0x34cc68u: goto label_34cc68;
        case 0x34cc6cu: goto label_34cc6c;
        case 0x34cc70u: goto label_34cc70;
        case 0x34cc74u: goto label_34cc74;
        case 0x34cc78u: goto label_34cc78;
        case 0x34cc7cu: goto label_34cc7c;
        case 0x34cc80u: goto label_34cc80;
        case 0x34cc84u: goto label_34cc84;
        case 0x34cc88u: goto label_34cc88;
        case 0x34cc8cu: goto label_34cc8c;
        case 0x34cc90u: goto label_34cc90;
        case 0x34cc94u: goto label_34cc94;
        case 0x34cc98u: goto label_34cc98;
        case 0x34cc9cu: goto label_34cc9c;
        case 0x34cca0u: goto label_34cca0;
        case 0x34cca4u: goto label_34cca4;
        case 0x34cca8u: goto label_34cca8;
        case 0x34ccacu: goto label_34ccac;
        case 0x34ccb0u: goto label_34ccb0;
        case 0x34ccb4u: goto label_34ccb4;
        case 0x34ccb8u: goto label_34ccb8;
        case 0x34ccbcu: goto label_34ccbc;
        case 0x34ccc0u: goto label_34ccc0;
        case 0x34ccc4u: goto label_34ccc4;
        default: break;
    }

    ctx->pc = 0x34cbe0u;

label_34cbe0:
    // 0x34cbe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_34cbe4:
    // 0x34cbe4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_34cbe8:
    // 0x34cbe8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34cbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_34cbec:
    // 0x34cbec: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34cbecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34cbf0:
    // 0x34cbf0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34cbf4:
    // 0x34cbf4: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_34cbf8:
    // 0x34cbf8: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x34cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_34cbfc:
    // 0x34cbfc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34cc00:
    // 0x34cc00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34cc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34cc04:
    // 0x34cc04: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34cc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_34cc08:
    // 0x34cc08: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x34cc08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34cc0c:
    // 0x34cc0c: 0xc0d3332  jal         func_34CCC8
label_34cc10:
    if (ctx->pc == 0x34CC10u) {
        ctx->pc = 0x34CC14u;
        goto label_34cc14;
    }
    ctx->pc = 0x34CC0Cu;
    SET_GPR_U32(ctx, 31, 0x34CC14u);
    ctx->pc = 0x34CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCC8u, 0x34CC0Cu, 0x34CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC14u;
label_34cc14:
    // 0x34cc14: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x34cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_34cc18:
    // 0x34cc18: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x34cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_34cc1c:
    // 0x34cc1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34cc20:
    if (ctx->pc == 0x34CC20u) {
        ctx->pc = 0x34CC24u;
        goto label_34cc24;
    }
    ctx->pc = 0x34CC1Cu;
    {
        const bool branch_taken_0x34cc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34cc1c) {
            ctx->pc = 0x34CC34u;
            goto label_34cc34;
        }
    }
    ctx->pc = 0x34CC24u;
label_34cc24:
    // 0x34cc24: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34cc28:
    // 0x34cc28: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34cc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_34cc2c:
    // 0x34cc2c: 0x10000020  b           . + 4 + (0x20 << 2)
label_34cc30:
    if (ctx->pc == 0x34CC30u) {
        ctx->pc = 0x34CC34u;
        goto label_34cc34;
    }
    ctx->pc = 0x34CC2Cu;
    {
        const bool branch_taken_0x34cc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cc2c) {
            ctx->pc = 0x34CCB0u;
            goto label_34ccb0;
        }
    }
    ctx->pc = 0x34CC34u;
label_34cc34:
    // 0x34cc34: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_34cc38:
    // 0x34cc38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34cc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34cc3c:
    // 0x34cc3c: 0xc0d407a  jal         func_3501E8
label_34cc40:
    if (ctx->pc == 0x34CC40u) {
        ctx->pc = 0x34CC44u;
        goto label_34cc44;
    }
    ctx->pc = 0x34CC3Cu;
    SET_GPR_U32(ctx, 31, 0x34CC44u);
    ctx->pc = 0x3501E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3501E8u, 0x34CC3Cu, 0x34CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC44u;
label_34cc44:
    // 0x34cc44: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
label_34cc48:
    // 0x34cc48: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x34cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_34cc4c:
    // 0x34cc4c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_34cc50:
    if (ctx->pc == 0x34CC50u) {
        ctx->pc = 0x34CC54u;
        goto label_34cc54;
    }
    ctx->pc = 0x34CC4Cu;
    {
        const bool branch_taken_0x34cc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34cc4c) {
            ctx->pc = 0x34CC70u;
            goto label_34cc70;
        }
    }
    ctx->pc = 0x34CC54u;
label_34cc54:
    // 0x34cc54: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x34cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_34cc58:
    // 0x34cc58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34cc5c:
    // 0x34cc5c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_34cc60:
    // 0x34cc60: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34cc64:
    // 0x34cc64: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x34cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_34cc68:
    // 0x34cc68: 0x10000003  b           . + 4 + (0x3 << 2)
label_34cc6c:
    if (ctx->pc == 0x34CC6Cu) {
        ctx->pc = 0x34CC70u;
        goto label_34cc70;
    }
    ctx->pc = 0x34CC68u;
    {
        const bool branch_taken_0x34cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cc68) {
            ctx->pc = 0x34CC78u;
            goto label_34cc78;
        }
    }
    ctx->pc = 0x34CC70u;
label_34cc70:
    // 0x34cc70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34cc74:
    // 0x34cc74: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34cc78:
    // 0x34cc78: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34cc7c:
    // 0x34cc7c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x34cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_34cc80:
    // 0x34cc80: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x34cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_34cc84:
    // 0x34cc84: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34cc88:
    // 0x34cc88: 0x2442ba54  addiu       $v0, $v0, -0x45AC
    ctx->pc = 0x34cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949460));
label_34cc8c:
    // 0x34cc8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34cc90:
    // 0x34cc90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34cc94:
    // 0x34cc94: 0x8fc40034  lw          $a0, 0x34($fp)
    ctx->pc = 0x34cc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_34cc98:
    // 0x34cc98: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34cc9c:
    // 0x34cc9c: 0x8fc60030  lw          $a2, 0x30($fp)
    ctx->pc = 0x34cc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_34cca0:
    // 0x34cca0: 0x40f809  jalr        $v0
label_34cca4:
    if (ctx->pc == 0x34CCA4u) {
        ctx->pc = 0x34CCA8u;
        goto label_34cca8;
    }
    ctx->pc = 0x34CCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34CCA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CCA0u, 0x34CCA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34CCA8u;
label_34cca8:
    // 0x34cca8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_34ccac:
    // 0x34ccac: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34ccb0:
    // 0x34ccb0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34ccb0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34ccb4:
    // 0x34ccb4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34ccb4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34ccb8:
    // 0x34ccb8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34ccb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_34ccbc:
    // 0x34ccbc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34ccbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34ccc0:
    // 0x34ccc0: 0x3e00008  jr          $ra
label_34ccc4:
    if (ctx->pc == 0x34CCC4u) {
        ctx->pc = 0x34CCC8u;
        goto label_fallthrough_0x34ccc0;
    }
    ctx->pc = 0x34CCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34ccc0:
    ctx->pc = 0x34CCC8u;
}

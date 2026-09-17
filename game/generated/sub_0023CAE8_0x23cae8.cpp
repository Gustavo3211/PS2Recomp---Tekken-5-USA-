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

// Function: sub_0023CAE8
// Address: 0x23cae8 - 0x23cb98
void sub_0023CAE8_0x23cae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CAE8_0x23cae8");
#endif

    switch (ctx->pc) {
        case 0x23cae8u: goto label_23cae8;
        case 0x23caecu: goto label_23caec;
        case 0x23caf0u: goto label_23caf0;
        case 0x23caf4u: goto label_23caf4;
        case 0x23caf8u: goto label_23caf8;
        case 0x23cafcu: goto label_23cafc;
        case 0x23cb00u: goto label_23cb00;
        case 0x23cb04u: goto label_23cb04;
        case 0x23cb08u: goto label_23cb08;
        case 0x23cb0cu: goto label_23cb0c;
        case 0x23cb10u: goto label_23cb10;
        case 0x23cb14u: goto label_23cb14;
        case 0x23cb18u: goto label_23cb18;
        case 0x23cb1cu: goto label_23cb1c;
        case 0x23cb20u: goto label_23cb20;
        case 0x23cb24u: goto label_23cb24;
        case 0x23cb28u: goto label_23cb28;
        case 0x23cb2cu: goto label_23cb2c;
        case 0x23cb30u: goto label_23cb30;
        case 0x23cb34u: goto label_23cb34;
        case 0x23cb38u: goto label_23cb38;
        case 0x23cb3cu: goto label_23cb3c;
        case 0x23cb40u: goto label_23cb40;
        case 0x23cb44u: goto label_23cb44;
        case 0x23cb48u: goto label_23cb48;
        case 0x23cb4cu: goto label_23cb4c;
        case 0x23cb50u: goto label_23cb50;
        case 0x23cb54u: goto label_23cb54;
        case 0x23cb58u: goto label_23cb58;
        case 0x23cb5cu: goto label_23cb5c;
        case 0x23cb60u: goto label_23cb60;
        case 0x23cb64u: goto label_23cb64;
        case 0x23cb68u: goto label_23cb68;
        case 0x23cb6cu: goto label_23cb6c;
        case 0x23cb70u: goto label_23cb70;
        case 0x23cb74u: goto label_23cb74;
        case 0x23cb78u: goto label_23cb78;
        case 0x23cb7cu: goto label_23cb7c;
        case 0x23cb80u: goto label_23cb80;
        case 0x23cb84u: goto label_23cb84;
        case 0x23cb88u: goto label_23cb88;
        case 0x23cb8cu: goto label_23cb8c;
        case 0x23cb90u: goto label_23cb90;
        case 0x23cb94u: goto label_23cb94;
        default: break;
    }

    ctx->pc = 0x23cae8u;

label_23cae8:
    // 0x23cae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23cae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23caec:
    // 0x23caec: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x23caecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_23caf0:
    // 0x23caf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23caf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23caf4:
    // 0x23caf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23caf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23caf8:
    // 0x23caf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23caf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23cafc:
    // 0x23cafc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23cafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23cb00:
    // 0x23cb00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23cb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_23cb04:
    // 0x23cb04: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x23cb04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_23cb08:
    // 0x23cb08: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
label_23cb0c:
    if (ctx->pc == 0x23CB0Cu) {
        ctx->pc = 0x23CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB08u;
        // 0x23cb0c: 0x24120099  addiu       $s2, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB10u;
        goto label_23cb10;
    }
    ctx->pc = 0x23CB08u;
    {
        const bool branch_taken_0x23cb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB08u;
        // 0x23cb0c: 0x24120099  addiu       $s2, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb08) {
            ctx->pc = 0x23CB7Cu;
            goto label_23cb7c;
        }
    }
    ctx->pc = 0x23CB10u;
label_23cb10:
    // 0x23cb10: 0xc0895f8  jal         func_2257E0
label_23cb14:
    if (ctx->pc == 0x23CB14u) {
        ctx->pc = 0x23CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB10u;
        // 0x23cb14: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB18u;
        goto label_23cb18;
    }
    ctx->pc = 0x23CB10u;
    SET_GPR_U32(ctx, 31, 0x23CB18u);
    ctx->pc = 0x23CB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB10u;
    // 0x23cb14: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2257E0u, 0x23CB10u, 0x23CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB18u;
label_23cb18:
    // 0x23cb18: 0x86110002  lh          $s1, 0x2($s0)
    ctx->pc = 0x23cb18u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_23cb1c:
    // 0x23cb1c: 0x621000c  bgez        $s1, . + 4 + (0xC << 2)
label_23cb20:
    if (ctx->pc == 0x23CB20u) {
        ctx->pc = 0x23CB24u;
        goto label_23cb24;
    }
    ctx->pc = 0x23CB1Cu;
    {
        const bool branch_taken_0x23cb1c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x23cb1c) {
            ctx->pc = 0x23CB50u;
            goto label_23cb50;
        }
    }
    ctx->pc = 0x23CB24u;
label_23cb24:
    // 0x23cb24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cb28:
    // 0x23cb28: 0x40f809  jalr        $v0
label_23cb2c:
    if (ctx->pc == 0x23CB2Cu) {
        ctx->pc = 0x23CB30u;
        goto label_23cb30;
    }
    ctx->pc = 0x23CB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CB30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CB28u, 0x23CB30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CB30u;
label_23cb30:
    // 0x23cb30: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x23cb30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_23cb34:
    // 0x23cb34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23cb34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23cb38:
    // 0x23cb38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23cb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23cb3c:
    // 0x23cb3c: 0xc089636  jal         func_2258D8
label_23cb40:
    if (ctx->pc == 0x23CB40u) {
        ctx->pc = 0x23CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB3Cu;
        // 0x23cb40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB44u;
        goto label_23cb44;
    }
    ctx->pc = 0x23CB3Cu;
    SET_GPR_U32(ctx, 31, 0x23CB44u);
    ctx->pc = 0x23CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB3Cu;
    // 0x23cb40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x23CB3Cu, 0x23CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB44u;
label_23cb44:
    // 0x23cb44: 0x1000000a  b           . + 4 + (0xA << 2)
label_23cb48:
    if (ctx->pc == 0x23CB48u) {
        ctx->pc = 0x23CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB44u;
        // 0x23cb48: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB4Cu;
        goto label_23cb4c;
    }
    ctx->pc = 0x23CB44u;
    {
        const bool branch_taken_0x23cb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB44u;
        // 0x23cb48: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb44) {
            ctx->pc = 0x23CB70u;
            goto label_23cb70;
        }
    }
    ctx->pc = 0x23CB4Cu;
label_23cb4c:
    // 0x23cb4c: 0x0  nop
    ctx->pc = 0x23cb4cu;
    // NOP
label_23cb50:
    // 0x23cb50: 0xc0404b8  jal         func_1012E0
label_23cb54:
    if (ctx->pc == 0x23CB54u) {
        ctx->pc = 0x23CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB50u;
        // 0x23cb54: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB58u;
        goto label_23cb58;
    }
    ctx->pc = 0x23CB50u;
    SET_GPR_U32(ctx, 31, 0x23CB58u);
    ctx->pc = 0x23CB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB50u;
    // 0x23cb54: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x23CB50u, 0x23CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB58u;
label_23cb58:
    // 0x23cb58: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x23cb58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_23cb5c:
    // 0x23cb5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23cb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23cb60:
    // 0x23cb60: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23cb60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23cb64:
    // 0x23cb64: 0xc089636  jal         func_2258D8
label_23cb68:
    if (ctx->pc == 0x23CB68u) {
        ctx->pc = 0x23CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB64u;
        // 0x23cb68: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB6Cu;
        goto label_23cb6c;
    }
    ctx->pc = 0x23CB64u;
    SET_GPR_U32(ctx, 31, 0x23CB6Cu);
    ctx->pc = 0x23CB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB64u;
    // 0x23cb68: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x23CB64u, 0x23CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB6Cu;
label_23cb6c:
    // 0x23cb6c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x23cb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_23cb70:
    // 0x23cb70: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x23cb70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_23cb74:
    // 0x23cb74: 0x1452ffe6  bne         $v0, $s2, . + 4 + (-0x1A << 2)
label_23cb78:
    if (ctx->pc == 0x23CB78u) {
        ctx->pc = 0x23CB7Cu;
        goto label_23cb7c;
    }
    ctx->pc = 0x23CB74u;
    {
        const bool branch_taken_0x23cb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x23cb74) {
            ctx->pc = 0x23CB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cb10;
        }
    }
    ctx->pc = 0x23CB7Cu;
label_23cb7c:
    // 0x23cb7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23cb80:
    // 0x23cb80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23cb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23cb84:
    // 0x23cb84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23cb84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23cb88:
    // 0x23cb88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23cb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23cb8c:
    // 0x23cb8c: 0x3e00008  jr          $ra
label_23cb90:
    if (ctx->pc == 0x23CB90u) {
        ctx->pc = 0x23CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB8Cu;
        // 0x23cb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB94u;
        goto label_23cb94;
    }
    ctx->pc = 0x23CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB8Cu;
        // 0x23cb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CB94u;
label_23cb94:
    // 0x23cb94: 0x0  nop
    ctx->pc = 0x23cb94u;
    // NOP
    ctx->pc = 0x23cb98u;
}

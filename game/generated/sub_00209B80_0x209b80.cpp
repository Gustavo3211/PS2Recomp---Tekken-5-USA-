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

// Function: sub_00209B80
// Address: 0x209b80 - 0x209d58
void sub_00209B80_0x209b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209B80_0x209b80");
#endif

    switch (ctx->pc) {
        case 0x209bb0u: goto label_209bb0;
        case 0x209bc8u: goto label_209bc8;
        case 0x209bf8u: goto label_209bf8;
        case 0x209c84u: goto label_209c84;
        case 0x209c94u: goto label_209c94;
        case 0x209cfcu: goto label_209cfc;
        case 0x209d04u: goto label_209d04;
        case 0x209d18u: goto label_209d18;
        case 0x209d20u: goto label_209d20;
        case 0x209d34u: goto label_209d34;
        default: break;
    }

    ctx->pc = 0x209b80u;

    // 0x209b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209b84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209b88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209b8c: 0x241108f0  addiu       $s1, $zero, 0x8F0
    ctx->pc = 0x209b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    // 0x209b90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x209b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x209b94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x209b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x209b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x209b9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x209b9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ba0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x209ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x209ba4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x209ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x209ba8: 0xc09d940  jal         func_276500
    ctx->pc = 0x209BA8u;
    SET_GPR_U32(ctx, 31, 0x209BB0u);
    ctx->pc = 0x209BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BA8u;
    // 0x209bac: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x209BA8u, 0x209BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BB0u;
label_209bb0:
    // 0x209bb0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x209bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x209bb4: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x209bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x209bb8: 0x24708858  addiu       $s0, $v1, -0x77A8
    ctx->pc = 0x209bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x209bbc: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x209bbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x209bc0: 0xc07e242  jal         func_1F8908
    ctx->pc = 0x209BC0u;
    SET_GPR_U32(ctx, 31, 0x209BC8u);
    ctx->pc = 0x209BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BC0u;
    // 0x209bc4: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8908u, 0x209BC0u, 0x209BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BC8u;
label_209bc8:
    // 0x209bc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209BC8u;
    {
        const bool branch_taken_0x209bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BC8u;
        // 0x209bcc: 0x8f829730  lw          $v0, -0x68D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bc8) {
            ctx->pc = 0x209BE0u;
            goto label_209be0;
        }
    }
    ctx->pc = 0x209BD0u;
    // 0x209bd0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x209bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x209bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209bd8: 0xa06283d5  sb          $v0, -0x7C2B($v1)
    ctx->pc = 0x209bd8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3A83D5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3A83D5u, _value); } while (0);
    // 0x209bdc: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x209bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
label_209be0:
    // 0x209be0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x209be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x209be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x209be8: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x209BE8u;
    {
        const bool branch_taken_0x209be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BE8u;
        // 0x209bec: 0xaf829730  sw          $v0, -0x68D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209be8) {
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x209BF0u;
    // 0x209bf0: 0xc07c6be  jal         func_1F1AF8
    ctx->pc = 0x209BF0u;
    SET_GPR_U32(ctx, 31, 0x209BF8u);
    ctx->pc = 0x209BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BF0u;
    // 0x209bf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1AF8u, 0x209BF0u, 0x209BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BF8u;
label_209bf8:
    // 0x209bf8: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x209BF8u;
    {
        const bool branch_taken_0x209bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209bf8) {
            ctx->pc = 0x209BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209BF8u;
            // 0x209bfc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x209C00u;
    // 0x209c00: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x209c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x209c04: 0x244688d0  addiu       $a2, $v0, -0x7730
    ctx->pc = 0x209c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x209c08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x209c08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x209c0c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x209c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x209c10: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209C10u;
    {
        const bool branch_taken_0x209c10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x209C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C10u;
        // 0x209c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c10) {
            ctx->pc = 0x209C20u;
            goto label_209c20;
        }
    }
    ctx->pc = 0x209C18u;
    // 0x209c18: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x209c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x209c1c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x209c1cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_209c20:
    // 0x209c20: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x209C20u;
    {
        const bool branch_taken_0x209c20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x209C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C20u;
        // 0x209c24: 0x8f82a850  lw          $v0, -0x57B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c20) {
            ctx->pc = 0x209C34u;
            goto label_209c34;
        }
    }
    ctx->pc = 0x209C28u;
    // 0x209c28: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x209c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x209c2c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x209C2Cu;
    {
        const bool branch_taken_0x209c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209c2c) {
            ctx->pc = 0x209C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209C2Cu;
            // 0x209c30: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x209C34u;
label_209c34:
    // 0x209c34: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209C34u;
    {
        const bool branch_taken_0x209c34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x209C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C34u;
        // 0x209c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c34) {
            ctx->pc = 0x209C44u;
            goto label_209c44;
        }
    }
    ctx->pc = 0x209C3Cu;
    // 0x209c3c: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x209c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x209c40: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x209c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_209c44:
    // 0x209c44: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x209C44u;
    {
        const bool branch_taken_0x209c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209c44) {
            ctx->pc = 0x209C7Cu;
            goto label_209c7c;
        }
    }
    ctx->pc = 0x209C4Cu;
    // 0x209c4c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x209c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x209c50: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x209c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x209c54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209C54u;
    {
        const bool branch_taken_0x209c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C54u;
        // 0x209c58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c54) {
            ctx->pc = 0x209C64u;
            goto label_209c64;
        }
    }
    ctx->pc = 0x209C5Cu;
    // 0x209c5c: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x209c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x209c60: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x209c60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_209c64:
    // 0x209c64: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209C64u;
    {
        const bool branch_taken_0x209c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209c64) {
            ctx->pc = 0x209C7Cu;
            goto label_209c7c;
        }
    }
    ctx->pc = 0x209C6Cu;
    // 0x209c6c: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x209c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x209c70: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x209c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x209c74: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x209C74u;
    {
        const bool branch_taken_0x209c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209c74) {
            ctx->pc = 0x209C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209C74u;
            // 0x209c78: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x209C7Cu;
label_209c7c:
    // 0x209c7c: 0xc09d940  jal         func_276500
    ctx->pc = 0x209C7Cu;
    SET_GPR_U32(ctx, 31, 0x209C84u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x209C7Cu, 0x209C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C84u;
label_209c84:
    // 0x209c84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209C84u;
    {
        const bool branch_taken_0x209c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209c84) {
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x209C8Cu;
    // 0x209c8c: 0xc08e6d2  jal         func_239B48
    ctx->pc = 0x209C8Cu;
    SET_GPR_U32(ctx, 31, 0x209C94u);
    ctx->pc = 0x239B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B48u, 0x209C8Cu, 0x209C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C94u;
label_209c94:
    // 0x209c94: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x209c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x209c98: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x209C98u;
    {
        const bool branch_taken_0x209c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209c98) {
            ctx->pc = 0x209C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209C98u;
            // 0x209c9c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x209CA0u;
label_209ca0:
    // 0x209ca0: 0x12800024  beqz        $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x209CA0u;
    {
        const bool branch_taken_0x209ca0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x209CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CA0u;
        // 0x209ca4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ca0) {
            ctx->pc = 0x209D34u;
            goto label_209d34;
        }
    }
    ctx->pc = 0x209CA8u;
    // 0x209ca8: 0x244483c0  addiu       $a0, $v0, -0x7C40
    ctx->pc = 0x209ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x209cac: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x209cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x209cb0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x209CB0u;
    {
        const bool branch_taken_0x209cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209cb0) {
            ctx->pc = 0x209D10u;
            goto label_209d10;
        }
    }
    ctx->pc = 0x209CB8u;
    // 0x209cb8: 0x926501bc  lbu         $a1, 0x1BC($s3)
    ctx->pc = 0x209cb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 444)));
    // 0x209cbc: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x209CBCu;
    {
        const bool branch_taken_0x209cbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x209CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CBCu;
        // 0x209cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cbc) {
            ctx->pc = 0x209CD0u;
            goto label_209cd0;
        }
    }
    ctx->pc = 0x209CC4u;
    // 0x209cc4: 0x90820016  lbu         $v0, 0x16($a0)
    ctx->pc = 0x209cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x209cc8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x209CC8u;
    {
        const bool branch_taken_0x209cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CC8u;
        // 0x209ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cc8) {
            ctx->pc = 0x209CF4u;
            goto label_209cf4;
        }
    }
    ctx->pc = 0x209CD0u;
label_209cd0:
    // 0x209cd0: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x209CD0u;
    {
        const bool branch_taken_0x209cd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x209cd0) {
            ctx->pc = 0x209D10u;
            goto label_209d10;
        }
    }
    ctx->pc = 0x209CD8u;
    // 0x209cd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x209cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209cdc: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x209cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x209ce0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209CE0u;
    {
        const bool branch_taken_0x209ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209ce0) {
            ctx->pc = 0x209CF4u;
            goto label_209cf4;
        }
    }
    ctx->pc = 0x209CE8u;
    // 0x209ce8: 0x90820016  lbu         $v0, 0x16($a0)
    ctx->pc = 0x209ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x209cec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x209CECu;
    {
        const bool branch_taken_0x209cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209cec) {
            ctx->pc = 0x209D10u;
            goto label_209d10;
        }
    }
    ctx->pc = 0x209CF4u;
label_209cf4:
    // 0x209cf4: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x209CF4u;
    SET_GPR_U32(ctx, 31, 0x209CFCu);
    ctx->pc = 0x209CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CF4u;
    // 0x209cf8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x209CF4u, 0x209CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CFCu;
label_209cfc:
    // 0x209cfc: 0xc082162  jal         func_208588
    ctx->pc = 0x209CFCu;
    SET_GPR_U32(ctx, 31, 0x209D04u);
    ctx->pc = 0x209D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CFCu;
    // 0x209d00: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x209CFCu, 0x209D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D04u;
label_209d04:
    // 0x209d04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x209D04u;
    {
        const bool branch_taken_0x209d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209d04) {
            ctx->pc = 0x209D2Cu;
            goto label_209d2c;
        }
    }
    ctx->pc = 0x209D0Cu;
    // 0x209d0c: 0x0  nop
    ctx->pc = 0x209d0cu;
    // NOP
label_209d10:
    // 0x209d10: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x209D10u;
    SET_GPR_U32(ctx, 31, 0x209D18u);
    ctx->pc = 0x209D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D10u;
    // 0x209d14: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x209D10u, 0x209D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D18u;
label_209d18:
    // 0x209d18: 0xc082162  jal         func_208588
    ctx->pc = 0x209D18u;
    SET_GPR_U32(ctx, 31, 0x209D20u);
    ctx->pc = 0x209D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D18u;
    // 0x209d1c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x209D18u, 0x209D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D20u;
label_209d20:
    // 0x209d20: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x209d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x209d24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x209d28: 0xaf829730  sw          $v0, -0x68D0($gp)
    ctx->pc = 0x209d28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 2));
label_209d2c:
    // 0x209d2c: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x209D2Cu;
    SET_GPR_U32(ctx, 31, 0x209D34u);
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x209D2Cu, 0x209D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D34u;
label_209d34:
    // 0x209d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209d38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209d3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209d40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x209d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209d44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x209d44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209d48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x209d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x209d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x209D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D4Cu;
        // 0x209d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209D54u;
    // 0x209d54: 0x0  nop
    ctx->pc = 0x209d54u;
    // NOP
    ctx->pc = 0x209d58u;
}

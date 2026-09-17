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

// Function: sub_0048FA20
// Address: 0x48fa20 - 0x48fb88
void sub_0048FA20_0x48fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FA20_0x48fa20");
#endif

    switch (ctx->pc) {
        case 0x48fa50u: goto label_48fa50;
        case 0x48fa88u: goto label_48fa88;
        case 0x48faa0u: goto label_48faa0;
        case 0x48faa8u: goto label_48faa8;
        default: break;
    }

    ctx->pc = 0x48fa20u;

    // 0x48fa20: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48fa24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48fa24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48fa28: 0x8c43f8f4  lw          $v1, -0x70C($v0)
    ctx->pc = 0x48fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72F8F4u));
    // 0x48fa2c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48FA2Cu;
    {
        const bool branch_taken_0x48fa2c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x48FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FA2Cu;
        // 0x48fa30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fa2c) {
            ctx->pc = 0x48FA40u;
            goto label_48fa40;
        }
    }
    ctx->pc = 0x48FA34u;
    // 0x48fa34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48fa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fa38: 0x8123e94  j           func_48FA50
    ctx->pc = 0x48FA38u;
    ctx->pc = 0x48FA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48FA38u;
    // 0x48fa3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48FA50u;
    goto label_48fa50;
    ctx->pc = 0x48FA40u;
label_48fa40:
    // 0x48fa40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48fa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fa44: 0x3e00008  jr          $ra
    ctx->pc = 0x48FA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FA44u;
        // 0x48fa48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FA4Cu;
    // 0x48fa4c: 0x0  nop
    ctx->pc = 0x48fa4cu;
    // NOP
label_48fa50:
    // 0x48fa50: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48fa54: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48fa54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48fa58: 0x8c43f8f4  lw          $v1, -0x70C($v0)
    ctx->pc = 0x48fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72F8F4u));
    // 0x48fa5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x48fa60: 0x3c13007e  lui         $s3, 0x7E
    ctx->pc = 0x48fa60u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)126 << 16));
    // 0x48fa64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48fa68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48fa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48fa6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48fa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48fa70: 0x24125553  addiu       $s2, $zero, 0x5553
    ctx->pc = 0x48fa70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21843));
    // 0x48fa74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x48fa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x48fa78: 0xae6314b0  sw          $v1, 0x14B0($s3)
    ctx->pc = 0x48fa78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E14B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14B0u, _value); } while (0);
    // 0x48fa7c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x48fa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x48fa80: 0xc13e650  jal         func_4F9940
    ctx->pc = 0x48FA80u;
    SET_GPR_U32(ctx, 31, 0x48FA88u);
    ctx->pc = 0x48FA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48FA80u;
    // 0x48fa84: 0x241400ff  addiu       $s4, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9940u, 0x48FA80u, 0x48FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FA88u;
label_48fa88:
    // 0x48fa88: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x48fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x48fa8c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x48fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x48fa90: 0x246314b4  addiu       $v1, $v1, 0x14B4
    ctx->pc = 0x48fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5300));
    // 0x48fa94: 0x249114b8  addiu       $s1, $a0, 0x14B8
    ctx->pc = 0x48fa94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 5304));
    // 0x48fa98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x48fa98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E14B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14B4u, _value); } while (0);
    // 0x48fa9c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x48fa9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_48faa0:
    // 0x48faa0: 0xc123ee2  jal         func_48FB88
    ctx->pc = 0x48FAA0u;
    SET_GPR_U32(ctx, 31, 0x48FAA8u);
    ctx->pc = 0x48FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FB88u, 0x48FAA0u, 0x48FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FAA8u;
label_48faa8:
    // 0x48faa8: 0x240702d  daddu       $t6, $s2, $zero
    ctx->pc = 0x48faa8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48faac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x48faacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48fab0: 0x25c5ffff  addiu       $a1, $t6, -0x1
    ctx->pc = 0x48fab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x48fab4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x48fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48fab8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x48fab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x48fabc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x48fabcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48fac0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x48fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48fac4: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x48fac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48fac8: 0x248d0002  addiu       $t5, $a0, 0x2
    ctx->pc = 0x48fac8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x48facc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x48faccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fad0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48fad4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x48fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x48fad8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x48fad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48fadc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x48fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x48fae0: 0x24670002  addiu       $a3, $v1, 0x2
    ctx->pc = 0x48fae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48fae4: 0x24890003  addiu       $t1, $a0, 0x3
    ctx->pc = 0x48fae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x48fae8: 0x246a0003  addiu       $t2, $v1, 0x3
    ctx->pc = 0x48fae8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x48faec: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x48faecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48faf0: 0x248b0004  addiu       $t3, $a0, 0x4
    ctx->pc = 0x48faf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x48faf4: 0x246c0004  addiu       $t4, $v1, 0x4
    ctx->pc = 0x48faf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x48faf8: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x48faf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x48fafc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x48fafcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fb00: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x48fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x48fb04: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x48fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x48fb08: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x48fb08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x48fb0c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x48fb0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48fb10: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x48fb10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fb14: 0xae2d0000  sw          $t5, 0x0($s1)
    ctx->pc = 0x48fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 13));
    // 0x48fb18: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x48fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x48fb1c: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x48fb1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x48fb20: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x48fb20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fb24: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x48fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x48fb28: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x48fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x48fb2c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x48fb2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x48fb30: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x48fb30u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fb34: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x48fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x48fb38: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x48fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
    // 0x48fb3c: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x48fb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x48fb40: 0xa1820000  sb          $v0, 0x0($t4)
    ctx->pc = 0x48fb40u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48fb44: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x48fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x48fb48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x48fb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x48fb4c: 0x8e6214b0  lw          $v0, 0x14B0($s3)
    ctx->pc = 0x48fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5296)));
    // 0x48fb50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x48fb50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48fb54: 0x10740003  beq         $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x48FB54u;
    {
        const bool branch_taken_0x48fb54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x48FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FB54u;
        // 0x48fb58: 0x59403  sra         $s2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fb54) {
            ctx->pc = 0x48FB64u;
            goto label_48fb64;
        }
    }
    ctx->pc = 0x48FB5Cu;
    // 0x48fb5c: 0x5c1ffd0  bgez        $t6, . + 4 + (-0x30 << 2)
    ctx->pc = 0x48FB5Cu;
    {
        const bool branch_taken_0x48fb5c = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x48fb5c) {
            ctx->pc = 0x48FAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48faa0;
        }
    }
    ctx->pc = 0x48FB64u;
label_48fb64:
    // 0x48fb64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48fb64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fb68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48fb68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48fb6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48fb6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fb70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48fb70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48fb74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48fb74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48fb78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x48fb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48fb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x48FB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FB7Cu;
        // 0x48fb80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FB84u;
    // 0x48fb84: 0x0  nop
    ctx->pc = 0x48fb84u;
    // NOP
    ctx->pc = 0x48fb88u;
}

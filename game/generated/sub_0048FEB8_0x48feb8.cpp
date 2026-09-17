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

// Function: sub_0048FEB8
// Address: 0x48feb8 - 0x4900d0
void sub_0048FEB8_0x48feb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FEB8_0x48feb8");
#endif

    switch (ctx->pc) {
        case 0x48febcu: goto label_48febc;
        case 0x48ff38u: goto label_48ff38;
        default: break;
    }

    ctx->pc = 0x48feb8u;

    // 0x48feb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48feb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48febc:
    // 0x48febc: 0x24a3d680  addiu       $v1, $a1, -0x2980
    ctx->pc = 0x48febcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x48fec0: 0x84620094  lh          $v0, 0x94($v1)
    ctx->pc = 0x48fec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x48fec4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48FEC4u;
    {
        const bool branch_taken_0x48fec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FEC4u;
        // 0x48fec8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fec4) {
            ctx->pc = 0x48FED8u;
            goto label_48fed8;
        }
    }
    ctx->pc = 0x48FECCu;
    // 0x48fecc: 0x8123fba  j           func_48FEE8
    ctx->pc = 0x48FECCu;
    ctx->pc = 0x48FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48FECCu;
    // 0x48fed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48FEE8u;
    goto label_48fee8;
    ctx->pc = 0x48FED4u;
    // 0x48fed4: 0x0  nop
    ctx->pc = 0x48fed4u;
    // NOP
label_48fed8:
    // 0x48fed8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48fedc: 0xac622274  sw          $v0, 0x2274($v1)
    ctx->pc = 0x48fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8820), GPR_U32(ctx, 2));
    // 0x48fee0: 0x3e00008  jr          $ra
    ctx->pc = 0x48FEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FEE0u;
        // 0x48fee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FEE8u;
label_48fee8:
    // 0x48fee8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48feec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48feecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48fef0: 0x8445d60a  lh          $a1, -0x29F6($v0)
    ctx->pc = 0x48fef0u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x72D60Au));
    // 0x48fef4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48fef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48fef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48fefc: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48FEFCu;
    {
        const bool branch_taken_0x48fefc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x48FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FEFCu;
        // 0x48ff00: 0xa464d714  sh          $a0, -0x28EC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294956820), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fefc) {
            ctx->pc = 0x48FF10u;
            goto label_48ff10;
        }
    }
    ctx->pc = 0x48FF04u;
    // 0x48ff04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ff04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ff08: 0x8123fca  j           func_48FF28
    ctx->pc = 0x48FF08u;
    ctx->pc = 0x48FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48FF08u;
    // 0x48ff0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48FF28u;
    goto label_48ff28;
    ctx->pc = 0x48FF10u;
label_48ff10:
    // 0x48ff10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ff10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ff14: 0x8123fc8  j           func_48FF20
    ctx->pc = 0x48FF14u;
    ctx->pc = 0x48FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48FF14u;
    // 0x48ff18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48FF20u;
    goto label_48ff20;
    ctx->pc = 0x48FF1Cu;
    // 0x48ff1c: 0x0  nop
    ctx->pc = 0x48ff1cu;
    // NOP
label_48ff20:
    // 0x48ff20: 0x3e00008  jr          $ra
    ctx->pc = 0x48FF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FF28u;
label_48ff28:
    // 0x48ff28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ff28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48ff2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ff2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ff30: 0xc13e64c  jal         func_4F9930
    ctx->pc = 0x48FF30u;
    SET_GPR_U32(ctx, 31, 0x48FF38u);
    ctx->pc = 0x4F9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9930u, 0x48FF30u, 0x48FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FF38u;
label_48ff38:
    // 0x48ff38: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x48ff38u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ff3c: 0x3c06007e  lui         $a2, 0x7E
    ctx->pc = 0x48ff3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)126 << 16));
    // 0x48ff40: 0x27190008  addiu       $t9, $t8, 0x8
    ctx->pc = 0x48ff40u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x48ff44: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x48ff44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x48ff48: 0xacd914b0  sw          $t9, 0x14B0($a2)
    ctx->pc = 0x48ff48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x7E14B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14B0u, _value); } while (0);
    // 0x48ff4c: 0x2522d680  addiu       $v0, $t1, -0x2980
    ctx->pc = 0x48ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956672));
    // 0x48ff50: 0x84430096  lh          $v1, 0x96($v0)
    ctx->pc = 0x48ff50u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D716u));
    // 0x48ff54: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x48ff54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x48ff58: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x48FF58u;
    {
        const bool branch_taken_0x48ff58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FF58u;
        // 0x48ff5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ff58) {
            ctx->pc = 0x48FF8Cu;
            goto label_48ff8c;
        }
    }
    ctx->pc = 0x48FF60u;
    // 0x48ff60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x48ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48ff64: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48ff68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48ff6c: 0x8c63ac20  lw          $v1, -0x53E0($v1)
    ctx->pc = 0x48ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945824)));
    // 0x48ff70: 0x600008  jr          $v1
    ctx->pc = 0x48FF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48FF78u: goto label_48ff78;
            case 0x48FF80u: goto label_48ff80;
            case 0x48FF88u: goto label_48ff88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FF70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48FF78u;
label_48ff78:
    // 0x48ff78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48FF78u;
    {
        const bool branch_taken_0x48ff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FF78u;
        // 0x48ff7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ff78) {
            ctx->pc = 0x48FF8Cu;
            goto label_48ff8c;
        }
    }
    ctx->pc = 0x48FF80u;
label_48ff80:
    // 0x48ff80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48FF80u;
    {
        const bool branch_taken_0x48ff80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FF80u;
        // 0x48ff84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ff80) {
            ctx->pc = 0x48FF8Cu;
            goto label_48ff8c;
        }
    }
    ctx->pc = 0x48FF88u;
label_48ff88:
    // 0x48ff88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48ff88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48ff8c:
    // 0x48ff8c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x48ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x48ff90: 0x24c614b0  addiu       $a2, $a2, 0x14B0
    ctx->pc = 0x48ff90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5296));
    // 0x48ff94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x48ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x48ff98: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x48ff98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48ff9c: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x48ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x48ffa0: 0x3c07007e  lui         $a3, 0x7E
    ctx->pc = 0x48ffa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)126 << 16));
    // 0x48ffa4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x48ffa4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48ffa8: 0x24e714b4  addiu       $a3, $a3, 0x14B4
    ctx->pc = 0x48ffa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5300));
    // 0x48ffac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x48ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x48ffb0: 0x2529d680  addiu       $t1, $t1, -0x2980
    ctx->pc = 0x48ffb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956672));
    // 0x48ffb4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x48ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x48ffb8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x48ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48ffbc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x48ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x48ffc0: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x48ffc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x48ffc4: 0x248a0003  addiu       $t2, $a0, 0x3
    ctx->pc = 0x48ffc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x48ffc8: 0x248c0004  addiu       $t4, $a0, 0x4
    ctx->pc = 0x48ffc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x48ffcc: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x48ffccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48ffd0: 0x248d0005  addiu       $t5, $a0, 0x5
    ctx->pc = 0x48ffd0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x48ffd4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x48ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x48ffd8: 0x248e0006  addiu       $t6, $a0, 0x6
    ctx->pc = 0x48ffd8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x48ffdc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x48ffdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x48ffe0: 0x270f0004  addiu       $t7, $t8, 0x4
    ctx->pc = 0x48ffe0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x48ffe4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x48ffe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48ffe8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x48ffe8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48ffec: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x48ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x48fff0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48fff4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x48fff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48fff8: 0xa24025  or          $t0, $a1, $v0
    ctx->pc = 0x48fff8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x48fffc: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x48fffcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x490000: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x490000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x490004: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x490004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x490008: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x490008u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x49000c: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x49000cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x490010: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x490010u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x490014: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x490014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x490018: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x490018u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x49001c: 0xad242274  sw          $a0, 0x2274($t1)
    ctx->pc = 0x49001cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8820), GPR_U32(ctx, 4));
    // 0x490020: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x490020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x490024: 0xaccd0000  sw          $t5, 0x0($a2)
    ctx->pc = 0x490024u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 13));
    // 0x490028: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x490028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x49002c: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x49002cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x490030: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x490030u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x490034: 0xacce0000  sw          $t6, 0x0($a2)
    ctx->pc = 0x490034u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 14));
    // 0x490038: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x490038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49003c: 0xa5230092  sh          $v1, 0x92($t1)
    ctx->pc = 0x49003cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x490040: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x490040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x490044: 0x93030001  lbu         $v1, 0x1($t8)
    ctx->pc = 0x490044u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x490048: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x490048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x49004c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49004cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x490050: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x490050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x490054: 0xa522226e  sh          $v0, 0x226E($t1)
    ctx->pc = 0x490054u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 8814), (uint16_t)GPR_U32(ctx, 2));
    // 0x490058: 0x93030002  lbu         $v1, 0x2($t8)
    ctx->pc = 0x490058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x49005c: 0x93020003  lbu         $v0, 0x3($t8)
    ctx->pc = 0x49005cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x490060: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x490060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x490064: 0xad2f2278  sw          $t7, 0x2278($t1)
    ctx->pc = 0x490064u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8824), GPR_U32(ctx, 15));
    // 0x490068: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x490068u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x49006c: 0xacd90000  sw          $t9, 0x0($a2)
    ctx->pc = 0x49006cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 25));
    // 0x490070: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x490070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x490074: 0xa5232270  sh          $v1, 0x2270($t1)
    ctx->pc = 0x490074u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 8816), (uint16_t)GPR_U32(ctx, 3));
    // 0x490078: 0x93240000  lbu         $a0, 0x0($t9)
    ctx->pc = 0x490078u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49007c: 0x93020009  lbu         $v0, 0x9($t8)
    ctx->pc = 0x49007cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 9)));
    // 0x490080: 0x9303000a  lbu         $v1, 0xA($t8)
    ctx->pc = 0x490080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 10)));
    // 0x490084: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x490084u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x490088: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x490088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49008c: 0x9305000b  lbu         $a1, 0xB($t8)
    ctx->pc = 0x49008cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 11)));
    // 0x490090: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x490090u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x490094: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x490094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x490098: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x490098u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x49009c: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x49009cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x4900a0: 0x3281821  addu        $v1, $t9, $t0
    ctx->pc = 0x4900a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x4900a4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4900a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4900a8: 0x9062fffe  lbu         $v0, -0x2($v1)
    ctx->pc = 0x4900a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x4900ac: 0x9064ffff  lbu         $a0, -0x1($v1)
    ctx->pc = 0x4900acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x4900b0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4900b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4900b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4900b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4900b8: 0x822027  nor         $a0, $a0, $v0
    ctx->pc = 0x4900b8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 2)));
    // 0x4900bc: 0x4580b  movn        $t3, $zero, $a0
    ctx->pc = 0x4900bcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x4900c0: 0xad2b227c  sw          $t3, 0x227C($t1)
    ctx->pc = 0x4900c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8828), GPR_U32(ctx, 11));
    // 0x4900c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4900c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4900c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4900C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4900CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4900C8u;
        // 0x4900cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4900C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4900D0u;
}

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

// Function: sub_00489990
// Address: 0x489990 - 0x489ae0
void sub_00489990_0x489990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489990_0x489990");
#endif

    switch (ctx->pc) {
        case 0x489a10u: goto label_489a10;
        case 0x489a34u: goto label_489a34;
        default: break;
    }

    ctx->pc = 0x489990u;

    // 0x489990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x489990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x489994: 0x3c02007c  lui         $v0, 0x7C
    ctx->pc = 0x489994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
    // 0x489998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x489998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48999c: 0x24475b14  addiu       $a3, $v0, 0x5B14
    ctx->pc = 0x48999cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23316));
    // 0x4899a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4899a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4899a4: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x4899a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x4899a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4899a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4899ac: 0x24665b08  addiu       $a2, $v1, 0x5B08
    ctx->pc = 0x4899acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 23304));
    // 0x4899b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4899b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4899b4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4899b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4899b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4899b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4899bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4899bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4899c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4899c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7C5B14u));
    // 0x4899c4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4899c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7C5B08u));
    // 0x4899c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x4899c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4899cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4899ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4899d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4899d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4899d4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4899d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7C5B14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7C5B14u, _value); } while (0);
    // 0x4899d8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4899d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4899dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4899dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4899e0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4899e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4899e4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4899e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4899e8: 0x4400031  bltz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x4899E8u;
    {
        const bool branch_taken_0x4899e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4899ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4899E8u;
        // 0x4899ec: 0x3c02007c  lui         $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4899e8) {
            ctx->pc = 0x489AB0u;
            goto label_489ab0;
        }
    }
    ctx->pc = 0x4899F0u;
    // 0x4899f0: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x4899f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x4899f4: 0x24525b00  addiu       $s2, $v0, 0x5B00
    ctx->pc = 0x4899f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x4899f8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4899f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4899fc: 0x24735b18  addiu       $s3, $v1, 0x5B18
    ctx->pc = 0x4899fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 23320));
    // 0x489a00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x489a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489a04: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x489a04u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x489a08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x489a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489a0c: 0x0  nop
    ctx->pc = 0x489a0cu;
    // NOP
label_489a10:
    // 0x489a10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x489a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489a14: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x489a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x489a18: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x489a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x489a1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x489a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x489a20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x489a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x489a24: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x489a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x489a28: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x489a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x489a2c: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x489A2Cu;
    SET_GPR_U32(ctx, 31, 0x489A34u);
    ctx->pc = 0x489A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x489A2Cu;
    // 0x489a30: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x489A2Cu, 0x489A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489A34u;
label_489a34:
    // 0x489a34: 0x24423e00  addiu       $v0, $v0, 0x3E00
    ctx->pc = 0x489a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15872));
    // 0x489a38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x489a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x489a3c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x489a3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489a40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x489a40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x489a44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x489a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x489a48: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x489a48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x489a4c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x489a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x489a50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x489a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x489a54: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x489a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x489a58: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x489a58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x489a5c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x489a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x489a60: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x489a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x489a64: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x489a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x489a68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x489a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x489a6c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x489a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x489a70: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x489a70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x489a74: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x489a74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x489a78: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x489a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x489a7c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x489a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x489a80: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x489a80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x489a84: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x489a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x489a88: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x489a88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489a8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x489a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489a90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x489a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x489a94: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x489a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x489a98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x489a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x489a9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x489a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x489aa0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x489aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x489aa4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x489aa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x489aa8: 0x443ffd9  bgezl       $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x489AA8u;
    {
        const bool branch_taken_0x489aa8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x489aa8) {
            ctx->pc = 0x489AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x489AA8u;
            // 0x489aac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x489A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489a10;
        }
    }
    ctx->pc = 0x489AB0u;
label_489ab0:
    // 0x489ab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x489ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489ab4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x489ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x489ab8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x489ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x489abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x489abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x489ac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x489ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489ac4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x489ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x489ac8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x489ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x489acc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x489accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x489ad0: 0xac6207c0  sw          $v0, 0x7C0($v1)
    ctx->pc = 0x489ad0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F07C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F07C0u, _value); } while (0);
    // 0x489ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x489AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489AD4u;
        // 0x489ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489ADCu;
    // 0x489adc: 0x0  nop
    ctx->pc = 0x489adcu;
    // NOP
    ctx->pc = 0x489ae0u;
}

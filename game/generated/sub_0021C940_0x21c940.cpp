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

// Function: sub_0021C940
// Address: 0x21c940 - 0x21ca60
void sub_0021C940_0x21c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C940_0x21c940");
#endif

    switch (ctx->pc) {
        case 0x21c980u: goto label_21c980;
        case 0x21c9b8u: goto label_21c9b8;
        case 0x21ca28u: goto label_21ca28;
        default: break;
    }

    ctx->pc = 0x21c940u;

    // 0x21c940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21c944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c948: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c94c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c950: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c954: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21c954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21c958: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21c958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21c95c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21c95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21c960: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x21c960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x21c964: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x21C964u;
    {
        const bool branch_taken_0x21c964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c964) {
            ctx->pc = 0x21C968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C964u;
            // 0x21c968: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CA44u;
            goto label_21ca44;
        }
    }
    ctx->pc = 0x21C96Cu;
    // 0x21c96c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x21c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x21c970: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c974: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x21c974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x21c978: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x21c978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x21c97c: 0xa20000fc  sb          $zero, 0xFC($s0)
    ctx->pc = 0x21c97cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 0));
label_21c980:
    // 0x21c980: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x21c980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21c984: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21c984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21c988: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21c98c: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x21c98cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21c990: 0x0  nop
    ctx->pc = 0x21c990u;
    // NOP
    // 0x21c994: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21C994u;
    {
        const bool branch_taken_0x21c994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C994u;
        // 0x21c998: 0xa44000d0  sh          $zero, 0xD0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 208), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c994) {
            ctx->pc = 0x21C980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c980;
        }
    }
    ctx->pc = 0x21C99Cu;
    // 0x21c99c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21c9a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21c9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9a4: 0x24528858  addiu       $s2, $v0, -0x77A8
    ctx->pc = 0x21c9a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x21c9a8: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x21c9a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21c9ac: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x21c9acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c9b0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x21c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x21c9b4: 0x0  nop
    ctx->pc = 0x21c9b4u;
    // NOP
label_21c9b8:
    // 0x21c9b8: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x21c9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21c9bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21c9c0: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x21c9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x21c9c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21c9c8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x21c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21c9cc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21c9d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21c9d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x21c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21c9d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21c9dc: 0x244700fd  addiu       $a3, $v0, 0xFD
    ctx->pc = 0x21c9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 253));
    // 0x21c9e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21c9e4: 0xa0f40008  sb          $s4, 0x8($a3)
    ctx->pc = 0x21c9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 20));
    // 0x21c9e8: 0xd34004  sllv        $t0, $s3, $a2
    ctx->pc = 0x21c9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x21c9ec: 0xa0e00009  sb          $zero, 0x9($a3)
    ctx->pc = 0x21c9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x21c9f0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x21c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x21c9f4: 0x246300fd  addiu       $v1, $v1, 0xFD
    ctx->pc = 0x21c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 253));
    // 0x21c9f8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x21c9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9fc: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x21c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x21ca00: 0x881024  and         $v0, $a0, $t0
    ctx->pc = 0x21ca00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x21ca04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CA04u;
    {
        const bool branch_taken_0x21ca04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA04u;
        // 0x21ca08: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca04) {
            ctx->pc = 0x21CA1Cu;
            goto label_21ca1c;
        }
    }
    ctx->pc = 0x21CA0Cu;
    // 0x21ca0c: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x21ca0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21ca10: 0xa0e0000a  sb          $zero, 0xA($a3)
    ctx->pc = 0x21ca10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ca14: 0xa0e2000c  sb          $v0, 0xC($a3)
    ctx->pc = 0x21ca14u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x21ca18: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x21ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_21ca1c:
    // 0x21ca1c: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x21ca1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x21ca20: 0xc086cd6  jal         func_21B358
    ctx->pc = 0x21CA20u;
    SET_GPR_U32(ctx, 31, 0x21CA28u);
    ctx->pc = 0x21CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA20u;
    // 0x21ca24: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B358u, 0x21CA20u, 0x21CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA28u;
label_21ca28:
    // 0x21ca28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21ca28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca2c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x21ca2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21ca30: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x21CA30u;
    {
        const bool branch_taken_0x21ca30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA30u;
        // 0x21ca34: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca30) {
            ctx->pc = 0x21C9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c9b8;
        }
    }
    ctx->pc = 0x21CA38u;
    // 0x21ca38: 0xa380b3c1  sb          $zero, -0x4C3F($gp)
    ctx->pc = 0x21ca38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294947777), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ca3c: 0xa380b3c0  sb          $zero, -0x4C40($gp)
    ctx->pc = 0x21ca3cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294947776), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ca40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ca40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21ca44:
    // 0x21ca44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ca44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ca48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21ca48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ca4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21ca4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ca50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21ca50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ca54: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21ca54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ca58: 0x3e00008  jr          $ra
    ctx->pc = 0x21CA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA58u;
        // 0x21ca5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CA60u;
}

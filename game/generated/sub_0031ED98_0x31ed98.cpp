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

// Function: sub_0031ED98
// Address: 0x31ed98 - 0x31ee58
void sub_0031ED98_0x31ed98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031ED98_0x31ed98");
#endif

    ctx->pc = 0x31ed98u;

    // 0x31ed98: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x31ed98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed9c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x31ed9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eda0: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x31eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x31eda4: 0x94eb0416  lhu         $t3, 0x416($a3)
    ctx->pc = 0x31eda4u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1046)));
    // 0x31eda8: 0x55620003  bnel        $t3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EDA8u;
    {
        const bool branch_taken_0x31eda8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        if (branch_taken_0x31eda8) {
            ctx->pc = 0x31EDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EDA8u;
            // 0x31edac: 0x94e30400  lhu         $v1, 0x400($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EDB8u;
            goto label_31edb8;
        }
    }
    ctx->pc = 0x31EDB0u;
    // 0x31edb0: 0x3e00008  jr          $ra
    ctx->pc = 0x31EDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDB0u;
        // 0x31edb4: 0x95020014  lhu         $v0, 0x14($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EDB8u;
label_31edb8:
    // 0x31edb8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x31edb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31edbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31edbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31edc0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x31edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31edc4: 0x10650022  beq         $v1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x31EDC4u;
    {
        const bool branch_taken_0x31edc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x31EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDC4u;
        // 0x31edc8: 0xe44821  addu        $t1, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31edc4) {
            ctx->pc = 0x31EE50u;
            goto label_31ee50;
        }
    }
    ctx->pc = 0x31EDCCu;
    // 0x31edcc: 0x950a0012  lhu         $t2, 0x12($t0)
    ctx->pc = 0x31edccu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x31edd0: 0x84e30408  lh          $v1, 0x408($a3)
    ctx->pc = 0x31edd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 1032)));
    // 0x31edd4: 0x6a182a  slt         $v1, $v1, $t2
    ctx->pc = 0x31edd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x31edd8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x31EDD8u;
    {
        const bool branch_taken_0x31edd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31edd8) {
            ctx->pc = 0x31EE50u;
            goto label_31ee50;
        }
    }
    ctx->pc = 0x31EDE0u;
    // 0x31ede0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ede4: 0x54c20006  bnel        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31EDE4u;
    {
        const bool branch_taken_0x31ede4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x31ede4) {
            ctx->pc = 0x31EDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EDE4u;
            // 0x31ede8: 0x94e20404  lhu         $v0, 0x404($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EE00u;
            goto label_31ee00;
        }
    }
    ctx->pc = 0x31EDECu;
    // 0x31edec: 0x94e30402  lhu         $v1, 0x402($a3)
    ctx->pc = 0x31edecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1026)));
    // 0x31edf0: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x31edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x31edf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31EDF4u;
    {
        const bool branch_taken_0x31edf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDF4u;
        // 0x31edf8: 0xa4e20402  sh          $v0, 0x402($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 1026), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31edf4) {
            ctx->pc = 0x31EE0Cu;
            goto label_31ee0c;
        }
    }
    ctx->pc = 0x31EDFCu;
    // 0x31edfc: 0x0  nop
    ctx->pc = 0x31edfcu;
    // NOP
label_31ee00:
    // 0x31ee00: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x31ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x31ee04: 0xa4e20404  sh          $v0, 0x404($a3)
    ctx->pc = 0x31ee04u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1028), (uint16_t)GPR_U32(ctx, 2));
    // 0x31ee08: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31ee08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_31ee0c:
    // 0x31ee0c: 0x91040017  lbu         $a0, 0x17($t0)
    ctx->pc = 0x31ee0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 23)));
    // 0x31ee10: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x31ee10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ee14: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x31ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31ee18: 0x91060016  lbu         $a2, 0x16($t0)
    ctx->pc = 0x31ee18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 22)));
    // 0x31ee1c: 0xa5030014  sh          $v1, 0x14($t0)
    ctx->pc = 0x31ee1cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x31ee20: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x31ee20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31ee24: 0xad0b0018  sw          $t3, 0x18($t0)
    ctx->pc = 0x31ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 11));
    // 0x31ee28: 0xa1240007  sb          $a0, 0x7($t1)
    ctx->pc = 0x31ee28u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x31ee2c: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x31ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x31ee30: 0xa5230004  sh          $v1, 0x4($t1)
    ctx->pc = 0x31ee30u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x31ee34: 0xa1260006  sb          $a2, 0x6($t1)
    ctx->pc = 0x31ee34u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x31ee38: 0x94e30408  lhu         $v1, 0x408($a3)
    ctx->pc = 0x31ee38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1032)));
    // 0x31ee3c: 0x94e40400  lhu         $a0, 0x400($a3)
    ctx->pc = 0x31ee3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x31ee40: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x31ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x31ee44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31ee48: 0xa4e30408  sh          $v1, 0x408($a3)
    ctx->pc = 0x31ee48u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1032), (uint16_t)GPR_U32(ctx, 3));
    // 0x31ee4c: 0xa4e40400  sh          $a0, 0x400($a3)
    ctx->pc = 0x31ee4cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1024), (uint16_t)GPR_U32(ctx, 4));
label_31ee50:
    // 0x31ee50: 0x3e00008  jr          $ra
    ctx->pc = 0x31EE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EE58u;
}

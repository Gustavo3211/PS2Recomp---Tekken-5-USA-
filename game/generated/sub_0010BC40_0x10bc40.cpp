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

// Function: sub_0010BC40
// Address: 0x10bc40 - 0x10bd58
void sub_0010BC40_0x10bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BC40_0x10bc40");
#endif

    switch (ctx->pc) {
        case 0x10bc98u: goto label_10bc98;
        case 0x10bce4u: goto label_10bce4;
        case 0x10bd04u: goto label_10bd04;
        case 0x10bd28u: goto label_10bd28;
        default: break;
    }

    ctx->pc = 0x10bc40u;

    // 0x10bc40: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x10bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x10bc44: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x10bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x10bc48: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x10bc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x10bc4c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x10bc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x10bc50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10bc50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10bc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc58: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x10bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x10bc5c: 0x72442018  mult1       $a0, $s2, $a0
    ctx->pc = 0x10bc5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10bc60: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x10bc60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10bc64: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x10bc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x10bc68: 0x3c13001e  lui         $s3, 0x1E
    ctx->pc = 0x10bc68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)30 << 16));
    // 0x10bc6c: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x10bc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x10bc70: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x10bc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x10bc74: 0x26626290  addiu       $v0, $s3, 0x6290
    ctx->pc = 0x10bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 25232));
    // 0x10bc78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10bc7c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x10bc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10bc80: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10bc80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc84: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x10bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x10bc88: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BC88u;
    {
        const bool branch_taken_0x10bc88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC88u;
        // 0x10bc8c: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc88) {
            ctx->pc = 0x10BCA0u;
            goto label_10bca0;
        }
    }
    ctx->pc = 0x10BC90u;
    // 0x10bc90: 0xc043dd0  jal         func_10F740
    ctx->pc = 0x10BC90u;
    SET_GPR_U32(ctx, 31, 0x10BC98u);
    ctx->pc = 0x10F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F740u, 0x10BC90u, 0x10BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC98u;
label_10bc98:
    // 0x10bc98: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10BC98u;
    {
        const bool branch_taken_0x10bc98 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC98u;
        // 0x10bc9c: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc98) {
            ctx->pc = 0x10BD14u;
            goto label_10bd14;
        }
    }
    ctx->pc = 0x10BCA0u;
label_10bca0:
    // 0x10bca0: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x10bca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x10bca4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x10bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x10bca8: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x10bca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x10bcac: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x10bcacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10bcb0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x10bcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10bcb4: 0x26736290  addiu       $s3, $s3, 0x6290
    ctx->pc = 0x10bcb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 25232));
    // 0x10bcb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10bcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bcbc: 0x2625001f  addiu       $a1, $s1, 0x1F
    ctx->pc = 0x10bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x10bcc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10bcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10bcc4: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x10bcc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x10bcc8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x10bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x10bccc: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x10bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x10bcd0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x10bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x10bcd4: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x10bcd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10bcd8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x10bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x10bcdc: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x10BCDCu;
    SET_GPR_U32(ctx, 31, 0x10BCE4u);
    ctx->pc = 0x10BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BCDCu;
    // 0x10bce0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x10BCDCu, 0x10BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BCE4u;
label_10bce4:
    // 0x10bce4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x10bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10bce8: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x10bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x10bcec: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x10bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x10bcf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10bcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bcf4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x10bcf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10bcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bcfc: 0xc043dd8  jal         func_10F760
    ctx->pc = 0x10BCFCu;
    SET_GPR_U32(ctx, 31, 0x10BD04u);
    ctx->pc = 0x10BD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BCFCu;
    // 0x10bd00: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F760u, 0x10BCFCu, 0x10BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD04u;
label_10bd04:
    // 0x10bd04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10bd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd08: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10BD08u;
    {
        const bool branch_taken_0x10bd08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD08u;
        // 0x10bd0c: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd08) {
            ctx->pc = 0x10BD30u;
            goto label_10bd30;
        }
    }
    ctx->pc = 0x10BD10u;
    // 0x10bd10: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x10bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_10bd14:
    // 0x10bd14: 0x8c431064  lw          $v1, 0x1064($v0)
    ctx->pc = 0x10bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4196)));
    // 0x10bd18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BD18u;
    {
        const bool branch_taken_0x10bd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD18u;
        // 0x10bd1c: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd18) {
            ctx->pc = 0x10BD28u;
            goto label_10bd28;
        }
    }
    ctx->pc = 0x10BD20u;
    // 0x10bd20: 0xc044794  jal         func_111E50
    ctx->pc = 0x10BD20u;
    SET_GPR_U32(ctx, 31, 0x10BD28u);
    ctx->pc = 0x10BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD20u;
    // 0x10bd24: 0x2484dd38  addiu       $a0, $a0, -0x22C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x10BD20u, 0x10BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD28u;
label_10bd28:
    // 0x10bd28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10BD28u;
    {
        const bool branch_taken_0x10bd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD28u;
        // 0x10bd2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd28) {
            ctx->pc = 0x10BD38u;
            goto label_10bd38;
        }
    }
    ctx->pc = 0x10BD30u;
label_10bd30:
    // 0x10bd30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bd34: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x10bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_10bd38:
    // 0x10bd38: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x10bd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10bd3c: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x10bd3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10bd40: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x10bd40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10bd44: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x10bd44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10bd48: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10bd48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10bd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x10BD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD4Cu;
        // 0x10bd50: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BD54u;
    // 0x10bd54: 0x0  nop
    ctx->pc = 0x10bd54u;
    // NOP
    ctx->pc = 0x10bd58u;
}

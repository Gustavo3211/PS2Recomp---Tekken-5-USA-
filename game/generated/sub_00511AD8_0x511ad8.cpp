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

// Function: sub_00511AD8
// Address: 0x511ad8 - 0x511bf0
void sub_00511AD8_0x511ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511AD8_0x511ad8");
#endif

    switch (ctx->pc) {
        case 0x511bc8u: goto label_511bc8;
        default: break;
    }

    ctx->pc = 0x511ad8u;

    // 0x511ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x511ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x511adc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x511adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x511ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x511ae4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x511ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x511ae8: 0x94c20054  lhu         $v0, 0x54($a2)
    ctx->pc = 0x511ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x511aec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x511aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x511af0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x511AF0u;
    {
        const bool branch_taken_0x511af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x511AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511AF0u;
        // 0x511af4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511af0) {
            ctx->pc = 0x511B60u;
            goto label_511b60;
        }
    }
    ctx->pc = 0x511AF8u;
    // 0x511af8: 0x84c40058  lh          $a0, 0x58($a2)
    ctx->pc = 0x511af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x511afc: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x511AFCu;
    {
        const bool branch_taken_0x511afc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x511B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511AFCu;
        // 0x511b00: 0x24c50056  addiu       $a1, $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511afc) {
            ctx->pc = 0x511B30u;
            goto label_511b30;
        }
    }
    ctx->pc = 0x511B04u;
    // 0x511b04: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x511b04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x511b08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x511b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x511b0c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511b10: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x511b10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x511b14: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x511b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x511b18: 0x2c624000  sltiu       $v0, $v1, 0x4000
    ctx->pc = 0x511b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x511b1c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x511B1Cu;
    {
        const bool branch_taken_0x511b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x511b1c) {
            ctx->pc = 0x511B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x511B1Cu;
            // 0x511b20: 0xa4a40000  sh          $a0, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x511B4Cu;
            goto label_511b4c;
        }
    }
    ctx->pc = 0x511B24u;
    // 0x511b24: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x511B24u;
    {
        const bool branch_taken_0x511b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511B24u;
        // 0x511b28: 0x24c3000c  addiu       $v1, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511b24) {
            ctx->pc = 0x511B90u;
            goto label_511b90;
        }
    }
    ctx->pc = 0x511B2Cu;
    // 0x511b2c: 0x0  nop
    ctx->pc = 0x511b2cu;
    // NOP
label_511b30:
    // 0x511b30: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x511b30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x511b34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x511b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x511b38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511b3c: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x511b3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x511b40: 0x480001d  bltz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x511B40u;
    {
        const bool branch_taken_0x511b40 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x511B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511B40u;
        // 0x511b44: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x511b40) {
            ctx->pc = 0x511BB8u;
            goto label_511bb8;
        }
    }
    ctx->pc = 0x511B48u;
    // 0x511b48: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x511b48u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
label_511b4c:
    // 0x511b4c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x511b4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x511b50: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x511b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x511b54: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x511b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x511b58: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x511B58u;
    {
        const bool branch_taken_0x511b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511B58u;
        // 0x511b5c: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511b58) {
            ctx->pc = 0x511BDCu;
            goto label_511bdc;
        }
    }
    ctx->pc = 0x511B60u;
label_511b60:
    // 0x511b60: 0x84c40058  lh          $a0, 0x58($a2)
    ctx->pc = 0x511b60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x511b64: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x511B64u;
    {
        const bool branch_taken_0x511b64 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x511B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511B64u;
        // 0x511b68: 0x24c50056  addiu       $a1, $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511b64) {
            ctx->pc = 0x511BA0u;
            goto label_511ba0;
        }
    }
    ctx->pc = 0x511B6Cu;
    // 0x511b6c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x511b6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x511b70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x511b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x511b74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511b78: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x511b78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x511b7c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x511b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x511b80: 0x2c634000  sltiu       $v1, $v1, 0x4000
    ctx->pc = 0x511b80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x511b84: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x511B84u;
    {
        const bool branch_taken_0x511b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x511b84) {
            ctx->pc = 0x511B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x511B84u;
            // 0x511b88: 0xa4a40000  sh          $a0, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x511BC0u;
            goto label_511bc0;
        }
    }
    ctx->pc = 0x511B8Cu;
    // 0x511b8c: 0x24c3000c  addiu       $v1, $a2, 0xC
    ctx->pc = 0x511b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_511b90:
    // 0x511b90: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x511b90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x511b94: 0x3042ff7f  andi        $v0, $v0, 0xFF7F
    ctx->pc = 0x511b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65407);
    // 0x511b98: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x511B98u;
    {
        const bool branch_taken_0x511b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511B98u;
        // 0x511b9c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511b98) {
            ctx->pc = 0x511BDCu;
            goto label_511bdc;
        }
    }
    ctx->pc = 0x511BA0u;
label_511ba0:
    // 0x511ba0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x511ba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x511ba4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x511ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x511ba8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511bac: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x511bacu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x511bb0: 0x4830003  bgezl       $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x511BB0u;
    {
        const bool branch_taken_0x511bb0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x511bb0) {
            ctx->pc = 0x511BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x511BB0u;
            // 0x511bb4: 0xa4a40000  sh          $a0, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x511BC0u;
            goto label_511bc0;
        }
    }
    ctx->pc = 0x511BB8u;
label_511bb8:
    // 0x511bb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x511BB8u;
    {
        const bool branch_taken_0x511bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511BB8u;
        // 0x511bbc: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511bb8) {
            ctx->pc = 0x511BDCu;
            goto label_511bdc;
        }
    }
    ctx->pc = 0x511BC0u;
label_511bc0:
    // 0x511bc0: 0xc144cf4  jal         func_5133D0
    ctx->pc = 0x511BC0u;
    SET_GPR_U32(ctx, 31, 0x511BC8u);
    ctx->pc = 0x511BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511BC0u;
    // 0x511bc4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x5133D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5133D0u, 0x511BC0u, 0x511BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511BC8u;
label_511bc8:
    // 0x511bc8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x511bc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x511bcc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x511bccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x511bd0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x511bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x511bd4: 0x31bc2  srl         $v1, $v1, 15
    ctx->pc = 0x511bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x511bd8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x511bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_511bdc:
    // 0x511bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x511bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x511be0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x511be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x511be4: 0x3e00008  jr          $ra
    ctx->pc = 0x511BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x511BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511BE4u;
        // 0x511be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511BECu;
    // 0x511bec: 0x0  nop
    ctx->pc = 0x511becu;
    // NOP
    ctx->pc = 0x511bf0u;
}

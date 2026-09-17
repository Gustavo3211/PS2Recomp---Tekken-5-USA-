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

// Function: sub_00509B78
// Address: 0x509b78 - 0x509c58
void sub_00509B78_0x509b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509B78_0x509b78");
#endif

    ctx->pc = 0x509b78u;

    // 0x509b78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x509b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509b7c: 0x3c0a008f  lui         $t2, 0x8F
    ctx->pc = 0x509b7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)143 << 16));
    // 0x509b80: 0x94a40078  lhu         $a0, 0x78($a1)
    ctx->pc = 0x509b80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x509b84: 0x2547c5f0  addiu       $a3, $t2, -0x3A10
    ctx->pc = 0x509b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952432));
    // 0x509b88: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x509b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x509b8c: 0x24a9007e  addiu       $t1, $a1, 0x7E
    ctx->pc = 0x509b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
    // 0x509b90: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x509b90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC5F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8EC5F0u, _value); } while (0);
    // 0x509b94: 0x2448c5f2  addiu       $t0, $v0, -0x3A0E
    ctx->pc = 0x509b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952434));
    // 0x509b98: 0x24a60080  addiu       $a2, $a1, 0x80
    ctx->pc = 0x509b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x509b9c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x509b9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x509ba0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x509ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x509ba4: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x509ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x509ba8: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x509ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x509bac: 0x31d82  srl         $v1, $v1, 22
    ctx->pc = 0x509bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 22));
    // 0x509bb0: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x509bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x509bb4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x509bb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x509bb8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x509bb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x509bbc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x509BBCu;
    {
        const bool branch_taken_0x509bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x509BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509BBCu;
        // 0x509bc0: 0x94c40000  lhu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509bbc) {
            ctx->pc = 0x509BE8u;
            goto label_509be8;
        }
    }
    ctx->pc = 0x509BC4u;
    // 0x509bc4: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x509bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x509bc8: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x509bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x509bcc: 0x2442c5fa  addiu       $v0, $v0, -0x3A06
    ctx->pc = 0x509bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952442));
    // 0x509bd0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x509bd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x509bd4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x509bd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC5FAu));
    // 0x509bd8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x509bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x509bdc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x509bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x509be0: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x509be0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x509be4: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x509be4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_509be8:
    // 0x509be8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x509be8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x509bec: 0xa4a2007c  sh          $v0, 0x7C($a1)
    ctx->pc = 0x509becu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 124), (uint16_t)GPR_U32(ctx, 2));
    // 0x509bf0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x509bf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x509bf4: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x509bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x509bf8: 0x84a2007a  lh          $v0, 0x7A($a1)
    ctx->pc = 0x509bf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 122)));
    // 0x509bfc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x509BFCu;
    {
        const bool branch_taken_0x509bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x509bfc) {
            ctx->pc = 0x509C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x509BFCu;
            // 0x509c00: 0x84a20076  lh          $v0, 0x76($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 118)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509C14u;
            goto label_509c14;
        }
    }
    ctx->pc = 0x509C04u;
    // 0x509c04: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x509c04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x509c08: 0x21023  negu        $v0, $v0
    ctx->pc = 0x509c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x509c0c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x509c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x509c10: 0x84a20076  lh          $v0, 0x76($a1)
    ctx->pc = 0x509c10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 118)));
label_509c14:
    // 0x509c14: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x509C14u;
    {
        const bool branch_taken_0x509c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x509c14) {
            ctx->pc = 0x509C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x509C14u;
            // 0x509c18: 0x94a20074  lhu         $v0, 0x74($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509C44u;
            goto label_509c44;
        }
    }
    ctx->pc = 0x509C1Cu;
    // 0x509c1c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x509c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x509c20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x509c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x509c24: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x509c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x509c28: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x509c28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x509c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x509c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x509c30: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x509c30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x509c34: 0x21023  negu        $v0, $v0
    ctx->pc = 0x509c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x509c38: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x509c38u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x509c3c: 0x94a30074  lhu         $v1, 0x74($a1)
    ctx->pc = 0x509c3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x509c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x509c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_509c44:
    // 0x509c44: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x509c44u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x509c48: 0x9542c5f0  lhu         $v0, -0x3A10($t2)
    ctx->pc = 0x509c48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294952432)));
    // 0x509c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x509C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509C4Cu;
        // 0x509c50: 0xa4a20072  sh          $v0, 0x72($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 114), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x509C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509C54u;
    // 0x509c54: 0x0  nop
    ctx->pc = 0x509c54u;
    // NOP
    ctx->pc = 0x509c58u;
}

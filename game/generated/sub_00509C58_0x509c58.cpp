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

// Function: sub_00509C58
// Address: 0x509c58 - 0x509d38
void sub_00509C58_0x509c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509C58_0x509c58");
#endif

    ctx->pc = 0x509c58u;

    // 0x509c58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x509c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509c5c: 0x3c0a008f  lui         $t2, 0x8F
    ctx->pc = 0x509c5cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)143 << 16));
    // 0x509c60: 0x94a40088  lhu         $a0, 0x88($a1)
    ctx->pc = 0x509c60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x509c64: 0x2547c5f0  addiu       $a3, $t2, -0x3A10
    ctx->pc = 0x509c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952432));
    // 0x509c68: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x509c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x509c6c: 0x24a9008e  addiu       $t1, $a1, 0x8E
    ctx->pc = 0x509c6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 142));
    // 0x509c70: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x509c70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC5F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8EC5F0u, _value); } while (0);
    // 0x509c74: 0x2448c5f2  addiu       $t0, $v0, -0x3A0E
    ctx->pc = 0x509c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952434));
    // 0x509c78: 0x24a60090  addiu       $a2, $a1, 0x90
    ctx->pc = 0x509c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x509c7c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x509c7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x509c80: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x509c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x509c84: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x509c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x509c88: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x509c88u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x509c8c: 0x31d82  srl         $v1, $v1, 22
    ctx->pc = 0x509c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 22));
    // 0x509c90: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x509c90u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x509c94: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x509c94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x509c98: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x509c98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x509c9c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x509C9Cu;
    {
        const bool branch_taken_0x509c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x509CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509C9Cu;
        // 0x509ca0: 0x94c40000  lhu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509c9c) {
            ctx->pc = 0x509CC8u;
            goto label_509cc8;
        }
    }
    ctx->pc = 0x509CA4u;
    // 0x509ca4: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x509ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x509ca8: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x509ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x509cac: 0x2442c5fa  addiu       $v0, $v0, -0x3A06
    ctx->pc = 0x509cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952442));
    // 0x509cb0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x509cb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x509cb4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x509cb4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC5FAu));
    // 0x509cb8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x509cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x509cbc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x509cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x509cc0: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x509cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x509cc4: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x509cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_509cc8:
    // 0x509cc8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x509cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x509ccc: 0xa4a2008c  sh          $v0, 0x8C($a1)
    ctx->pc = 0x509cccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 140), (uint16_t)GPR_U32(ctx, 2));
    // 0x509cd0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x509cd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x509cd4: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x509cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x509cd8: 0x84a2008a  lh          $v0, 0x8A($a1)
    ctx->pc = 0x509cd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 138)));
    // 0x509cdc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x509CDCu;
    {
        const bool branch_taken_0x509cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x509cdc) {
            ctx->pc = 0x509CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x509CDCu;
            // 0x509ce0: 0x84a20086  lh          $v0, 0x86($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 134)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509CF4u;
            goto label_509cf4;
        }
    }
    ctx->pc = 0x509CE4u;
    // 0x509ce4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x509ce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x509ce8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x509ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x509cec: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x509cecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x509cf0: 0x84a20086  lh          $v0, 0x86($a1)
    ctx->pc = 0x509cf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 134)));
label_509cf4:
    // 0x509cf4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x509CF4u;
    {
        const bool branch_taken_0x509cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x509cf4) {
            ctx->pc = 0x509CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x509CF4u;
            // 0x509cf8: 0x94a20084  lhu         $v0, 0x84($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509D24u;
            goto label_509d24;
        }
    }
    ctx->pc = 0x509CFCu;
    // 0x509cfc: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x509cfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x509d00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x509d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x509d04: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x509d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x509d08: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x509d08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x509d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x509d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x509d10: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x509d10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x509d14: 0x21023  negu        $v0, $v0
    ctx->pc = 0x509d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x509d18: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x509d18u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x509d1c: 0x94a30084  lhu         $v1, 0x84($a1)
    ctx->pc = 0x509d1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x509d20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x509d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_509d24:
    // 0x509d24: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x509d24u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x509d28: 0x9542c5f0  lhu         $v0, -0x3A10($t2)
    ctx->pc = 0x509d28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294952432)));
    // 0x509d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x509D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509D2Cu;
        // 0x509d30: 0xa4a20082  sh          $v0, 0x82($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 130), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x509D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509D34u;
    // 0x509d34: 0x0  nop
    ctx->pc = 0x509d34u;
    // NOP
    ctx->pc = 0x509d38u;
}

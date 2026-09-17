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

// Function: sub_005119C0
// Address: 0x5119c0 - 0x511ad8
void sub_005119C0_0x5119c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005119C0_0x5119c0");
#endif

    switch (ctx->pc) {
        case 0x511ab0u: goto label_511ab0;
        default: break;
    }

    ctx->pc = 0x5119c0u;

    // 0x5119c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5119c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5119c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x5119c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5119c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5119c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5119cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x5119ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x5119d0: 0x94c2004e  lhu         $v0, 0x4E($a2)
    ctx->pc = 0x5119d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 78)));
    // 0x5119d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x5119d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x5119d8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x5119D8u;
    {
        const bool branch_taken_0x5119d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5119DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5119D8u;
        // 0x5119dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5119d8) {
            ctx->pc = 0x511A48u;
            goto label_511a48;
        }
    }
    ctx->pc = 0x5119E0u;
    // 0x5119e0: 0x84c40052  lh          $a0, 0x52($a2)
    ctx->pc = 0x5119e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 82)));
    // 0x5119e4: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x5119E4u;
    {
        const bool branch_taken_0x5119e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x5119E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5119E4u;
        // 0x5119e8: 0x24c50050  addiu       $a1, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5119e4) {
            ctx->pc = 0x511A18u;
            goto label_511a18;
        }
    }
    ctx->pc = 0x5119ECu;
    // 0x5119ec: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x5119ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5119f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x5119f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x5119f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x5119f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5119f8: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x5119f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x5119fc: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x5119fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x511a00: 0x2c624000  sltiu       $v0, $v1, 0x4000
    ctx->pc = 0x511a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x511a04: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x511A04u;
    {
        const bool branch_taken_0x511a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x511a04) {
            ctx->pc = 0x511A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x511A04u;
            // 0x511a08: 0xa4a40000  sh          $a0, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x511A34u;
            goto label_511a34;
        }
    }
    ctx->pc = 0x511A0Cu;
    // 0x511a0c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x511A0Cu;
    {
        const bool branch_taken_0x511a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511A0Cu;
        // 0x511a10: 0x24c3000c  addiu       $v1, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511a0c) {
            ctx->pc = 0x511A78u;
            goto label_511a78;
        }
    }
    ctx->pc = 0x511A14u;
    // 0x511a14: 0x0  nop
    ctx->pc = 0x511a14u;
    // NOP
label_511a18:
    // 0x511a18: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x511a18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x511a1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x511a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x511a20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511a24: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x511a24u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x511a28: 0x480001d  bltz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x511A28u;
    {
        const bool branch_taken_0x511a28 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x511A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511A28u;
        // 0x511a2c: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x511a28) {
            ctx->pc = 0x511AA0u;
            goto label_511aa0;
        }
    }
    ctx->pc = 0x511A30u;
    // 0x511a30: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x511a30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
label_511a34:
    // 0x511a34: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x511a34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x511a38: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x511a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x511a3c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x511a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x511a40: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x511A40u;
    {
        const bool branch_taken_0x511a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511A40u;
        // 0x511a44: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511a40) {
            ctx->pc = 0x511AC4u;
            goto label_511ac4;
        }
    }
    ctx->pc = 0x511A48u;
label_511a48:
    // 0x511a48: 0x84c40052  lh          $a0, 0x52($a2)
    ctx->pc = 0x511a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 82)));
    // 0x511a4c: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x511A4Cu;
    {
        const bool branch_taken_0x511a4c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x511A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511A4Cu;
        // 0x511a50: 0x24c50050  addiu       $a1, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511a4c) {
            ctx->pc = 0x511A88u;
            goto label_511a88;
        }
    }
    ctx->pc = 0x511A54u;
    // 0x511a54: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x511a54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x511a58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x511a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x511a5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511a60: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x511a60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x511a64: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x511a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x511a68: 0x2c634000  sltiu       $v1, $v1, 0x4000
    ctx->pc = 0x511a68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x511a6c: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x511A6Cu;
    {
        const bool branch_taken_0x511a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x511a6c) {
            ctx->pc = 0x511A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x511A6Cu;
            // 0x511a70: 0xa4a40000  sh          $a0, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x511AA8u;
            goto label_511aa8;
        }
    }
    ctx->pc = 0x511A74u;
    // 0x511a74: 0x24c3000c  addiu       $v1, $a2, 0xC
    ctx->pc = 0x511a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_511a78:
    // 0x511a78: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x511a78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x511a7c: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x511a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x511a80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x511A80u;
    {
        const bool branch_taken_0x511a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511A80u;
        // 0x511a84: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511a80) {
            ctx->pc = 0x511AC4u;
            goto label_511ac4;
        }
    }
    ctx->pc = 0x511A88u;
label_511a88:
    // 0x511a88: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x511a88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x511a8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x511a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x511a90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511a94: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x511a94u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x511a98: 0x4830003  bgezl       $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x511A98u;
    {
        const bool branch_taken_0x511a98 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x511a98) {
            ctx->pc = 0x511A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x511A98u;
            // 0x511a9c: 0xa4a40000  sh          $a0, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x511AA8u;
            goto label_511aa8;
        }
    }
    ctx->pc = 0x511AA0u;
label_511aa0:
    // 0x511aa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x511AA0u;
    {
        const bool branch_taken_0x511aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511AA0u;
        // 0x511aa4: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511aa0) {
            ctx->pc = 0x511AC4u;
            goto label_511ac4;
        }
    }
    ctx->pc = 0x511AA8u;
label_511aa8:
    // 0x511aa8: 0xc144cf4  jal         func_5133D0
    ctx->pc = 0x511AA8u;
    SET_GPR_U32(ctx, 31, 0x511AB0u);
    ctx->pc = 0x511AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511AA8u;
    // 0x511aac: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x5133D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5133D0u, 0x511AA8u, 0x511AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511AB0u;
label_511ab0:
    // 0x511ab0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x511ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x511ab4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x511ab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x511ab8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x511ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x511abc: 0x31bc2  srl         $v1, $v1, 15
    ctx->pc = 0x511abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x511ac0: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x511ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_511ac4:
    // 0x511ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x511ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x511ac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x511ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x511acc: 0x3e00008  jr          $ra
    ctx->pc = 0x511ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x511AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511ACCu;
        // 0x511ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511AD4u;
    // 0x511ad4: 0x0  nop
    ctx->pc = 0x511ad4u;
    // NOP
    ctx->pc = 0x511ad8u;
}

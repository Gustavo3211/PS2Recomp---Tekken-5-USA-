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

// Function: sub_004CFEE0
// Address: 0x4cfee0 - 0x4cffb8
void sub_004CFEE0_0x4cfee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CFEE0_0x4cfee0");
#endif

    switch (ctx->pc) {
        case 0x4cfef4u: goto label_4cfef4;
        case 0x4cff10u: goto label_4cff10;
        case 0x4cff94u: goto label_4cff94;
        default: break;
    }

    ctx->pc = 0x4cfee0u;

    // 0x4cfee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cfee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cfee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cfee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cfee8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4cfee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4cfeec: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4CFEECu;
    SET_GPR_U32(ctx, 31, 0x4CFEF4u);
    ctx->pc = 0x4CFEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFEECu;
    // 0x4cfef0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4CFEECu, 0x4CFEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFEF4u;
label_4cfef4:
    // 0x4cfef4: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x4CFEF4u;
    {
        const bool branch_taken_0x4cfef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cfef4) {
            ctx->pc = 0x4CFEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CFEF4u;
            // 0x4cfef8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CFFA8u;
            goto label_4cffa8;
        }
    }
    ctx->pc = 0x4CFEFCu;
    // 0x4cfefc: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x4cfefcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x4cff00: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x4CFF00u;
    {
        const bool branch_taken_0x4cff00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cff00) {
            ctx->pc = 0x4CFF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CFF00u;
            // 0x4cff04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CFFA8u;
            goto label_4cffa8;
        }
    }
    ctx->pc = 0x4CFF08u;
    // 0x4cff08: 0xc126d66  jal         func_49B598
    ctx->pc = 0x4CFF08u;
    SET_GPR_U32(ctx, 31, 0x4CFF10u);
    ctx->pc = 0x4CFF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFF08u;
    // 0x4cff0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B598u, 0x4CFF08u, 0x4CFF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFF10u;
label_4cff10:
    // 0x4cff10: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x4cff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4cff14: 0xa6020160  sh          $v0, 0x160($s0)
    ctx->pc = 0x4cff14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cff18: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cff18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cff1c: 0x24a50fcc  addiu       $a1, $a1, 0xFCC
    ctx->pc = 0x4cff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4044));
    // 0x4cff20: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x4cff20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x4cff24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4cff24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FCCu));
    // 0x4cff28: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4cff28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4cff2c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4cff2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4cff30: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4cff30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4cff34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cff34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cff38: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4cff38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4cff3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cff3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cff40: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x4cff40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x4cff44: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4cff44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4cff48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cff48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cff4c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4cff4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cff50: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4cff50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4cff54: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4cff54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4cff58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cff58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cff5c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4cff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4cff60: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4cff60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cff64: 0xa6040162  sh          $a0, 0x162($s0)
    ctx->pc = 0x4cff64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 4));
    // 0x4cff68: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4cff68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cff6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cff70: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4cff70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4cff74: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cff74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cff78: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4cff78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4cff7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4cff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cff80: 0x94637318  lhu         $v1, 0x7318($v1)
    ctx->pc = 0x4cff80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 29464)));
    // 0x4cff84: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x4cff84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cff88: 0xa4c723c4  sh          $a3, 0x23C4($a2)
    ctx->pc = 0x4cff88u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 7));
    // 0x4cff8c: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4CFF8Cu;
    SET_GPR_U32(ctx, 31, 0x4CFF94u);
    ctx->pc = 0x4CFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFF8Cu;
    // 0x4cff90: 0xa4c023c2  sh          $zero, 0x23C2($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9154), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4CFF8Cu, 0x4CFF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFF94u;
label_4cff94:
    // 0x4cff94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4cff94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4cff98: 0xa6000166  sh          $zero, 0x166($s0)
    ctx->pc = 0x4cff98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cff9c: 0xa60201bc  sh          $v0, 0x1BC($s0)
    ctx->pc = 0x4cff9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cffa0: 0xa6000168  sh          $zero, 0x168($s0)
    ctx->pc = 0x4cffa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cffa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cffa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cffa8:
    // 0x4cffa8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4cffa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cffac: 0x3e00008  jr          $ra
    ctx->pc = 0x4CFFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFFACu;
        // 0x4cffb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CFFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CFFB4u;
    // 0x4cffb4: 0x0  nop
    ctx->pc = 0x4cffb4u;
    // NOP
    ctx->pc = 0x4cffb8u;
}

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

// Function: sub_00241A88
// Address: 0x241a88 - 0x241c98
void sub_00241A88_0x241a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241A88_0x241a88");
#endif

    switch (ctx->pc) {
        case 0x241adcu: goto label_241adc;
        case 0x241af0u: goto label_241af0;
        case 0x241afcu: goto label_241afc;
        case 0x241b24u: goto label_241b24;
        case 0x241b88u: goto label_241b88;
        case 0x241b90u: goto label_241b90;
        case 0x241bd0u: goto label_241bd0;
        case 0x241be0u: goto label_241be0;
        default: break;
    }

    ctx->pc = 0x241a88u;

    // 0x241a88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x241a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x241a8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x241a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x241a90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x241a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a94: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x241a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x241a98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x241a98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a9c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x241a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x241aa0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x241aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x241aa4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x241aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x241aa8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x241aa8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241aac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x241aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x241ab0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x241ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x241ab4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x241ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x241ab8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x241ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x241abc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x241abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x241ac0: 0x8fd50050  lw          $s5, 0x50($fp)
    ctx->pc = 0x241ac0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x241ac4: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x241ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x241ac8: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x241ac8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    // 0x241acc: 0x26940710  addiu       $s4, $s4, 0x710
    ctx->pc = 0x241accu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
    // 0x241ad0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x241ad0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x241ad4: 0xc090678  jal         func_2419E0
    ctx->pc = 0x241AD4u;
    SET_GPR_U32(ctx, 31, 0x241ADCu);
    ctx->pc = 0x241AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241AD4u;
    // 0x241ad8: 0x15b82b  sltu        $s7, $zero, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2419E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2419E0u, 0x241AD4u, 0x241ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241ADCu;
label_241adc:
    // 0x241adc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x241adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x241ae0: 0x5840001d  blezl       $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x241AE0u;
    {
        const bool branch_taken_0x241ae0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x241ae0) {
            ctx->pc = 0x241AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241AE0u;
            // 0x241ae4: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241B58u;
            goto label_241b58;
        }
    }
    ctx->pc = 0x241AE8u;
    // 0x241ae8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x241ae8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x241aec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x241aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_241af0:
    // 0x241af0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x241af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x241af4: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x241AF4u;
    SET_GPR_U32(ctx, 31, 0x241AFCu);
    ctx->pc = 0x241AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241AF4u;
    // 0x241af8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x241AF4u, 0x241AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AFCu;
label_241afc:
    // 0x241afc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x241afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x241b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b04: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x241b04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x241b08: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x241B08u;
    {
        const bool branch_taken_0x241b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B08u;
        // 0x241b0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b08) {
            ctx->pc = 0x241B44u;
            goto label_241b44;
        }
    }
    ctx->pc = 0x241B10u;
    // 0x241b10: 0x96300066  lhu         $s0, 0x66($s1)
    ctx->pc = 0x241b10u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
    // 0x241b14: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x241b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    // 0x241b18: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x241b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x241b1c: 0xc090648  jal         func_241920
    ctx->pc = 0x241B1Cu;
    SET_GPR_U32(ctx, 31, 0x241B24u);
    ctx->pc = 0x241B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B1Cu;
    // 0x241b20: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241920u, 0x241B1Cu, 0x241B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B24u;
label_241b24:
    // 0x241b24: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x241b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x241b28: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x241b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x241b2c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x241b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x241b30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x241B30u;
    {
        const bool branch_taken_0x241b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241b30) {
            ctx->pc = 0x241B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241B30u;
            // 0x241b34: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241B48u;
            goto label_241b48;
        }
    }
    ctx->pc = 0x241B38u;
    // 0x241b38: 0xae360008  sw          $s6, 0x8($s1)
    ctx->pc = 0x241b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 22));
    // 0x241b3c: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x241b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x241b40: 0xae360004  sw          $s6, 0x4($s1)
    ctx->pc = 0x241b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 22));
label_241b44:
    // 0x241b44: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x241b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_241b48:
    // 0x241b48: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x241b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241b4c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x241B4Cu;
    {
        const bool branch_taken_0x241b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B4Cu;
        // 0x241b50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b4c) {
            ctx->pc = 0x241AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241af0;
        }
    }
    ctx->pc = 0x241B54u;
    // 0x241b54: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x241b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_241b58:
    // 0x241b58: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x241b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x241b5c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x241B5Cu;
    {
        const bool branch_taken_0x241b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B5Cu;
        // 0x241b60: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b5c) {
            ctx->pc = 0x241C68u;
            goto label_241c68;
        }
    }
    ctx->pc = 0x241B64u;
    // 0x241b64: 0xafd2007c  sw          $s2, 0x7C($fp)
    ctx->pc = 0x241b64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 124), GPR_U32(ctx, 18));
    // 0x241b68: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x241b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x241b6c: 0x1840003e  blez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x241B6Cu;
    {
        const bool branch_taken_0x241b6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x241B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B6Cu;
        // 0x241b70: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b6c) {
            ctx->pc = 0x241C68u;
            goto label_241c68;
        }
    }
    ctx->pc = 0x241B74u;
    // 0x241b74: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x241b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x241b78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x241b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x241b7c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x241b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x241b80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x241b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b84: 0x0  nop
    ctx->pc = 0x241b84u;
    // NOP
label_241b88:
    // 0x241b88: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x241B88u;
    SET_GPR_U32(ctx, 31, 0x241B90u);
    ctx->pc = 0x241B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B88u;
    // 0x241b8c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x241B88u, 0x241B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B90u;
label_241b90:
    // 0x241b90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x241b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b94: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x241b94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x241b98: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x241B98u;
    {
        const bool branch_taken_0x241b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241b98) {
            ctx->pc = 0x241B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241B98u;
            // 0x241b9c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241C54u;
            goto label_241c54;
        }
    }
    ctx->pc = 0x241BA0u;
    // 0x241ba0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x241ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x241ba4: 0x26330058  addiu       $s3, $s1, 0x58
    ctx->pc = 0x241ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x241ba8: 0x18600029  blez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x241BA8u;
    {
        const bool branch_taken_0x241ba8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x241BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BA8u;
        // 0x241bac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ba8) {
            ctx->pc = 0x241C50u;
            goto label_241c50;
        }
    }
    ctx->pc = 0x241BB0u;
    // 0x241bb0: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x241bb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241bb4: 0x2417fffe  addiu       $s7, $zero, -0x2
    ctx->pc = 0x241bb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x241bb8: 0x17bc38  dsll        $s7, $s7, 16
    ctx->pc = 0x241bb8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 16);
    // 0x241bbc: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x241bbcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x241bc0: 0x17bc38  dsll        $s7, $s7, 16
    ctx->pc = 0x241bc0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 16);
    // 0x241bc4: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x241bc4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x241bc8: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x241bc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x241bcc: 0x8fc20078  lw          $v0, 0x78($fp)
    ctx->pc = 0x241bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
label_241bd0:
    // 0x241bd0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x241BD0u;
    {
        const bool branch_taken_0x241bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BD0u;
        // 0x241bd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241bd0) {
            ctx->pc = 0x241C40u;
            goto label_241c40;
        }
    }
    ctx->pc = 0x241BD8u;
    // 0x241bd8: 0xc0bf152  jal         func_2FC548
    ctx->pc = 0x241BD8u;
    SET_GPR_U32(ctx, 31, 0x241BE0u);
    ctx->pc = 0x241BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241BD8u;
    // 0x241bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC548u, 0x241BD8u, 0x241BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241BE0u;
label_241be0:
    // 0x241be0: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x241be0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x241be4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x241be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x241be8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241bec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x241becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241bf0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x241BF0u;
    {
        const bool branch_taken_0x241bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BF0u;
        // 0x241bf4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241bf0) {
            ctx->pc = 0x241BFCu;
            goto label_241bfc;
        }
    }
    ctx->pc = 0x241BF8u;
    // 0x241bf8: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x241bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_241bfc:
    // 0x241bfc: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x241BFCu;
    {
        const bool branch_taken_0x241bfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x241bfc) {
            ctx->pc = 0x241C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241BFCu;
            // 0x241c00: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241C40u;
            goto label_241c40;
        }
    }
    ctx->pc = 0x241C04u;
    // 0x241c04: 0xdca20028  ld          $v0, 0x28($a1)
    ctx->pc = 0x241c04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x241c08: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x241c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x241c0c: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x241c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x241c10: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x241c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x241c14: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x241c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x241c18: 0xfca20028  sd          $v0, 0x28($a1)
    ctx->pc = 0x241c18u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
    // 0x241c1c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x241c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x241c20: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x241c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241c24: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x241c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x241c28: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x241c28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x241c2c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x241c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241c30: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x241c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x241c34: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x241c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241c38: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x241c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x241c3c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x241c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_241c40:
    // 0x241c40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x241c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241c44: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x241c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x241c48: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x241C48u;
    {
        const bool branch_taken_0x241c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241c48) {
            ctx->pc = 0x241C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241C48u;
            // 0x241c4c: 0x8fc20078  lw          $v0, 0x78($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241bd0;
        }
    }
    ctx->pc = 0x241C50u;
label_241c50:
    // 0x241c50: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x241c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_241c54:
    // 0x241c54: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x241c54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x241c58: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x241c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241c5c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x241C5Cu;
    {
        const bool branch_taken_0x241c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C5Cu;
        // 0x241c60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c5c) {
            ctx->pc = 0x241B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241b88;
        }
    }
    ctx->pc = 0x241C64u;
    // 0x241c64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x241c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_241c68:
    // 0x241c68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x241c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241c6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x241c6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241c70: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x241c70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x241c74: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x241c74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241c78: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x241c78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x241c7c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x241c7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x241c80: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x241c80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x241c84: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x241c84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x241c88: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x241c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x241c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x241C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C8Cu;
        // 0x241c90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241C94u;
    // 0x241c94: 0x0  nop
    ctx->pc = 0x241c94u;
    // NOP
    ctx->pc = 0x241c98u;
}

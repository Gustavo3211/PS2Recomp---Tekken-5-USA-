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

// Function: sub_00242BD0
// Address: 0x242bd0 - 0x242ce0
void sub_00242BD0_0x242bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242BD0_0x242bd0");
#endif

    switch (ctx->pc) {
        case 0x242c24u: goto label_242c24;
        case 0x242c40u: goto label_242c40;
        case 0x242c5cu: goto label_242c5c;
        case 0x242c6cu: goto label_242c6c;
        case 0x242c74u: goto label_242c74;
        case 0x242c7cu: goto label_242c7c;
        case 0x242c84u: goto label_242c84;
        case 0x242ca4u: goto label_242ca4;
        default: break;
    }

    ctx->pc = 0x242bd0u;

    // 0x242bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x242bd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242bd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242bdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x242bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x242be0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x242be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x242be4: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x242be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x242be8: 0x14800032  bnez        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x242BE8u;
    {
        const bool branch_taken_0x242be8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x242BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BE8u;
        // 0x242bec: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242be8) {
            ctx->pc = 0x242CB4u;
            goto label_242cb4;
        }
    }
    ctx->pc = 0x242BF0u;
    // 0x242bf0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x242bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x242bf4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x242BF4u;
    {
        const bool branch_taken_0x242bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BF4u;
        // 0x242bf8: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bf4) {
            ctx->pc = 0x242CB8u;
            goto label_242cb8;
        }
    }
    ctx->pc = 0x242BFCu;
    // 0x242bfc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x242bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x242c00: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x242C00u;
    {
        const bool branch_taken_0x242c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242c00) {
            ctx->pc = 0x242C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242C00u;
            // 0x242c04: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242CBCu;
            goto label_242cbc;
        }
    }
    ctx->pc = 0x242C08u;
    // 0x242c08: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x242c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x242c0c: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x242C0Cu;
    {
        const bool branch_taken_0x242c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242c0c) {
            ctx->pc = 0x242C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242C0Cu;
            // 0x242c10: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242CBCu;
            goto label_242cbc;
        }
    }
    ctx->pc = 0x242C14u;
    // 0x242c14: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x242C14u;
    {
        const bool branch_taken_0x242c14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x242c14) {
            ctx->pc = 0x242C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242C14u;
            // 0x242c18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242C2Cu;
            goto label_242c2c;
        }
    }
    ctx->pc = 0x242C1Cu;
    // 0x242c1c: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x242C1Cu;
    SET_GPR_U32(ctx, 31, 0x242C24u);
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x242C1Cu, 0x242C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C24u;
label_242c24:
    // 0x242c24: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x242C24u;
    {
        const bool branch_taken_0x242c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C24u;
        // 0x242c28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c24) {
            ctx->pc = 0x242CA4u;
            goto label_242ca4;
        }
    }
    ctx->pc = 0x242C2Cu;
label_242c2c:
    // 0x242c2c: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x242C2Cu;
    {
        const bool branch_taken_0x242c2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x242c2c) {
            ctx->pc = 0x242C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242C2Cu;
            // 0x242c30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242C48u;
            goto label_242c48;
        }
    }
    ctx->pc = 0x242C34u;
    // 0x242c34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x242c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242c38: 0xc0898ee  jal         func_2263B8
    ctx->pc = 0x242C38u;
    SET_GPR_U32(ctx, 31, 0x242C40u);
    ctx->pc = 0x242C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C38u;
    // 0x242c3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2263B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2263B8u, 0x242C38u, 0x242C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C40u;
label_242c40:
    // 0x242c40: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x242C40u;
    {
        const bool branch_taken_0x242c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C40u;
        // 0x242c44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c40) {
            ctx->pc = 0x242CA4u;
            goto label_242ca4;
        }
    }
    ctx->pc = 0x242C48u;
label_242c48:
    // 0x242c48: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x242C48u;
    {
        const bool branch_taken_0x242c48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x242c48) {
            ctx->pc = 0x242C64u;
            goto label_242c64;
        }
    }
    ctx->pc = 0x242C50u;
    // 0x242c50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x242c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242c54: 0xc0898ee  jal         func_2263B8
    ctx->pc = 0x242C54u;
    SET_GPR_U32(ctx, 31, 0x242C5Cu);
    ctx->pc = 0x242C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C54u;
    // 0x242c58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2263B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2263B8u, 0x242C54u, 0x242C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C5Cu;
label_242c5c:
    // 0x242c5c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x242C5Cu;
    {
        const bool branch_taken_0x242c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242c5c) {
            ctx->pc = 0x242C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242C5Cu;
            // 0x242c60: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242CB4u;
            goto label_242cb4;
        }
    }
    ctx->pc = 0x242C64u;
label_242c64:
    // 0x242c64: 0xc090848  jal         func_242120
    ctx->pc = 0x242C64u;
    SET_GPR_U32(ctx, 31, 0x242C6Cu);
    ctx->pc = 0x242C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C64u;
    // 0x242c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242120u, 0x242C64u, 0x242C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C6Cu;
label_242c6c:
    // 0x242c6c: 0xc090726  jal         func_241C98
    ctx->pc = 0x242C6Cu;
    SET_GPR_U32(ctx, 31, 0x242C74u);
    ctx->pc = 0x242C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C6Cu;
    // 0x242c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241C98u, 0x242C6Cu, 0x242C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C74u;
label_242c74:
    // 0x242c74: 0xc0907cc  jal         func_241F30
    ctx->pc = 0x242C74u;
    SET_GPR_U32(ctx, 31, 0x242C7Cu);
    ctx->pc = 0x242C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C74u;
    // 0x242c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241F30u, 0x242C74u, 0x242C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C7Cu;
label_242c7c:
    // 0x242c7c: 0xc0906a2  jal         func_241A88
    ctx->pc = 0x242C7Cu;
    SET_GPR_U32(ctx, 31, 0x242C84u);
    ctx->pc = 0x242C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C7Cu;
    // 0x242c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241A88u, 0x242C7Cu, 0x242C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C84u;
label_242c84:
    // 0x242c84: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x242c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x242c88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x242c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242c8c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x242c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x242c90: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x242c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x242c94: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x242C94u;
    {
        const bool branch_taken_0x242c94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x242C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C94u;
        // 0x242c98: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c94) {
            ctx->pc = 0x242CB0u;
            goto label_242cb0;
        }
    }
    ctx->pc = 0x242C9Cu;
    // 0x242c9c: 0xc08be3c  jal         func_22F8F0
    ctx->pc = 0x242C9Cu;
    SET_GPR_U32(ctx, 31, 0x242CA4u);
    ctx->pc = 0x22F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8F0u, 0x242C9Cu, 0x242CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CA4u;
label_242ca4:
    // 0x242ca4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x242CA4u;
    {
        const bool branch_taken_0x242ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CA4u;
        // 0x242ca8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ca4) {
            ctx->pc = 0x242CB4u;
            goto label_242cb4;
        }
    }
    ctx->pc = 0x242CACu;
    // 0x242cac: 0x0  nop
    ctx->pc = 0x242cacu;
    // NOP
label_242cb0:
    // 0x242cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x242cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242cb4:
    // 0x242cb4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x242cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_242cb8:
    // 0x242cb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_242cbc:
    // 0x242cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242cc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x242cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242cc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x242cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242cc8: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x242cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x242ccc: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x242cccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x242cd0: 0xac245d98  sw          $a0, 0x5D98($at)
    ctx->pc = 0x242cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23960), GPR_U32(ctx, 4));
    // 0x242cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x242CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CD4u;
        // 0x242cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242CDCu;
    // 0x242cdc: 0x0  nop
    ctx->pc = 0x242cdcu;
    // NOP
    ctx->pc = 0x242ce0u;
}

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

// Function: sub_002D5B80
// Address: 0x2d5b80 - 0x2d5e50
void sub_002D5B80_0x2d5b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5B80_0x2d5b80");
#endif

    switch (ctx->pc) {
        case 0x2d5bc0u: goto label_2d5bc0;
        case 0x2d5be8u: goto label_2d5be8;
        case 0x2d5bf0u: goto label_2d5bf0;
        case 0x2d5bfcu: goto label_2d5bfc;
        case 0x2d5c0cu: goto label_2d5c0c;
        case 0x2d5c1cu: goto label_2d5c1c;
        case 0x2d5c2cu: goto label_2d5c2c;
        case 0x2d5c54u: goto label_2d5c54;
        case 0x2d5c74u: goto label_2d5c74;
        case 0x2d5c94u: goto label_2d5c94;
        case 0x2d5cb4u: goto label_2d5cb4;
        case 0x2d5cbcu: goto label_2d5cbc;
        case 0x2d5cccu: goto label_2d5ccc;
        case 0x2d5d18u: goto label_2d5d18;
        case 0x2d5d38u: goto label_2d5d38;
        case 0x2d5d6cu: goto label_2d5d6c;
        case 0x2d5de4u: goto label_2d5de4;
        default: break;
    }

    ctx->pc = 0x2d5b80u;

    // 0x2d5b80: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d5b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2d5b84: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d5b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d5b88: 0x8c628878  lw          $v0, -0x7788($v1)
    ctx->pc = 0x2d5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8878u));
    // 0x2d5b8c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d5b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d5b90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b94: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d5b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d5b98: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d5b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d5b9c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d5b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d5ba0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d5ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d5ba4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2d5ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2d5ba8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d5ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d5bac: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x2d5bacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d5bb0: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x2D5BB0u;
    {
        const bool branch_taken_0x2d5bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BB0u;
        // 0x2d5bb4: 0xe7b40058  swc1        $f20, 0x58($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5bb0) {
            ctx->pc = 0x2D5E24u;
            goto label_2d5e24;
        }
    }
    ctx->pc = 0x2D5BB8u;
    // 0x2d5bb8: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2D5BB8u;
    SET_GPR_U32(ctx, 31, 0x2D5BC0u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2D5BB8u, 0x2D5BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BC0u;
label_2d5bc0:
    // 0x2d5bc0: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2D5BC0u;
    {
        const bool branch_taken_0x2d5bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BC0u;
        // 0x2d5bc4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5bc0) {
            ctx->pc = 0x2D5E28u;
            goto label_2d5e28;
        }
    }
    ctx->pc = 0x2D5BC8u;
    // 0x2d5bc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d5bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d5bcc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d5bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d5bd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d5bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d5bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d5bd8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2d5bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2d5bdc: 0x2415005e  addiu       $s5, $zero, 0x5E
    ctx->pc = 0x2d5bdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x2d5be0: 0x24140060  addiu       $s4, $zero, 0x60
    ctx->pc = 0x2d5be0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2d5be4: 0x24130062  addiu       $s3, $zero, 0x62
    ctx->pc = 0x2d5be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_2d5be8:
    // 0x2d5be8: 0xc0b21d6  jal         func_2C8758
    ctx->pc = 0x2D5BE8u;
    SET_GPR_U32(ctx, 31, 0x2D5BF0u);
    ctx->pc = 0x2D5BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5BE8u;
    // 0x2d5bec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8758u, 0x2D5BE8u, 0x2D5BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BF0u;
label_2d5bf0:
    // 0x2d5bf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d5bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bf4: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2D5BF4u;
    SET_GPR_U32(ctx, 31, 0x2D5BFCu);
    ctx->pc = 0x2D5BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5BF4u;
    // 0x2d5bf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2D5BF4u, 0x2D5BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5BFCu;
label_2d5bfc:
    // 0x2d5bfc: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2D5BFCu;
    {
        const bool branch_taken_0x2d5bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5bfc) {
            ctx->pc = 0x2D5C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5BFCu;
            // 0x2d5c00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5D1Cu;
            goto label_2d5d1c;
        }
    }
    ctx->pc = 0x2D5C04u;
    // 0x2d5c04: 0xc0a39a0  jal         func_28E680
    ctx->pc = 0x2D5C04u;
    SET_GPR_U32(ctx, 31, 0x2D5C0Cu);
    ctx->pc = 0x28E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E680u, 0x2D5C04u, 0x2D5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C0Cu;
label_2d5c0c:
    // 0x2d5c0c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D5C0Cu;
    {
        const bool branch_taken_0x2d5c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5c0c) {
            ctx->pc = 0x2D5C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5C0Cu;
            // 0x2d5c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5C34u;
            goto label_2d5c34;
        }
    }
    ctx->pc = 0x2D5C14u;
    // 0x2d5c14: 0xc0a39aa  jal         func_28E6A8
    ctx->pc = 0x2D5C14u;
    SET_GPR_U32(ctx, 31, 0x2D5C1Cu);
    ctx->pc = 0x28E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E6A8u, 0x2D5C14u, 0x2D5C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C1Cu;
label_2d5c1c:
    // 0x2d5c1c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5C1Cu;
    {
        const bool branch_taken_0x2d5c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5c1c) {
            ctx->pc = 0x2D5C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5C1Cu;
            // 0x2d5c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5C34u;
            goto label_2d5c34;
        }
    }
    ctx->pc = 0x2D5C24u;
    // 0x2d5c24: 0xc0a398c  jal         func_28E630
    ctx->pc = 0x2D5C24u;
    SET_GPR_U32(ctx, 31, 0x2D5C2Cu);
    ctx->pc = 0x28E630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E630u, 0x2D5C24u, 0x2D5C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C2Cu;
label_2d5c2c:
    // 0x2d5c2c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D5C2Cu;
    {
        const bool branch_taken_0x2d5c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C2Cu;
        // 0x2d5c30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c2c) {
            ctx->pc = 0x2D5CB4u;
            goto label_2d5cb4;
        }
    }
    ctx->pc = 0x2D5C34u;
label_2d5c34:
    // 0x2d5c34: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5C34u;
    {
        const bool branch_taken_0x2d5c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D5C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C34u;
        // 0x2d5c38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c34) {
            ctx->pc = 0x2D5C44u;
            goto label_2d5c44;
        }
    }
    ctx->pc = 0x2D5C3Cu;
    // 0x2d5c3c: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5C3Cu;
    {
        const bool branch_taken_0x2d5c3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C3Cu;
        // 0x2d5c40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c3c) {
            ctx->pc = 0x2D5C80u;
            goto label_2d5c80;
        }
    }
    ctx->pc = 0x2D5C44u;
label_2d5c44:
    // 0x2d5c44: 0xc62c005c  lwc1        $f12, 0x5C($s1)
    ctx->pc = 0x2d5c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5c48: 0x2410005d  addiu       $s0, $zero, 0x5D
    ctx->pc = 0x2d5c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x2d5c4c: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x2D5C4Cu;
    SET_GPR_U32(ctx, 31, 0x2D5C54u);
    ctx->pc = 0x2D5C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C4Cu;
    // 0x2d5c50: 0x2b2800b  movn        $s0, $s5, $s2 (Delay Slot)
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x2D5C4Cu, 0x2D5C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C54u;
label_2d5c54:
    // 0x2d5c54: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2d5c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2d5c58: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2d5c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2d5c5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d5c64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c68: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d5c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5c6c: 0xc0b5682  jal         func_2D5A08
    ctx->pc = 0x2D5C6Cu;
    SET_GPR_U32(ctx, 31, 0x2D5C74u);
    ctx->pc = 0x2D5C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C6Cu;
    // 0x2d5c70: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A08u, 0x2D5C6Cu, 0x2D5C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C74u;
label_2d5c74:
    // 0x2d5c74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D5C74u;
    {
        const bool branch_taken_0x2d5c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5c74) {
            ctx->pc = 0x2D5CB4u;
            goto label_2d5cb4;
        }
    }
    ctx->pc = 0x2D5C7Cu;
    // 0x2d5c7c: 0x0  nop
    ctx->pc = 0x2d5c7cu;
    // NOP
label_2d5c80:
    // 0x2d5c80: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D5C80u;
    {
        const bool branch_taken_0x2d5c80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C80u;
        // 0x2d5c84: 0x2410005f  addiu       $s0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c80) {
            ctx->pc = 0x2D5CB4u;
            goto label_2d5cb4;
        }
    }
    ctx->pc = 0x2D5C88u;
    // 0x2d5c88: 0xc62c005c  lwc1        $f12, 0x5C($s1)
    ctx->pc = 0x2d5c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5c8c: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x2D5C8Cu;
    SET_GPR_U32(ctx, 31, 0x2D5C94u);
    ctx->pc = 0x2D5C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5C8Cu;
    // 0x2d5c90: 0x292800b  movn        $s0, $s4, $s2 (Delay Slot)
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x2D5C8Cu, 0x2D5C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C94u;
label_2d5c94:
    // 0x2d5c94: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x2d5c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x2d5c98: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2d5c98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2d5c9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ca0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d5ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ca8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d5ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5cac: 0xc0b5682  jal         func_2D5A08
    ctx->pc = 0x2D5CACu;
    SET_GPR_U32(ctx, 31, 0x2D5CB4u);
    ctx->pc = 0x2D5CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5CACu;
    // 0x2d5cb0: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A08u, 0x2D5CACu, 0x2D5CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CB4u;
label_2d5cb4:
    // 0x2d5cb4: 0xc0a398c  jal         func_28E630
    ctx->pc = 0x2D5CB4u;
    SET_GPR_U32(ctx, 31, 0x2D5CBCu);
    ctx->pc = 0x28E630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E630u, 0x2D5CB4u, 0x2D5CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CBCu;
label_2d5cbc:
    // 0x2d5cbc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D5CBCu;
    {
        const bool branch_taken_0x2d5cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5cbc) {
            ctx->pc = 0x2D5CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5CBCu;
            // 0x2d5cc0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5D1Cu;
            goto label_2d5d1c;
        }
    }
    ctx->pc = 0x2D5CC4u;
    // 0x2d5cc4: 0xc0b233c  jal         func_2C8CF0
    ctx->pc = 0x2D5CC4u;
    SET_GPR_U32(ctx, 31, 0x2D5CCCu);
    ctx->pc = 0x2D5CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5CC4u;
    // 0x2d5cc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8CF0u, 0x2D5CC4u, 0x2D5CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5CCCu;
label_2d5ccc:
    // 0x2d5ccc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D5CCCu;
    {
        const bool branch_taken_0x2d5ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CCCu;
        // 0x2d5cd0: 0x24100061  addiu       $s0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ccc) {
            ctx->pc = 0x2D5D18u;
            goto label_2d5d18;
        }
    }
    ctx->pc = 0x2D5CD4u;
    // 0x2d5cd4: 0xc620006c  lwc1        $f0, 0x6C($s1)
    ctx->pc = 0x2d5cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5cd8: 0x272800b  movn        $s0, $s3, $s2
    ctx->pc = 0x2d5cd8u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
    // 0x2d5cdc: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5CDCu;
    {
        const bool branch_taken_0x2d5cdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CDCu;
        // 0x2d5ce0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5cdc) {
            ctx->pc = 0x2D5CECu;
            goto label_2d5cec;
        }
    }
    ctx->pc = 0x2D5CE4u;
    // 0x2d5ce4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d5ce4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d5ce8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d5ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d5cec:
    // 0x2d5cec: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x2d5cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5cf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cf4: 0xc62c0068  lwc1        $f12, 0x68($s1)
    ctx->pc = 0x2d5cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5cf8: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x2d5cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x2d5cfc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d5cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d00: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d5d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5d04: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2d5d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d5d08: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d5d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d5d0c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2d5d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2d5d10: 0xc0b5682  jal         func_2D5A08
    ctx->pc = 0x2D5D10u;
    SET_GPR_U32(ctx, 31, 0x2D5D18u);
    ctx->pc = 0x2D5D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D10u;
    // 0x2d5d14: 0xe7b40014  swc1        $f20, 0x14($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A08u, 0x2D5D10u, 0x2D5D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D18u;
label_2d5d18:
    // 0x2d5d18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d5d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d5d1c:
    // 0x2d5d1c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2d5d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d5d20: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x2D5D20u;
    {
        const bool branch_taken_0x2d5d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5d20) {
            ctx->pc = 0x2D5BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5be8;
        }
    }
    ctx->pc = 0x2D5D28u;
    // 0x2d5d28: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x2d5d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5d2c: 0xc78c94bc  lwc1        $f12, -0x6B44($gp)
    ctx->pc = 0x2d5d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5d30: 0xc0a6088  jal         func_298220
    ctx->pc = 0x2D5D30u;
    SET_GPR_U32(ctx, 31, 0x2D5D38u);
    ctx->pc = 0x2D5D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D30u;
    // 0x2d5d34: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x298220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298220u, 0x2D5D30u, 0x2D5D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D38u;
label_2d5d38:
    // 0x2d5d38: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2d5d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2d5d3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5D3Cu;
    {
        const bool branch_taken_0x2d5d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D3Cu;
        // 0x2d5d40: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d3c) {
            ctx->pc = 0x2D5D58u;
            goto label_2d5d58;
        }
    }
    ctx->pc = 0x2D5D44u;
    // 0x2d5d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5d48: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D5D48u;
    {
        const bool branch_taken_0x2d5d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D48u;
        // 0x2d5d4c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d48) {
            ctx->pc = 0x2D5DD0u;
            goto label_2d5dd0;
        }
    }
    ctx->pc = 0x2D5D50u;
    // 0x2d5d50: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2D5D50u;
    {
        const bool branch_taken_0x2d5d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D50u;
        // 0x2d5d54: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d50) {
            ctx->pc = 0x2D5E2Cu;
            goto label_2d5e2c;
        }
    }
    ctx->pc = 0x2D5D58u;
label_2d5d58:
    // 0x2d5d58: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x2d5d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5d5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d5d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d5d60: 0xc78c94c0  lwc1        $f12, -0x6B40($gp)
    ctx->pc = 0x2d5d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5d64: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x2D5D64u;
    SET_GPR_U32(ctx, 31, 0x2D5D6Cu);
    ctx->pc = 0x2D5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D64u;
    // 0x2d5d68: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x2D5D64u, 0x2D5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D6Cu;
label_2d5d6c:
    // 0x2d5d6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d5d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d5d70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d5d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d5d74: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d5d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d5d78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d5d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d5d7c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d5d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d5d80: 0xc78194c4  lwc1        $f1, -0x6B3C($gp)
    ctx->pc = 0x2d5d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5d84: 0x3c01435c  lui         $at, 0x435C
    ctx->pc = 0x2d5d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17244 << 16));
    // 0x2d5d88: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d5d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d5d8c: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2d5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2d5d90: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d5d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d5d94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d5d98: 0x28430015  slti        $v1, $v0, 0x15
    ctx->pc = 0x2d5d98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x2d5d9c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2d5d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2d5da0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2d5da0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2d5da4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2d5da4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d5da8: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x2d5da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x2d5dac: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2d5dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2d5db0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d5db0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d5db4: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x2d5db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x2d5db8: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D5DB8u;
    {
        const bool branch_taken_0x2d5db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DB8u;
        // 0x2d5dbc: 0xe6210070  swc1        $f1, 0x70($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5db8) {
            ctx->pc = 0x2D5E24u;
            goto label_2d5e24;
        }
    }
    ctx->pc = 0x2D5DC0u;
    // 0x2d5dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5dc4: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x2d5dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x2d5dc8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D5DC8u;
    {
        const bool branch_taken_0x2d5dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DC8u;
        // 0x2d5dcc: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5dc8) {
            ctx->pc = 0x2D5E24u;
            goto label_2d5e24;
        }
    }
    ctx->pc = 0x2D5DD0u;
label_2d5dd0:
    // 0x2d5dd0: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x2d5dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5dd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d5dd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d5dd8: 0xc78c94c8  lwc1        $f12, -0x6B38($gp)
    ctx->pc = 0x2d5dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5ddc: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x2D5DDCu;
    SET_GPR_U32(ctx, 31, 0x2D5DE4u);
    ctx->pc = 0x2D5DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5DDCu;
    // 0x2d5de0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x2D5DDCu, 0x2D5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5DE4u;
label_2d5de4:
    // 0x2d5de4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d5de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d5de8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d5de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d5dec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d5decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d5df0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d5df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d5df4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d5df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d5df8: 0xc78394cc  lwc1        $f3, -0x6B34($gp)
    ctx->pc = 0x2d5df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d5dfc: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2d5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2d5e00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d5e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d5e04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d5e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d5e08: 0x2843000b  slti        $v1, $v0, 0xB
    ctx->pc = 0x2d5e08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2d5e0c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2d5e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2d5e10: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d5e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d5e14: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5E14u;
    {
        const bool branch_taken_0x2d5e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E14u;
        // 0x2d5e18: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5e14) {
            ctx->pc = 0x2D5E24u;
            goto label_2d5e24;
        }
    }
    ctx->pc = 0x2D5E1Cu;
    // 0x2d5e1c: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x2d5e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x2d5e20: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x2d5e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_2d5e24:
    // 0x2d5e24: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d5e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d5e28:
    // 0x2d5e28: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d5e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5e2c:
    // 0x2d5e2c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d5e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5e30: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d5e30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d5e34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d5e34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5e38: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2d5e38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5e3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d5e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d5e40: 0xc7b50060  lwc1        $f21, 0x60($sp)
    ctx->pc = 0x2d5e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d5e44: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x2d5e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d5e48: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E48u;
        // 0x2d5e4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5E50u;
}

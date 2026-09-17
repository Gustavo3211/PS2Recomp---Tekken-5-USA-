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

// Function: sub_002199C0
// Address: 0x2199c0 - 0x219ab8
void sub_002199C0_0x2199c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002199C0_0x2199c0");
#endif

    switch (ctx->pc) {
        case 0x219a08u: goto label_219a08;
        case 0x219a34u: goto label_219a34;
        case 0x219a54u: goto label_219a54;
        case 0x219a6cu: goto label_219a6c;
        case 0x219a7cu: goto label_219a7c;
        default: break;
    }

    ctx->pc = 0x2199c0u;

    // 0x2199c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2199c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2199c4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2199c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2199c8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2199c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2199cc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2199ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2199d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2199d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2199d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2199d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2199d8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2199d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2199dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2199dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2199e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2199e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2199e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2199e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2199e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2199e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2199ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2199ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2199f0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2199f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2199f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2199f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2199f8: 0x2413003c  addiu       $s3, $zero, 0x3C
    ctx->pc = 0x2199f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2199fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2199fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x219a00: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x219a00u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x219a04: 0x82220020  lb          $v0, 0x20($s1)
    ctx->pc = 0x219a04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_219a08:
    // 0x219a08: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x219a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x219a0c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x219A0Cu;
    {
        const bool branch_taken_0x219a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A0Cu;
        // 0x219a10: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a0c) {
            ctx->pc = 0x219A7Cu;
            goto label_219a7c;
        }
    }
    ctx->pc = 0x219A14u;
    // 0x219a14: 0x8e828858  lw          $v0, -0x77A8($s4)
    ctx->pc = 0x219a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936664)));
    // 0x219a18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x219a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x219a1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x219A1Cu;
    {
        const bool branch_taken_0x219a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A1Cu;
        // 0x219a20: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a1c) {
            ctx->pc = 0x219A40u;
            goto label_219a40;
        }
    }
    ctx->pc = 0x219A24u;
    // 0x219a24: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x219a24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x219a28: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x219a28u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x219a2c: 0xc0cc57e  jal         func_3315F8
    ctx->pc = 0x219A2Cu;
    SET_GPR_U32(ctx, 31, 0x219A34u);
    ctx->pc = 0x219A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A2Cu;
    // 0x219a30: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3315F8u, 0x219A2Cu, 0x219A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A34u;
label_219a34:
    // 0x219a34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x219A34u;
    {
        const bool branch_taken_0x219a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219a34) {
            ctx->pc = 0x219A54u;
            goto label_219a54;
        }
    }
    ctx->pc = 0x219A3Cu;
    // 0x219a3c: 0x0  nop
    ctx->pc = 0x219a3cu;
    // NOP
label_219a40:
    // 0x219a40: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x219a40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x219a44: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x219a44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x219a48: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x219a48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x219a4c: 0xc0cc57e  jal         func_3315F8
    ctx->pc = 0x219A4Cu;
    SET_GPR_U32(ctx, 31, 0x219A54u);
    ctx->pc = 0x219A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A4Cu;
    // 0x219a50: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3315F8u, 0x219A4Cu, 0x219A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A54u;
label_219a54:
    // 0x219a54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219a58: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x219a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x219a5c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x219a5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x219a60: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x219a60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x219a64: 0xc0cc586  jal         func_331618
    ctx->pc = 0x219A64u;
    SET_GPR_U32(ctx, 31, 0x219A6Cu);
    ctx->pc = 0x219A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A64u;
    // 0x219a68: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331618u, 0x219A64u, 0x219A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A6Cu;
label_219a6c:
    // 0x219a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a70: 0x270200b  movn        $a0, $s3, $s0
    ctx->pc = 0x219a70u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
    // 0x219a74: 0xc0cc58e  jal         func_331638
    ctx->pc = 0x219A74u;
    SET_GPR_U32(ctx, 31, 0x219A7Cu);
    ctx->pc = 0x219A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A74u;
    // 0x219a78: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331638u, 0x219A74u, 0x219A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A7Cu;
label_219a7c:
    // 0x219a7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x219a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x219a80: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x219a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x219a84: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x219A84u;
    {
        const bool branch_taken_0x219a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219a84) {
            ctx->pc = 0x219A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219A84u;
            // 0x219a88: 0x82220020  lb          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219a08;
        }
    }
    ctx->pc = 0x219A8Cu;
    // 0x219a8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219a90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219a94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219a98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x219a98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219a9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x219a9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219aa0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x219aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219aa4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x219aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x219aa8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x219aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x219aac: 0x3e00008  jr          $ra
    ctx->pc = 0x219AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AACu;
        // 0x219ab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219AB4u;
    // 0x219ab4: 0x0  nop
    ctx->pc = 0x219ab4u;
    // NOP
    ctx->pc = 0x219ab8u;
}

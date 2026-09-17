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

// Function: sub_00219AB8
// Address: 0x219ab8 - 0x219be0
void sub_00219AB8_0x219ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219AB8_0x219ab8");
#endif

    switch (ctx->pc) {
        case 0x219b0cu: goto label_219b0c;
        case 0x219b10u: goto label_219b10;
        case 0x219b20u: goto label_219b20;
        case 0x219b4cu: goto label_219b4c;
        case 0x219b68u: goto label_219b68;
        case 0x219b7cu: goto label_219b7c;
        case 0x219b90u: goto label_219b90;
        default: break;
    }

    ctx->pc = 0x219ab8u;

    // 0x219ab8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x219ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219abc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x219abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x219ac0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219ac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219ac8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x219ac8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x219acc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x219accu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x219ad0: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x219ad0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    // 0x219ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219ad8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219adc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x219adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ae0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219ae4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x219ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219ae8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x219ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x219aec: 0x2413003c  addiu       $s3, $zero, 0x3C
    ctx->pc = 0x219aecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x219af0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x219af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x219af4: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x219af4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x219af8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x219af8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x219afc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x219afcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x219b00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x219b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x219b04: 0xc0cc586  jal         func_331618
    ctx->pc = 0x219B04u;
    SET_GPR_U32(ctx, 31, 0x219B0Cu);
    ctx->pc = 0x219B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B04u;
    // 0x219b08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331618u, 0x219B04u, 0x219B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B0Cu;
label_219b0c:
    // 0x219b0c: 0x0  nop
    ctx->pc = 0x219b0cu;
    // NOP
label_219b10:
    // 0x219b10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x219b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x219b18: 0xc0cc58e  jal         func_331638
    ctx->pc = 0x219B18u;
    SET_GPR_U32(ctx, 31, 0x219B20u);
    ctx->pc = 0x219B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B18u;
    // 0x219b1c: 0x271200b  movn        $a0, $s3, $s1 (Delay Slot)
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331638u, 0x219B18u, 0x219B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B20u;
label_219b20:
    // 0x219b20: 0x8e828858  lw          $v0, -0x77A8($s4)
    ctx->pc = 0x219b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936664)));
    // 0x219b24: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x219b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x219b28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x219B28u;
    {
        const bool branch_taken_0x219b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B28u;
        // 0x219b2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b28) {
            ctx->pc = 0x219B58u;
            goto label_219b58;
        }
    }
    ctx->pc = 0x219B30u;
    // 0x219b30: 0x82020020  lb          $v0, 0x20($s0)
    ctx->pc = 0x219b30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x219b34: 0x14520009  bne         $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x219B34u;
    {
        const bool branch_taken_0x219b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x219B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B34u;
        // 0x219b38: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b34) {
            ctx->pc = 0x219B5Cu;
            goto label_219b5c;
        }
    }
    ctx->pc = 0x219B3Cu;
    // 0x219b3c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x219b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x219b40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x219b40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x219b44: 0xc0cc57e  jal         func_3315F8
    ctx->pc = 0x219B44u;
    SET_GPR_U32(ctx, 31, 0x219B4Cu);
    ctx->pc = 0x219B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B44u;
    // 0x219b48: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3315F8u, 0x219B44u, 0x219B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B4Cu;
label_219b4c:
    // 0x219b4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x219B4Cu;
    {
        const bool branch_taken_0x219b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B4Cu;
        // 0x219b50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b4c) {
            ctx->pc = 0x219B6Cu;
            goto label_219b6c;
        }
    }
    ctx->pc = 0x219B54u;
    // 0x219b54: 0x0  nop
    ctx->pc = 0x219b54u;
    // NOP
label_219b58:
    // 0x219b58: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x219b58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_219b5c:
    // 0x219b5c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x219b5cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x219b60: 0xc0cc57e  jal         func_3315F8
    ctx->pc = 0x219B60u;
    SET_GPR_U32(ctx, 31, 0x219B68u);
    ctx->pc = 0x219B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B60u;
    // 0x219b64: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3315F8u, 0x219B60u, 0x219B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B68u;
label_219b68:
    // 0x219b68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x219b68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_219b6c:
    // 0x219b6c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x219b6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x219b70: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x219b70u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x219b74: 0xc0cc57e  jal         func_3315F8
    ctx->pc = 0x219B74u;
    SET_GPR_U32(ctx, 31, 0x219B7Cu);
    ctx->pc = 0x219B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B74u;
    // 0x219b78: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3315F8u, 0x219B74u, 0x219B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B7Cu;
label_219b7c:
    // 0x219b7c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x219b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x219b80: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x219B80u;
    {
        const bool branch_taken_0x219b80 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x219B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B80u;
        // 0x219b84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b80) {
            ctx->pc = 0x219BACu;
            goto label_219bac;
        }
    }
    ctx->pc = 0x219B88u;
    // 0x219b88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x219b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x219b8c: 0x0  nop
    ctx->pc = 0x219b8cu;
    // NOP
label_219b90:
    // 0x219b90: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x219b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x219b94: 0x0  nop
    ctx->pc = 0x219b94u;
    // NOP
    // 0x219b98: 0x0  nop
    ctx->pc = 0x219b98u;
    // NOP
    // 0x219b9c: 0x0  nop
    ctx->pc = 0x219b9cu;
    // NOP
    // 0x219ba0: 0x0  nop
    ctx->pc = 0x219ba0u;
    // NOP
    // 0x219ba4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x219BA4u;
    {
        const bool branch_taken_0x219ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219ba4) {
            ctx->pc = 0x219BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219BA4u;
            // 0x219ba8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219b90;
        }
    }
    ctx->pc = 0x219BACu;
label_219bac:
    // 0x219bac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x219bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x219bb0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x219bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x219bb4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x219BB4u;
    {
        const bool branch_taken_0x219bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BB4u;
        // 0x219bb8: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bb4) {
            ctx->pc = 0x219B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219b10;
        }
    }
    ctx->pc = 0x219BBCu;
    // 0x219bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219bc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219bc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219bc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219bc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x219bc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219bcc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x219bccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219bd0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x219bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219bd4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x219bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x219bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x219BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BD8u;
        // 0x219bdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219BE0u;
}
